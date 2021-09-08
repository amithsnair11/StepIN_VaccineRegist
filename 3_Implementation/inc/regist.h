#ifndef REGIST_C
#define REGIST_C

int regist_status(long pd );
int existregist();
int vaccine_status(int );

typedef struct patient{
    int age;
    long aadhar;
    int ph_number;
    int secret_code;
    int vaccine_type;
    int vaccine_doses;
}patient_details;

patient_details prpd[1000];
patient_details pd[1000];

#endif