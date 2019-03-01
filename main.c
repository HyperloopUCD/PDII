#include <stdio.h>

/*
 * 1.) Assume Data Read
 * If sensor has pair, check if data values are 5% within. Send back status that both sensors are nominal
 * If not, check SD of past 10 samples. If sensor is greater than 3SD away from mean, then failure is detected
 *
 */


int sensorstate(double,double);
void obtain_value(double);


int sensorcond, cond;
double mean;
double sd;
double arr[];
int i;
double standardDeviation;

//Distance Laser Sensors (PAIR)
double C_Las0,C_Las1;
//Distance Lidar Sesnors (PAIR)
double SX_Las0,SX_Las1;
//Pressure (Braking) Sensors (NON-PAIR)
double B_Pres0,B_Pres1,B_Pres2,B_Pres3,B_Pres4,B_Pres5,B_Pres6,B_Pres7,B_Pres8,B_Pres9;
//Thermocouple Probes for Braking (PAIR)
double B_Tem0,B_Tem1;
//Pressure (Propulsion) Sensors (NON-PAIR)
double P_Pres0,P_Pres1,P_Pres2,P_Pres3,P_Pres4;
//Propulsion Pressure Sensors (NON-PAIR)
double P_Tem0,P_Tem1,P_Tem2,P_Tem3,P_Tem4,P_Tem5,P_Tem6,P_Tem7,P_Tem8;

int main()
{

    obtain_value(C_Las0);
    obtain_value(C_Las1);
    obtain_value(SX_Las0);
    obtain_value(SX_Las1);
    obtain_value(B_Pres0);
    obtain_value(B_Pres1);
    obtain_value(B_Pres2);
    obtain_value(B_Pres3);
    obtain_value(B_Pres4);
    obtain_value(B_Pres5);
    obtain_value(B_Pres6);
    obtain_value(B_Pres7);
    obtain_value(B_Pres8);
    obtain_value(B_Pres9);
    obtain_value(B_Tem0);
    obtain_value(B_Tem1);
    obtain_value(P_Pres0);
    obtain_value(P_Pres1);
    obtain_value(P_Pres2);
    obtain_value(P_Pres3);
    obtain_value(P_Pres4);
    obtain_value(P_Tem0);
    obtain_value(P_Tem1);
    obtain_value(P_Tem2);
    obtain_value(P_Tem3);
    obtain_value(P_Tem4);
    obtain_value(P_Tem5);
    obtain_value(P_Tem6);
    obtain_value(P_Tem7);
    obtain_value(P_Tem8);

    return 0;
}

/*
int sensor_state(double value, double sd)
{
    if( value < 2 * sd)
    {
        sensorcond = 0;
        return sensorcond;
    }
    else if(value > 2*sd && value < 3*sd )
    {
        sensorcond =1;
        return sensorcond;
    }
    else if(value >3*sd)
    {
        sensorcond =2;
        return sensorcond;
    }
}
void obtain_value(double val)
{
    double sum =0;
    for (i = 0; i < 10; i++)
    {
        arr[i]= val;  // i have just made a simple value but we can obtain the value from the adc
    }
    for (i= 0; i < 10; i++)
    {
        sum += arr[i];
    }
    mean = sum/10;
    for(i=0; i<10; ++i)
    {
        standardDeviation += pow(arr[i] - mean, 2);
    }
    sd = sqrt(standardDeviation/10);
    cond = sensorstate(mean ,sd);
    if(cond ==0)
    {
        printf( "normal");  // i have printed the statement , we can include the respective functionaity
    }
    else if (cond == 1)
    {
        printf( " Sick");
    }
    else
    {
        printf("failure");
    }
    */
}