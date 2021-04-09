#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char firstname[10], lastname[20], reg_no[8], comment[15] = "";
    int discrete, probability, programming, sad, databases, web_dev, networking, semiconductors, val[8], i;
    float total, average, least, most;
    // char subject[100] = {
    //     discrete, probability, programming, sad, databases, web_dev, networking, semiconductors
    // };
    // void grade();
    // char one = 'A', two = 'B', three = 'C', four = 'D', five = 'E';
    char grade = 'Z';

    // Input
    system("clear");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nFill in the following data appropriately and press enter to continue...\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nStudent's FirstName: ");
    scanf("%s", &firstname);
    printf("\nStudent's LastName: ");
    scanf("%s", &lastname);     //Doesn't display the output?
    printf("\nStudent's Registration Number: ");
    scanf("%s", &reg_no);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nMarks for; \n\t 1. Discrete Mathematics: ");   
    scanf("%d", &discrete);
    if (discrete > 39 && discrete < 100)
    {
        comment[15] = "Pass";
    } else if (discrete < 40 && discrete > -1) {
        comment[15] = 'Fail';
    } else {

        
        comment[15] = 'Invalid Entrance';
    }
    
    printf("\n\n\t 2. Probability and Statistics: ");
    scanf("%d", &probability);
    printf("\n\n\t 3. Introduction to Programming: ");
    scanf("%d", &programming);
    printf("\n\n\t 4. System Analysis and Design: ");
    scanf("%d", &sad);
    printf("\n\n\t 5. Principles of Databases: ");
    scanf("%d", &databases);
    printf("\n\n\t 6. Web Design and Development: ");
    scanf("%d", &web_dev);
    printf("\n\n\t 7. Networking Essentials: ");
    scanf("%d", &networking);
    printf("\n\n\t 8. Semiconductors: ");
    scanf("%d", &semiconductors);

    // Most marks
    for(i = 0; i < 8; i++) {
        printf("\nRe-enter the marks for confirmation - %d: ", i + 1);
        scanf("%d", &val[i]);
    }

    system("clear");
    if (val[0] == discrete)
    {
        printf("\n\t Discrete maths = %d \n", discrete);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Discrete Maths are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[1] == probability)
    {
        printf("\n\t Probability and Statistics = %d \n", probability);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Probability and Statistics are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[2] == programming)
    {
        printf("\n\t Introduction to Programming = %d \n", programming);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Introduction to Programming are Incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[3] == sad)
    {
        printf("\n\t System Analysis and Design = %d \n", sad);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for System Analysis and Design are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[4] == databases)
    {
        printf("\n\t Principles of Database = %d \n", databases);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Principles of Database are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[5] == web_dev)
    {
        printf("\n\t Web Design and Development = %d \n", web_dev);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Web Design are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[6] == networking)
    {
        printf("\n\t Networking Essensials = %d \n", networking);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Networking Essensials are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    if (val[7] == semiconductors)
    {
        printf("\n\t Semiconductors = %d \n\n", semiconductors);
    } else {
        printf("\033[0;31m");
        printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
        printf("\nMarks for Semiconductors are incorrect\n\n");
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n\n");
        printf("\033[0m");
        return 0;
    }

    printf("Check The Results To Make Sure There Is No Error...\n");
    if (val[0] < 0)
    {
        printf("\nDiscrete Math's Marks are Less Than Expected\n\n");
        return 0;
    } else if (val[0] > 100)
    {
        printf("\nDiscrete Math's Marks are More Than Expected\n\n");
        return 0;
    } else {
        printf("\nPress Any Key and Enter to Continue...");
        scanf("\n");
    }
    

    
    if (val[1] < 0)
    {
        printf("\nProbability and Statistic's Marks are Less Than Expected\n\n");
        return 0;
    } else if (val[1] > 100)
    {
        printf("\nProbability and Statistic's Marks are More Than Expected\n\n");
        return 0;
    } else {
        printf("\nPress Any Key and Enter to Continue...");
        scanf("\n");
    }

            if (val[2] < 0)
            {
                printf("\nIntroduction to Programming's Marks are Less Than Expected\n\n");
                return 0;
            } else if (val[2] > 100)
            {
                printf("\nIntroduction to Programming's Marks are More Than Expected\n\n");
                return 0;
            } else {
                printf("\nPress Any Key and Enter to Continue...");
                scanf("\n");
            }    
    
                if (val[3] < 0)
                {
                    printf("\nSystem Analysis and Design's Marks are Less Than Expected\n\n");
                    return 0;
                } else if (val[3] > 100)
                {
                    printf("\nSystem Analysis and Design's Marks are More Than Expected\n\n");
                    return 0;
                } else {
                    printf("\nPress Any Key and Enter to Continue...");
                    scanf("\n");
                }

                    if (val[4] < 0)
                    {
                        printf("\nPrinciples of Database's Marks are Less Than Expected\n\n");
                        return 0;
                    } else if (val[4] > 100)
                    {
                        printf("\nPrinciples of Database's Marks are More Than Expected\n\n");
                        return 0;
                    } else {
                        printf("\nPress Any Key and Enter to Continue...");
                        scanf("\n");
                    }

                        if (val[5] < 0)
                        {
                            printf("\nWeb Design's Marks are Less Than Expected\n\n");
                            return 0;
                        } else if (val[5] > 100)
                        {
                            printf("\nWeb Design's Marks are More Than Expected\n\n");
                            return 0;
                        } else {
                            printf("\nPress Any Key and Enter to Continue...");
                            scanf("\n");
                        }

                            if (val[6] < 0)
                            {
                                printf("\nNetworking Essensial's Marks are Less Than Expected\n\n");
                                return 0;
                            } else if (val[6] > 100)
                            {
                                printf("\nNetworking Essensial's Marks are More Than Expected\n\n");
                                return 0;
                            } else {
                                printf("\nPress Any Key and Enter to Continue...");
                                scanf("\n");
                            }

                                if (val[7] < 0)
                                {
                                    printf("\nSemiconductor's Marks are Less Than Expected\n\n");
                                    return 0;
                                } else if (val[7] > 100)
                                {
                                    printf("\nSemiconductor's Marks are More Than Expected\n\n");
                                    return 0;
                                } else {
                                    printf("\nPress Any Key and Enter to Continue...");
                                    scanf("\n");
                                }

    // printf("\nPress Any Key and Enter to Continue...");
    // scanf("\n");
    

    least = val[0];
    most = val[0];

    for(i = 0; i < 8; i++) {
        if (val[i] > most)
			most = val[i];
		else {
			if (val[i] < least)
				least = val[i];
		}
    }
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // Calculation
    total = discrete + probability + programming + sad + databases + web_dev + networking + semiconductors;
    // printf("\n  Total marks ==> %.2f \n", total);
    average = total / 8;
    // printf("\n  Average marks ==> %.2f \n", average);

    // Grading System
        if (average < 0 || average > 100)
        {
            printf("Kindly Check The Results Once Again\n\n");
        } else if (average < 40)
        {   
            grade = 'E';
        } else if (average >= 40 && average < 50)
        {
            grade = 'D';
        } else if (average >= 50 && average < 60)
        {
            grade = 'C';
        } else if (average >= 60 && average < 70)
        {
            grade = 'B';
        } else {
            grade = 'A';
        }

    // Output
    // system("clear");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\033[0;36m");
    printf("||\t\tSTUDENT'S PERFORMANCE SLIP\t\t||\n");
    printf("||=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=||\n");
    printf("\033[0;32m");
    printf("||  Student's Name: %s" "%s\t\t\t||\n", firstname, lastname);
    // printf("%s\t\t\t\t||\n", lastname);
    printf("||  Student's Registration Number: %s\t\t||\n", reg_no);
    printf("||=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=||\n");
    printf("||  SUBJECT                                MARKS \t COMMENT      ||\n");
    printf("||------------------------------------------------------||\n");
    printf("||                                                      ||\n");
    printf("||  Discrete Mathematics            ==>     %d\t\t %s\t||\n", discrete, comment);
    printf("||  Probabilities and Statistics    ==>     %d\t\t||\n", probability);
    printf("||  Introduction to Programming     ==>     %d\t\t||\n", programming);
    printf("||  System Analysis and Design      ==>     %d\t\t||\n", sad);
    printf("||  Principles of Databases         ==>     %d\t\t||\n", databases);
    printf("||  Web Design and Development      ==>     %d\t\t||\n", web_dev);
    printf("||  Networking Essentials           ==>     %d\t\t||\n", networking);
    printf("||  Semiconductors                  ==>     %d\t\t||\n", semiconductors);
    printf("||                                                      ||\n");
    printf("||=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=||\n");
    printf("||  Total Marks             ||              %.2f\t||\n", total);
    printf("||  Average                 ||              %.2f\t||\n", average);
    printf("||  Most Score              ||              %.2f\t||\n", most);
    printf("||  Least Score             ||              %.2f\t||\n", least);
    printf("||  Grade                   ||              %c\t\t||\n", grade);
    printf("\033[0m");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    return 0;
};
