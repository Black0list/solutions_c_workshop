int main()
{

char Mois;
int jj,aaaa;

    printf("Entrez une date jj/Mois/aaaa : ");
    scanf("%d/%d/%d",&jj, &Mois,&aaaa);


    switch (Mois)
    {
    case 1:
        printf("%d-Janvier-%d", jj,aaaa);
        break;
    case 2:
        printf("%d-Fevrier-%d", jj,aaaa);
        break;
    case 3:
        printf("%d-Mars-%d", jj,aaaa);
        break;
    case 4:
        printf("%d-Avril-%d", jj,aaaa);
        break;
    case 5:
        printf("%d-Mai-%d", jj,aaaa);
        break;
    case 6:
        printf("%d-Juin-%d", jj,aaaa);
        break;
    case 7:
        printf("%d-Juillet-%d", jj,aaaa);
        break;
    case 8:
        printf("%d-Aout-%d", jj,aaaa);
        break;
    case 9:
        printf("%d-September-%d", jj,aaaa);
        break;
    case 10:
        printf("%d-Octobre-%d", jj,aaaa);   
        break;
    case 11:
        printf("%d-Novembre-%d", jj,aaaa); 
        break;
    case 12:
        printf("%d-Decembre-%d", jj,aaaa); 
        break; 
    }

    return 0;
}