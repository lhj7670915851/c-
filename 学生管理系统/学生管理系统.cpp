#include<iostream>
#include<fstream>
using namespace std;
class BirthDate{
    public:
        int year;//�� 
        int month;//�� 
        int day;//�� 
        BirthDate();
        BirthDate(int y,int m,int d):year(y),month(m),day(d){}
        friend istream& operator>>(istream &in,BirthDate &b);
        friend ostream& operator<<(ostream &out,BirthDate &b);
        void change(int,int,int);//�޸�
};
class Person 
{
    protected:
        string name;//���� 
        string sex;//�Ա� 
        BirthDate birth;//���� 
    public:
        Person();
        Person(string n,string s,int y,int m,int d):birth(y,m,d),name(n),sex(s){}
        ~Person();
        virtual void display();//��� 
        void input();//���� 
};
class Student:public Person//ѧ���� 
{ 
    protected:
        string id;//ѧ�� 
        string course[5];//���ſ���
        double score[5];//���ųɼ� 
        double total;//�ܷ�
        static int N;//ͳ��ѧ������ 
    public:
        Student();
        Student(string n,string s,int y,int m,int d,string i,string course[5],double score[5],double t);
        ~Student();
        friend istream& operator>>(istream &in,Student &s);
        friend ostream& operator<<(ostream &out,Student &s);
        void display();//��ӡ�ն� 
        void input(Student*);//���벢д���ļ�     
}; 
class Undergraduate:public Student//��ѧ���� 
{
    private:
        string major;//רҵ�� 
        double gpa;//���� 
        static int N;//ͳ��ѧ������ 
    public:
        Undergraduate();
        Undergraduate(string n,string s,int y,int m,int d,string i,string course[5],double score[5],double t,string major):Student(n,s,y,m,d,i,course,score,t),major(major){gpa=0;}
        ~Undergraduate();
        friend istream& operator>>(istream &in,Undergraduate &s);
        friend ostream& operator<<(ostream &out,Undergraduate &s);
        void display(); //��ʾ 
        void input(Undergraduate*);//����ѧ���ɼ�����Ϣ 
        void add(Undergraduate*);//���� 
        void remove(Undergraduate*);//ɾ�� 
        friend void search(Undergraduate*);//���� 
        void change(Undergraduate*);//�޸� 
        bool unique(const Undergraduate*,const string);//�ж��ظ�ѧ�� 
        friend void sort1(const Undergraduate *s);//���� 
        friend void sling(const Undergraduate*);//�ҿ� 
        void menu(Undergraduate*); //Ŀ¼ 
};
//BirthDate�� 
BirthDate::BirthDate()
{
    year=2000;
    month=1;
    day=1;
}
istream& operator>>(istream &in,BirthDate &b)
{
    in>>b.year>>b.month>>b.day;
    return in;
}
ostream& operator<<(ostream &out,BirthDate &b)
{
    out<<b.year<<" "<<b.month<<" "<<b.day;
    return out;
}
void BirthDate::change(int y,int m,int d)//�޸� 
{
    year=y;
    month=m;
    day=d;
}
//Person�� 
Person::Person()
{
    name='0';
    sex='0';
}
Person::~Person()
{    
} 
void Person::display()//��� 
{
    cout<<name<<" "<<sex<<" ";
    cout<<birth<<" ";
}
void Person::input()//���� 
{
    cin>>name>>sex;
    cin>>birth;
}
//Student�� 
int Student::N=0;
Student::Student()
{
    id='0';
     for(int i=0;i<5;i++)
    {
        course[i]='0';
        score[i]=0;
    }
    total=0;
}
Student::Student(string n,string s,int y,int m,int d,string i,string c[5],double sc[5],double t):Person(n,s,y,m,d),id(i),total(t)
{
    for(int i=0;i<5;i++)
    {
        course[i]=c[i];
        score[i]=sc[i];
    }
} 
Student::~Student()
{
}
istream& operator>>(istream &in,Student &s)
{
    in>>s.name>>s.sex>>s.birth;
    in>>s.id;
    in>>s.course[0]>>s.course[1]>>s.course[2]>>s.course[3]>>s.course[4];
    in>>s.score[0]>>s.score[1]>>s.score[2]>>s.score[3]>>s.score[4];
    return in;
}
ostream& operator<<(ostream &out,Student &s)
{
    out<<s.name<<" "<<s.sex<<" "<<s.birth<<" ";
    out<<s.id<<" "<<s.course[0]<<" "<<s.score[0]<<" ";
    out<<s.course[1]<<" "<<s.score[1]<<" "<<s.course[2]<<" "<<s.score[0]<<" ";
    out<<s.course[3]<<" "<<s.score[3]<<" "<<s.course[4]<<" "<<s.score[4];
    return out; 
}

