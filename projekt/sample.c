#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 5
#define MAX_NAME_LENGTH 50

typedef struct {
	    char name[MAX_NAME_LENGTH];
	        int gelApplications;
		    int hairBraiding;
		        int pedicure;
			    int dreadlocks;
			        int totalEarnings;
} Employee;

typedef struct {
	    Employee employees[MAX_EMPLOYEES];
	        int numEmployees;
		    int companyEarnings;
} Salon;

void initializeSalon(Salon *salon) {
	    salon->numEmployees = 0;
	        salon->companyEarnings = 0;
}

void addEmployee(Salon *salon, const char *employeeName) {
	    if (salon->numEmployees < MAX_EMPLOYEES) {
		            strcpy(salon->employees[salon->numEmployees].name, employeeName);
			            salon->employees[salon->numEmployees].gelApplications = 0;
				            salon->employees[salon->numEmployees].hairBraiding = 0;
					            salon->employees[salon->numEmployees].pedicure = 0;
						            salon->employees[salon->numEmployees].dreadlocks = 0;
							            salon->employees[salon->numEmployees].totalEarnings = 0;
								            salon->numEmployees++;
									            printf("Employee '%s' added successfully.\n", employeeName);
										        } else {
												        printf("Maximum number of employees reached.\n");
													    }
}

void removeEmployee(Salon *salon, const char *employeeName) {
	    int i;
	        for (i = 0; i < salon->numEmployees; i++) {
			        if (strcmp(salon->employees[i].name, employeeName) == 0) {
					            printf("Employee '%s' removed successfully.\n", employeeName);
						                for (int j = i; j < salon->numEmployees - 1; j++) {
									                salon->employees[j] = salon->employees[j + 1];
											            }
								            salon->numEmployees--;
									                return;
											        }
				    }
		    printf("Employee '%s' not found.\n", employeeName);
}

void recordService(Salon *salon, const char *employeeName, int serviceType, int amountEarned) {
	    int i;
	        for (i = 0; i < salon->numEmployees; i++) {
			        if (strcmp(salon->employees[i].name, employeeName) == 0) {
					            switch (serviceType) {
							                    case 1:
										                        salon->employees[i].gelApplications += amountEarned;
													                    break;
															                    case 2:
															                        salon->employees[i].hairBraiding += amountEarned;
																		                    break;
																				                    case 3:
																				                        salon->employees[i].pedicure += amountEarned;
																							                    break;
																									                    case 4:
																									                        salon->employees[i].dreadlocks += amountEarned;
																												                    break;
																														                    default:
																														                        printf("Invalid service type.\n");
																																	                    return;
																																			                }
						                salon->employees[i].totalEarnings += amountEarned;
								            salon->companyEarnings += amountEarned;
									                printf("Service recorded successfully.\n");
											            return;
												            }
				    }
		    printf("Employee '%s' not found.\n", employeeName);
}

void printEmployeeEarnings(const Salon *salon, const char *employeeName) {
	    int i;
	        for (i = 0; i < salon->numEmployees; i++) {
			        if (strcmp(salon->employees[i].name, employeeName) == 0) {
					            printf("Employee: %s\n", salon->employees[i].name);
						                printf("Gel Applications: %d KSH\n", salon->employees[i].gelApplications);
								            printf("Hair Braiding: %d KSH\n", salon->employees[i].hairBraiding);
									                printf("Pedicure: %d KSH\n", salon->employees[i].pedicure);
											            printf("Dreadlocks: %d KSH\n", salon->employees[i].dreadlocks);
												                printf("Total Earnings: %d KSH\n", salon->employees[i].totalEarnings);
														            return;
															            }
				    }
		    printf("Employee '%s' not found.\n", employeeName);
}

void printCompanyEarnings(const Salon *salon) {
	    printf("Total Company Earnings: %d KSH\n", salon->companyEarnings);
}

void printEmployeeRankings(const Salon *salon) {
	    printf("Employee Rankings:\n");
	        for (int i = 0; i < salon->numEmployees; i++) {
			        printf("%d. Employee: %s\n", i + 1, salon->employees[i].name);
				        printf("   Total Earnings: %d KSH\n", salon->employees[i].totalEarnings);
					    }
}

int main() {
	    Salon salon;
	        initializeSalon(&salon);

		    int choice;
		        char employeeName[MAX_NAME_LENGTH];
			    int serviceType, amountEarned;

			        do {
					        system("clear"); // Clears the screen
								 //
								 //         printf("Salon Management System\n");
								 //                 printf("1. Add Employee\n");
								 //                         printf("2. Remove Employee\n");
								 //                                 printf("3. Record Service\n");
								 //                                         printf("4. Print Employee Earnings\n");
								 //                                                 printf("5. Print Company Earnings\n");
								 //                                                         printf("6. Print Employee Rankings\n");
								 //                                                                 printf("0. Exit\n");
								 //                                                                         printf("Enter your choice: ");
								 //                                                                                 scanf("%d", &choice);
								 //                                                                                         printf("\n");
								 //
								 //                                                                                                 switch (choice) {
								 //                                                                                                             case 1:
								 //                                                                                                                             printf("Enter employee name: ");
								 //                                                                                                                                             scanf("%s", employeeName);
								 //                                                                                                                                                             addEmployee(&salon, employeeName);
								 //                                                                                                                                                                             break;
								 //                                                                                                                                                                                         case 2:
								 //                                                                                                                                                                                                         printf("Enter employee name: ");
								 //                                                                                                                                                                                                                         scanf("%s", employeeName);
								 //                                                                                                                                                                                                                                         removeEmployee(&salon, employeeName);
								 //                                                                                                                                                                                                                                                         break;
								 //                                                                                                                                                                                                                                                                     case 3:
								 //                                                                                                                                                                                                                                                                                     printf("Enter employee name: ");
								 //                                                                                                                                                                                                                                                                                                     scanf("%s", employeeName);
								 //                                                                                                                                                                                                                                                                                                                     printf("Enter service type (1-4): ");
								 //                                                                                                                                                                                                                                                                                                                                     scanf("%d", &serviceType);
								 //                                                                                                                                                                                                                                                                                                                                                     printf("Enter amount earned: ");
								 //                                                                                                                                                                                                                                                                                                                                                                     scanf("%d", &amountEarned);
								 //                                                                                                                                                                                                                                                                                                                                                                                     recordService(&salon, employeeName, serviceType, amountEarned);
								 //                                                                                                                                                                                                                                                                                                                                                                                                     break;
								 //                                                                                                                                                                                                                                                                                                                                                                                                                 case 4:
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                 printf("Enter employee name: ");
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                 scanf("%s", employeeName);
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                 printEmployeeEarnings(&salon, employeeName);
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 break;
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             case 5:
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             printCompanyEarnings(&salon);
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             break;
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         case 6:
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         printEmployeeRankings(&salon);
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         break;
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     case 0:
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     printf("Exiting the program.\n");
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     break;
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 default:
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 printf("Invalid choice. Please try again.\n");
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
								 //
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 printf("\nPress Enter to continue...");
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         while (getchar() != '\n'); // Flush the input buffer
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 getchar();
								 //
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     } while (choice != 0);
								 //
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         return 0;
								 //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
								 //
