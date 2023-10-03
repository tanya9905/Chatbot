#include<stdio.h>
#include<string.h>
#include<sys/xattr.h>
//#include<process.h>
#include<unistd.h>
//#include<conio.h>
char in[1000],name[30],pass[10];

void cleanser(void)
{
    printf("\n\nHere are our beauty experts top recommendations \n 1.Calendula Deep Cleansing Foaming Face Wash-230 ML \n | retails for 2600/- \n\n 2.SENSITIVE SKIN CLEANSER [2%%  Stearic acid + Palmitic acid] \n | retails for 450/- \n\n 3. Dermalogica clearing skin wash for oily & acne-prone skin \n | retails for 3000/- \n\n 4. Dr.Sheths Cica & Ceramide Gentle Cleanser -125ml \n | retails for 349/- \n\n 5. Truefitt & Hill Skin Control Facial Cleanser 100ML \n | retails for 2900/- \n\n 6. Cetaphil Oily Skin Cleanser \n | retails for 479/- \n\n 7. Forest Essentials Kashmiri Saffron & Neem Delicate Facial Cleanser \n | retails for 425/- \n\n 8. Minimalist 2%% Salicylic Acid Face Wash For Oily Skin \n | retails for 284/- \n\n 9. L'Oreal Paris Revitalift Hyaluronic Acid Gel Cleanser \n | retails for 257/- \n\n 10. Undry Hydrating Face Wash \n | retails for 245/- \n \n \nDo you have any further queries related to skincare products?[yes/no] \n>>");
    fgets(in,200,stdin);
    if(strstr(in,"yes"))
    {
        printf("Please contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
    }
    else if(strstr(in,"no"))
    {
        printf("Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
    }
    else
    {
        printf("Couldn't find relevant message\n.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf("Exiting the chat! Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
    }
}
void hydratingserum(void)
{
    printf("Here are our beauty experts top recommendations \n 1.dot and key hydrating serum \n | retails for 532/- \n\n 2.The derma co 10%% vitamin C Face serum \n | retails for 349/- \n\n 3. pilgrim hyaluronic acid [hydration super serum] \n | retails for 545/- \n\n 4.COSRX snail mucin power essence serum \n | retails for 1043/- \n\n 5.Aqualogica hydrate+ serum \n | retails for 599/- \n\n 6. Neutrogena hydro boost serum \n | retails for 350/- \n\n 7. Paris revitalift 1.5%% hyaluronic acid serum \n | retails for 397/- \n\n 8. The Ordinary Hyaluronic Acid \n | retails for 861/- \n\n 9.Minimalist Niancinamide face serum \n | retails for 595/- \n 10. The ordinary marine hyaluronics \n | retails for 990/- \n \n \n Do you have any further queries related to skincare products?[yes/no] \n>>");
    fgets(in,200,stdin);
    if(strstr(in,"yes"))
    {
        printf("Please contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
    }
    else if(strstr(in,"no"))
    {
        printf("Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
    }
    else
    {
        printf("Couldn't find relevant message\n.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf("Exiting the chat! Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
    }
}
void ss(void)
{
    printf("Here are our beauty experts top recommendations \n 1.Aqualogica radiance++ SPF 50 PA++ \n | retails for 399/- \n\n 2. Undry Hydrating sunscreen SPF 50 PA++\n | retails for 347/- \n\n 3. Mama Earth rice sunscreen SPF 50 \n | retails for 449/- \n\n 4.Dr.Sheths Ceramide sunscreen \n | retails for 587/- \n\n 5.Neutrogena Ultra sheer dry touch \n | retails for 247/- \n\n 6. The derma co 1%% hyaluronic suscreen Aqua gel  \n | retails for 499/- \n\n 7. Dot & key vitamin C SPF 50 \n | retails for 420/- \n\n 8. Re'equil oxybenzone free sunscreen SPF 50 \n | retails for 360/- \n\n 9. Minimalist SPF 50+ multi vitamin sunscreen  \n | retails for 399/- \n 10. Hydro Burst water susncreen with SPF 50 \n | retails for 540/- \n \n \n Do you have any further queries related to skincare products?[yes/no] \n>>");
    fgets(in,200,stdin);
    if(strstr(in,"yes"))
    {
        printf("Please contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
    }
    else if(strstr(in,"no"))
    {
        printf("Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
    }
    else
    {
        printf("Couldn't find relevant message\n.");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf("Exiting the chat! Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
    }
}
void userlogin(void)
{
    printf("\nPlease Enter Your Name to continue logging in \n>>");
    fflush(stdin);
    scanf("%[^\n]*c",name);
    printf("\nAwesome! \nWelcome %s! \nContinue by entering your password [make sure the password you are entering is unique and under 8 characters!] \n>>",name);
    fflush(stdin);
    scanf("%[^\n]s",pass);
    fflush(stdin);
}
void shampoo(void)
{
    printf("Here are our beauty experts top recommendations \n 1.Bare anatomy Expert anti-fizz shampoo 250ml \n | retails for 469/- \n\n 2.Olaplex No.4 Bond maintenance shampoo \n | retails for 1248.51/- \n\n 3. Morrocon oil Hydrating shampoo \n | retails for 990/- \n\n 4.Shea Moisture jamican shampoo \n | retails for 1214/- \n\n 5.Dot & key Moringa & argan hair shampoo \n | retails for 472/- \n\n 6. Schwarzkopf Proffesional Bonacure Peptide Repair Rescue \n | retails for 1749/- \n\n 7. The body shop Tea tree Purifying & Balancing Shampoo \n | retails for 745/- \n\n 8. Anomaly clarifying shampoo for deep cleanse with charcoal  \n | retails for 750/- \n\n 9. Kerastase specifique Bain preventing shampoo \n | retails for 7,764/- \n 10. Matrix opti.care shampoo \n | retails for 518/- \n \n \n Do you have any further queries related to haircare products?[yes/no] \n>>");
     fgets(in,200,stdin);
     if(strstr(in,"yes"))
     {
         printf("Please contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
     }
     else if(strstr(in,"no"))
     {
         printf("Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
     }
     else
     {
         printf("Couldn't find relevant message\n.");
         sleep(1);
         printf(".");
         sleep(1);
         printf(".");
         sleep(1);
         printf("Exiting the chat! Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
     }
}
void conditioner(void)
{
    printf("Here are our beauty experts top recommendations \n 1.Shea moisture superfruit complex conditioner 250ml \n | retails for 2,100/- \n\n 2.Olaplex No.4 Bond maintenance conditioner \n | retails for 1248.51/- \n\n 3. Morrocon oil Hydrating conditioner \n | retails for 990/- \n\n 4.Shea Moisture jamican conditioner \n | retails for 1214/- \n\n 5.Dot & key Moringa & argan hair conditioner \n | retails for 472/- \n\n 6. Schwarzkopf Proffesional Bonacure Peptide Repair Rescue \n | retails for 1749/- \n\n 7. The body shop Tea tree Purifying & Balancing conditioner \n | retails for 745/- \n\n 8. Anomaly clarifying conditioner for deep cleanse with charcoal  \n | retails for 750/- \n\n 9. Kerastase specifique Bain preventing conditioner \n | retails for 7,764/- \n 10. Matrix opti.care conditioner \n | retails for 518/- \n \n \n Do you have any further queries related to haircare products?[yes/no] \n>>");
     fgets(in,200,stdin);
     if(strstr(in,"yes"))
     {
         printf("Please contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
     }
     else if(strstr(in,"no"))
     {
         printf("Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
     }
     else
     {
         printf("Couldn't find relevant message\n.");
         sleep(1);
         printf(".");
         sleep(1);
         printf(".");
         sleep(1);
         printf("Exiting the chat! Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
     }
}
void hairmask(void)
{
    printf("Here are our beauty experts top recommendations \n 1. K18 molecular repair hair mask \n | retails for 5,192/- \n\n 2.Bare anatomy Expert hair mask \n | retails for 745/- \n\n 3. Skinkraft frizz no more shea hair mask  \n | retails for 699/- \n\n 4.streax proffesional range \n | retails for 290/- \n\n 5. Pratida shine rebound hydrating hair mask \n | retails for 499/- \n\n 6. Schwarzkopf Proffesional Bonacure Peptide Repair Rescue hair mask \n | retails for 1749/- \n\n 7. The body shop Tea tree Purifying & Balancing hair mask \n | retails for 745/- \n\n 8. Anomaly clarifying hair mask for deep cleanse with charcoal  \n | retails for 750/- \n\n 9. Kerastase specifique Bain preventing hair masque \n | retails for 7,764/- \n 10. Matrix opti.care hair mask \n | retails for 518/- \n \n \n Do you have any further queries related to haircare products?[yes/no] \n>>");
     fgets(in,200,stdin);
     if(strstr(in,"yes"))
     {
         printf("Please contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
     }
     else if(strstr(in,"no"))
     {
         printf("Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
     }
     else
     {
         printf("Couldn't find relevant message\n.");
         sleep(1);
         printf(".");
         sleep(1);
         printf(".");
         sleep(1);
         printf("Exiting the chat! Thank you for turning to Cloud for all things glam! \nIt was great talking to you.\n\n\n");
     }
}
void skincare(void)
{
    printf("\nWhat skincare products are you shopping for?\n\n[Cleanser,Hydrating serum,Skin protector]\n>>");
    fflush(stdin);
    fgets(in,200,stdin);
    if(strstr(in,"cleanser")||strstr(in,"skin cleanser"))
    {
        cleanser();
    }
    else if(strstr(in,"hydrating serum")||(strstr(in,"serum")))
    {
        hydratingserum();
    }
    else if((strstr(in,"skin protector"))||(strstr(in,"sunscreen"))||(strstr(in,"cream")))
    {
        ss();
    }
}
void haircare(void)
{
    printf("What haircare products are you shopping for?\n[shampoo,conditioner,mask]\n>>");
    fflush(stdin);
    fgets(in,200,stdin);
    if(strstr(in,"shampoo")||strstr(in,"hair shampoo"))
    {
        shampoo();
    }
    else if(strstr(in,"conditioner")||strstr(in,"hair conditioner"))
    {
        conditioner();
    }
    else if(strstr(in,"mask")||strstr(in,"hair mask"))
    {
        hairmask();
    }
       
}
void gifting(void)
{
    printf("\nDiscover a world of beauty in our store's gifting options. \n \nOur thoughtfully curated gift sets are designed to pamper and uplift. From rejuvenating skincare essentials that bring out natural radiance to captivating makeup must-haves that enhance every feature, we have something for everyone. Elevate your gifting game and give the gift of beauty, love, and confidence. Explore our collection and find the perfect present that will bring joy to your loved ones' lives. Unwrap the beauty of self-care and self-expression today.\n \n \n Visit in-store and avail huge discounts on our gift hampers \n Please contact our gifting experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 ");
}
void productrec(void)
{
    printf("\nYou got it.\n\nYou can ask us about product links or gifting\n>>");
    fflush(stdin);
    fgets(in,200,stdin);
    if ((strstr(in,"product")!=NULL)||(strstr(in,"product recommendations")!=NULL)||(strstr(in,"products")!=NULL)
        ||(strstr(in,"product links")!=NULL)||(strstr(in,"link")!=NULL)||(strstr(in,"beauty recommendations")))
    {
        printf("Hey!I would love to help you find your new favorite beauty products, today! What can I help with? \n\n[Skincare,Haircare,product recommendations for better application]\n>>");
        fflush(stdin);
        fgets(in,200,stdin);
        if(strstr(in,"skincare")!=NULL||strstr(in,"skin")||strstr(in,"pores")||strstr(in,"skincare routine"))
        {
            skincare();
        }
        else if(strstr(in,"haircare")!=NULL||strstr(in,"hair")||strstr(in,"haircare routine"))
        {
            haircare();
        }

    }
    else if((strstr(in,"gifting"))||(strstr(in,"gift")))
    {
        gifting();
    }
}
void personalstylist(void)
{
    printf("We have the best curated team to help you out in every way possible! \n \n--- Contact our experts --- \n--- Schedule an in-person appointment --- \n>> ");
    fgets(in,200,stdin);
    if((strstr(in,"contact"))||(strstr(in,"experts")))
    {
        printf("\nPlease contact our beauty experts on the below provided contacts between 10:00 am - 7:00 pm \n +91 1234567890 \n +91 0987654321 \n");
    }
    else if((strstr(in,"appointment"))||(strstr(in,"schedule")))
    {
        printf("\nPlease visit the store or book your appointment via call");
    }
}
int main(void)
{
    printf("\nHello User.\nWelcome to your own personal stylist chatbot!\n\n");
    while(1)
    {
        printf("\nI am here for all things GLAM!!!\nFor a better chat experience, we request you to please login. \n\n--Signup-- \n\n--continue without login-- \n>>");
        fgets(in,200,stdin);
        fflush(stdin);
        if((strstr(in,"signup")!=NULL)||(strstr(in,"Signup")))
        {
        login:
            userlogin();
            printf("\n%s,How may i be of your help today ?\n \nYou can choose any of options below \n *Product and beauty recommendations [type product or your related query to choose this option]\n*Further assistance from our personal stylist \n >>",name);
            fflush(stdin);
            fgets(in,200,stdin);
            printf("........");
            sleep(4);
            if(strstr(in,"product")!=NULL||(strstr(in,"recommendation")!=NULL)||(strstr(in,"products")!=NULL)
               ||(strstr(in,"product links")!=NULL)||(strstr(in,"beauty recommendations")!=NULL))
            {
                productrec();
                printf("\n\nDo you want to continue chatting about something else?\n>>");
                fgets(in,200,stdin);
                if(strstr(in,"yes"))
                {
                    printf("Have you logged in? \n>>");
                    fflush(stdin);
                    fgets(in,200,stdin);
                    if(strstr(in,"no"))
                    {
                        printf("\nWe request you to please login !\n");
                        goto login;
                    }
                    else if(strstr(in,"yes"))
                    {
                        goto wlogin;
                    }
                }
            }
            else if((strstr(in,"assistance"))||(strstr(in,"personal"))||(strstr(in,"stylist")))
            {
                personalstylist();
                printf("\n\nDo you want to continue chatting about something else?\n>>");
                if(strstr(in,"yes"))
                {
                    printf("Have you logged in? \n>>");
                    fflush(stdin);
                    fgets(in,200,stdin);
                    if(strstr(in,"no"))
                    {
                        printf("\nWe request you to please login !\n");
                        goto login;
                    }
                    else if(strstr(in,"yes"))
                    {
                        goto wlogin;
                    }
                }
            }
        }
        else if((strstr(in,"continue without login")!=NULL)||(strstr(in,"without login")!=NULL))
        {
        wlogin:
                printf("\nYou got it! \n How may i be of your help today? \n \nYou can choose the below given options \n \nProduct and beauty recommendations [type product to choose this options]\n Further assistance from our personal stylist \n >>");
                fflush(stdin);
                fgets(in,200,stdin);
                printf("........");
                sleep(4);
                if(strstr(in,"product")!=NULL||(strstr(in,"recommendation")!=NULL)||(strstr(in,"products")!=NULL)
                   ||(strstr(in,"product links")!=NULL)||(strstr(in,"beauty recommendations")!=NULL))
                {
                    productrec();
                    printf("\n\nDo you want to continue chatting about something else?\n>>");
                    fgets(in,200,stdin);
                    if(strstr(in,"yes"))
                    {
                        printf("Have you logged in? \n>>");
                        fflush(stdin);
                        fgets(in,200,stdin);
                        if(strstr(in,"no"))
                        {
                            printf("\nWe request you to please login !\n");
                            goto login;
                        }
                        else if(strstr(in,"yes"))
                        {
                            goto wlogin;
                        }
                    }
                }
                else if((strstr(in,"assistance"))||(strstr(in,"personal"))||(strstr(in,"stylist")))
                {
                    personalstylist();
                    printf("\n\nDo you want to continue chatting about something else?\n>>");
                    if(strstr(in,"yes"))
                    {
                        printf("Have you logged in? \n>>");
                        fflush(stdin);
                        fgets(in,200,stdin);
                        if(strstr(in,"no"))
                        {
                            printf("\nWe request you to please login !\n");
                            goto login;
                        }
                        else if(strstr(in,"yes"))
                        {
                            goto wlogin;
                        }
                    }
                }
        }
    }
}