void Student::display()
{
    Student s[N];
    cout<<"����  �Ա�  ��������  ѧ��  �γ���1  score1  �γ���2  score2  �γ���3  score3  �γ���4  score4  �γ���5  score5"<<endl; 
    ifstream infile("student.dat");
    if(!infile)
    {
        cout<<"open error!"<<endl;
    }
    for(int i=0;i<N;i++)
    {
        infile>>s[i];
        cout<<s[i]<<endl;
    }
    infile.close();
}
void Student::input(Student *s)
{
    int n;
    ofstream outfile("student.dat");
    if(!outfile)
    {
        cout<<"open error!"<<endl;
    }
    cout<<"�����뵼��ѧ��������"<<endl;
    cin>>n;
    N=n;
    cout<<"������ѧ����Ϣ"<<endl; 
    cout<<"����  �Ա�  �������ڣ��� �� ��  ѧ��  �γ���1  score1  �γ���2  score2  �γ���3  score3  �γ���4  score4  �γ���5  score5"<<endl; 
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        outfile<<s[i]<<endl;
    }
    outfile.close();
}

//Undergradu�� 
int Undergraduate::N=0;
Undergraduate::Undergraduate()
{
    major='0';
    gpa=0;
}
Undergraduate::~Undergraduate()
{
}
istream& operator>>(istream &in,Undergraduate &s)
{
    in>>s.major;
    in>>s.name>>s.sex>>s.birth; 
    in>>s.id>>s.course[0]>>s.score[0];
    in>>s.course[1]>>s.score[1]>>s.course[2]>>s.score[2];
    in>>s.course[3]>>s.score[3]>>s.course[4]>>s.score[4];
    return in;
} 
ostream& operator<<(ostream &out,Undergraduate &s)
{ 
    out<<s.major<<" ";
    out<<s.name<<" "<<s.sex<<" "<<s.birth<<" "; 
    out<<s.id<<" "<<s.course[0]<<"\t"<<s.score[0]<<"\t";
    out<<s.course[1]<<"\t"<<s.score[1]<<"\t"<<s.course[2]<<"\t"<<s.score[2]<<"\t";
    out<<s.course[3]<<"\t"<<s.score[3]<<"\t"<<s.course[4]<<"\t"<<s.score[4];
    return out;
} 

void Undergraduate::display()
{
    Undergraduate s[N];
    cout<<"רҵ  ����  �Ա�  ��������  ѧ��  �γ���1  score1  �γ���2  score2  �γ���3  score3  �γ���4  score4  �γ���5  score5"<<endl; 
    ifstream infile("Undergraduate.dat");//���ļ� 
    if(!infile)
    {
        cout<<"open error!"<<endl;
    }
    for(int i=0;i<N;i++)
    {
        infile>>s[i];//д���ļ� 
        cout<<s[i]<<endl;//��ӡ�ն� 
    }
    infile.close();//�ر��ն� 
}
void Undergraduate::input(Undergraduate *s)//���� 
{
    int n;
    ofstream outfile("Undergraduate.dat");//���ļ� 
    if(!outfile)
    {
        cout<<"open error!"<<endl;
    }
    cout<<"�����뵼��ѧ��������"<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"�������"<<endl;
     } 
    s[0].N=n;//ͳ��ѧ������ 
    cout<<"������ѧ���ɼ�����Ϣ"<<endl; 
    cout<<"רҵ  ����  �Ա�  �������ڣ��� �� ��  ѧ��  �γ���1  score1  �γ���2  score2  �γ���3  score3  �γ���4  score4  �γ���5   score5"<<endl; 
    try
    {
        for(int i=0;i<n;i++)
    {
        cin>>s[i];//����ѧ����Ϣ 
        if(s[i].score[0]<0||s[i].score[0]>100||s[i].score[1]<0||s[i].score[1]>100||s[i].score[2]<0||s[i].score[2]>100||s[i].score[3]<0||s[i].score[3]>100||s[i].score[4]<0||s[i].score[4]>100)
        {
            int a;
            throw a;
        }
        if(s[i].birth.year<=1980||s[i].birth.month<=0||s[i].birth.month>=12||s[i].birth.day<=0||s[i].birth.day>31)
        {
            BirthDate birth;
            throw birth;
         } 
        outfile<<s[i]<<endl;//д���ļ� 
    }
    outfile.close();//�ر��ļ� 
    }
    catch(int)
    {
        cout<<"����ĳɼ��Ƿ�"<<endl;
    }
    catch(BirthDate)
    { 
        cout<<"����������ڷǷ�"<<endl; 
    }
}
void Undergraduate::add(Undergraduate *s)//���� 
{
    int n; 
    cout<<"������Ҫ��ӵ�����"<<endl;
    cin>>n;
    cout<<"רҵ  ����  �Ա�  �������ڣ��� �� ��  ѧ��  �γ���1  score1  �γ���2  score2  �γ���3  score3  �γ���4  score4  �γ���5  score5"<<endl; 
    ofstream outfile("Undergraduate.dat",ios::app);//���ļ� 
    if(!outfile)
    {
        cout<<"open error!"<<endl;
    }
    try
    {
    for(int i=N;i<N+n;i++)
    {
        cin>>s[i];//����ѧ����Ϣ 
        if(Undergraduate::unique(s,s[i].id))//�ж��Ƿ������ظ�ѧ�� 
        {
            cout<<"����������ѧ���ɼ�����Ϣ��"<<endl;
            cin>>s[i]; 
        }
        if(s[i].score[0]<0||s[i].score[0]>100||s[i].score[1]<0||s[i].score[1]>100||s[i].score[2]<0||s[i].score[2]>100||s[i].score[3]<0||s[i].score[3]>100||s[i].score[4]<0||s[i].score[4]>100)
        {
            int a;
            throw a;
        }
        if(s[i].birth.year<=1980||s[i].birth.month<=0||s[i].birth.month>=12||s[i].birth.day<=0||s[i].birth.day>31)
        {
            BirthDate birth;
            throw birth;
         } 
        outfile<<s[i]<<endl;//��ѧ����Ϣд���ļ� 
    }
    outfile.close();//�ر��ļ� 
    N+=n;//����ѧ������ 
    }
    catch(int)
    {
        cout<<"����ĳɼ��Ƿ�"<<endl;
    }
    catch(BirthDate)
    { 
        cout<<"����������ڷǷ�"<<endl; 
    }
}
void Undergraduate::remove(Undergraduate *s)//ɾ�� 
{
    int n;
    string id; 
    bool flag=false;
    cout<<"������Ҫɾ��ѧ����Ϣ��ѧ�ţ�"<<endl;
    while(!flag) 
    {
    cin>>id;
    for(int i=0;i<N;i++)
    {
        if(s[i].id==id)//�ж��Ƿ��ҵ�Ҫɾ��ѧ��ѧ�� 
        {   
            flag=true;
            cout<<"ѧ���ɼ�����Ϣ��"<<endl; 
            for(int k=0;k<N;k++) //��ӡ���ն� 
            {
                cout<<s[k]<<endl;
            }
            for(int j=i;j<N-1;j++)//��ǰ��1Ϊ�����Ǹ�ѧ����Ϣ 
            s[j]=s[j+1];
            cout<<"ɾ���ɹ���"<<endl; 
            N=N-1;//����ѧ������ 
            break;
        }
    } 
    if(!flag)
    {
        cout<<"δ�ҵ���ѧ����Ϣ������������"<<endl; 
    }
}
    ofstream outfile("Undergraduate.dat");//���ļ� 
    if(!outfile)
    {
        cout<<"open error!"<<endl;
    }
    cout<<"ɾ����ѧ����Ϣ��"<<endl; 
    for(int i=0;i<N;i++)
    {
    outfile<<s[i]<<endl;//д���ļ� 
    cout<<s[i]<<endl;//��ӡ�ն�
    }
    outfile.close(); //�ر��ļ� 
}
void search(Undergraduate *s)//���� 
{
    string id; 
    bool flag=false;
    int i,j,count=0;
    int num[5]={-1};
    int N=s[0].N;
    cout<<"������Ҫ����ѧ����Ϣ��ѧ�ţ�"<<endl;
    while(!flag)
    {
        cin>>id;
    for(i=0;i<N;i++)
    {
        if(s[i].id==id)//�ж��Ƿ���ҵ���ѧ����Ϣ 
        {
            flag=true;
            cout<<"��ѧ����Ϣ��"<<endl;
            cout<<s[i];  
            for(j=0;j<5;j++)
            {
                if(s[i].score[j]<60)
                {
                    count++;//ͳ�ƹҿ��� 
                }
            }
            cout<<"\t��"<<count<<"�ſιҿ�"<<endl;
            break;
        }
     } 
     if(!flag)
    {
        cout<<"δ�ҵ���ѧ����Ϣ������������ѧ��"<<endl;
    }
    }
}
void Undergraduate::change(Undergraduate *s)//�޸� 
{
    string id; 
    bool flag=false;
    cout<<"������Ҫ�޸�ѧ����Ϣ��ѧ�ţ�"<<endl;
    while(!flag)
    {
      cin>>id; 
    for(int i=0;i<N;i++)
    {
        if(s[i].id==id)//�ж��Ƿ��ҵ�Ҫ�޸ĵ�ѧ��  
        {
            flag=true;
            cout<<"ѧ���ɼ���Ϣ��"<<endl;
            for(int k=0;k<N;k++) 
            {
               cout<<s[k]<<endl; //��ӡ�޸�ǰѧ������Ϣ 
            }
            cout<<"�����������ѧ����Ϣ��"<<endl;
            cin>>s[i];   
            break;
        }
     } 
     if(!flag)
     {
         cout<<"δ�ҵ���ѧ����Ϣ������������ѧ�ţ�"<<endl; 
     }
    }
    ofstream outfile("Undergraduate.dat");//���ļ� 
    if(!outfile)
    {
        cout<<"open error!"<<endl;
    }
    cout<<"�޸ĺ�ѧ���ɼ���Ϣ��"<<endl; 
    for(int i=0;i<N;i++)
    {
    outfile<<s[i]<<endl;//���޸ĺ�ѧ����Ϣд���ļ� 
    cout<<s[i]<<endl;//���޸ĺ���Ϣ��ӡ�ն� 
    }
    outfile.close(); //�ر��ļ� 
}
bool Undergraduate::unique(const Undergraduate *s,const string id)//�ж��ظ�ѧ�� 
{
        for(int i=0;i<N;i++)
    {
        if(s[i].id==id)
        {
            cout<<s[i].id<<"�Ѵ��ڣ����������ظ�ѧ�ŵ�ѧ����Ϣ��"<<endl;
            return true;
        }
    }
    return false;
}
void sort1(const Undergraduate *s)//��ѧ���������� 
{
    int i,j,k;
    int N=s[0].N;
    Undergraduate temp,stu[N];
    ifstream infile("Undergraduate.dat");
     if(!infile)
    {
        cout<<"open error!"<<endl;
    }
    for(i=0;i<N;i++)//���ļ��� 
        infile>>stu[i];
    infile.close(); 
       for(i=0;i<N;i++)//���ܷ� 
       {
            stu[i].total=0;
         for(j=0;j<5;j++)
         {
             stu[i].total+=stu[i].score[j];
         }
         stu[i].gpa=(stu[i].total/50.0)-5;//�󼨵� 
        }
    for(i=0;i<N-1;i++)//��ѧ������ð������ �Ӹߵ��ʹ�ӡ���ն� 
    {
        for(j=0;j<N-1-i;j++)
        {
           if(stu[j].gpa<stu[j+1].gpa) 
            {
               temp.name=stu[j].name;temp.sex=stu[j].sex;temp.birth=stu[j].birth;temp.id=stu[j].id;
               temp.name=stu[j].name;temp.total=stu[j].total;temp.gpa=stu[j].gpa;
                for(k=0;k<5;k++)
                 {
                   temp.course[k]=stu[j].course[k];
                   temp.score[k]=stu[j].score[k];
                 }
        
                stu[j].name=stu[j+1].name;stu[j].sex=stu[j+1].sex;stu[j].birth=stu[j+1].birth;stu[j].id=stu[j+1].id;
                stu[j].name=stu[j+1].name;stu[j].total=stu[j+1].total;stu[j].gpa=stu[j+1].gpa;
                for(k=0;k<5;k++)
                 {
                   stu[j].course[k]=stu[j+1].course[k];
                   stu[j].score[k]=stu[j+1].score[k];
                 }
        
                stu[j+1].name=temp.name;stu[j+1].sex=temp.sex;stu[j+1].birth=temp.birth;stu[j+1].id=temp.id;
                stu[j+1].name=temp.name;stu[j+1].total=temp.total;stu[j+1].gpa=temp.gpa;
                for(k=0;k<5;k++)
                 {
                   stu[j+1].course[k]=temp.course[k];
                   stu[j+1].score[k]=temp.score[k];
                 }
            }
        }
    }
    ofstream outfile("Undergraduate_score_list.dat");//���ļ�    
    cout<<"���� ѧ�� �γ���1 score1 �γ���2 score2 �γ���3 score3 �γ���4 score4 �γ���5 score5\t����"<<endl; 
    for(i=0;i<N;i++) 
    {
     outfile<<stu[i].name<<" "<<stu[i].id<<" ";//д���ļ� 
     cout<<stu[i].name<<" "<<stu[i].id<<" ";//��ӡ�ն� 
     for(j=0;j<5;j++)
     {
         outfile<<stu[i].course[j]<<"\t"<<stu[i].score[j]<<"\t";
         cout<<stu[i].course[j]<<"\t"<<stu[i].score[j]<<"\t";
     }
     outfile<<stu[i].gpa<<endl; 
     cout<<stu[i].gpa<<endl;
    }
    outfile.close(); //�ر��ļ� 
}
void sling(const Undergraduate *s)//ѧ���ҿ���� 
{
    int N=s[0].N;
    int i,j,count=0;
    Undergraduate stu[N];
    ifstream infile("Undergraduate.dat");//���ļ� 
     if(!infile)
    {
        cout<<"open error!"<<endl;
    }
    for(i=0;i<N;i++)//���ļ��� 
        infile>>stu[i];
    infile.close(); //�ر��ļ� 
    for(i=0;i<N;i++)
    {
        count=0;
        for(j=0;j<5;j++)
            {
                if(stu[i].score[j]<60)
                {
                    count++;//ͳ�ƹҿ��� 
                }
            }
        cout<<stu[i]<<"\t"<<"��"<<count<<"�ſιҿ�"<<endl; //��ӡѧ���ɼ�����Ϣ�͹ҿƵ���� 
    }
}
void Undergraduate::menu(Undergraduate *s)//ѧ���ɼ�����ϵͳ�˵� 
{
    Undergraduate STU;
    while(1)
    {  
    system("color b1");
    cout<<"*===============================================================================================*"<<endl;
    cout<<"**&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&��ӭʹ��ѧ���ɼ�����ϵͳ&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&**"<<endl;
    cout<<"**                                    ������ѧ����Ϣ                                           **"<<endl;
    cout<<"**                                    ������ѧ����Ϣ                                           **"<<endl;
    cout<<"**                                    ��ɾ��ѧ����Ϣ                                           **"<<endl;
    cout<<"**                                    �ܲ���ѧ����Ϣ                                           **"<<endl;
    cout<<"**                                    ���޸�ѧ����Ϣ                                           **"<<endl;
    cout<<"**                                    ��ѧ���ɼ�����                                           **"<<endl;
    cout<<"**                                    ��ѧ���ҿ����                                           **"<<endl;
    cout<<"**                                    ����ʾѧ����Ϣ                                           **"<<endl;
    cout<<"**                                    ��   �˳�                                                **"<<endl;
    cout<<"**&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&**" <<endl;
    cout<<"*===============================================================================================*"<<endl;
    cout<<"��������Ҫѡ��ķ������ࣺ�� 0 ~ 8��"<<endl; 
    int num;
    cin>>num;
    switch(num)
    {
        case 1 :system("CLS");STU.input(s);system("pause");break;    
        case 2 :system("CLS");STU.add(s);system("pause");break;
        case 3 :system("CLS");STU.remove(s);system("pause");break;
        case 4 :system("CLS");search(s);system("pause");break;
        case 5 :system("CLS");STU.change(s);system("pause");break;
        case 6 :system("CLS");sort1(s);system("pause");break;
        case 7 :system("CLS");sling(s);system("pause");break;
        case 8 :system("CLS");STU.display();system("pause");break;
        case 0 :system("CLS");cout<<"ллʹ�ã�";exit(0);system("pause");
        default:system("CLS");printf("��Ч���룡\n\n");system("pause");
    }
    }
}
int main()
{
    Undergraduate undergraduate;
    Undergraduate stu[80]; 
    undergraduate.menu(stu); 

    return 0;
}