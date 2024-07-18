#include <stdio.h>

int main (){
    int til;
    int parr;
    int parol;
    int menyu;
    int summa1 = 50000;
    int summa2 = 75000;
    int summa3 = 100000;
    int summa4 ;
    int hisob2;
    int sorov3;
    int hisob;


    til:
    printf("O'zbek tilini tanlsh uchun 1 ni bosing \n\nIngliz tilini tanlash uchun 2 ni bosing\n\n");
    scanf("%d", &til);
    switch (til){
    case 1: 
        goto uzbek;
        break;

    case 2: 
        goto english;

    break;
    
    

    default:

    printf("XATO KIRITDINGIZ !!!");
    goto til;
        break;
    }


    uzbek :
    // int parol;
    printf("\n\n\t\tparolingizni kiriting\n");
    scanf("%d", &parol);
    // int hisob;
    printf("Xisobingizda qancha pul birligini kiriting\n\n");
    scanf("%d", &hisob);

    menyu :

    // int menyu;
    printf("\n\n\t\tAmallardan birini tanlang\n\n \t1.Pul yechish\n\n \t2.Hisobni ko'rish\n\n\t3.PIN-KOD ni o'zgartirish\n\n\t4.Pul o'tkazish\n\n");
    scanf("%d", &menyu);
    switch (menyu){
    case 1 :
        printf("Pul yechish summasini kiriting\n 1. 50.000\n 2. 75.000\n 3. 100.000\n 4. Boshqa miqdor kiritish \n\n");
        int summa;
        scanf("%d", &summa);
        switch (summa){
        case 1 :
            // int summa1 = 50000;
            printf("\n\t\tPul yechisni tasdiqlaysizmi ?\n 1. Xa\n 2. Yo'q\n\n");
            int sorov1 = 0;
            scanf("%d", &sorov1);
            if (sorov1 == 1){
            
            hisob = hisob - summa1;
            printf("\nPul muvaffaqiyatli yechildi\n");
            goto menyu;
            }
            else{
                printf("\nPul yechish bekor qilindi ");
                goto menyu;
            }
            
            
            break;

            case 2 :
            // int summa2 = 75000;
            printf("\n\t\tPul yechisni tasdiqlaysizmi ?\n 1. Xa\n 2. Yo'q\n\n");
            int sorov2;
            scanf("%d", &sorov2);
            if (sorov2 == 1){
            
            hisob = hisob - summa2;
            printf("\nPul muvaffaqiyatli yechildi\n");
            goto menyu;
            }
            else{
                printf("\nPul yechish bekor qilindi ");
                goto menyu;
            }
            
            
            break;

            case 3 :
            // int summa3 = 100000;
            printf("\n\t\tPul yechisni tasdiqlaysizmi ?\n 1. Xa\n 2. Yo'q\n\n");
            int sorov3;
            scanf("%d", &sorov3);
            if (sorov3 == 1){
            
            hisob = hisob - summa3;
            printf("\nPul muvaffaqiyatli yechildi\n");
            goto menyu;
            }
            else{
                printf("\nPul yechish bekor qilindi ");
                goto menyu;
            }
            
            
            break;


            case 4 :
            // int summa4 ;

            printf("\n\nPul yechish summasini kiriting\n\n");
            scanf("%d", &summa4);

            printf("\n\t\tPul yechisni tasdiqlaysizmi ?\n 1. Xa\n 2. Yo'q\n\n");
            int sorov4;
            scanf("%d", &sorov4);
            if (sorov4 == 1){
            
            hisob = hisob - summa4;
            printf("\nPul muvaffaqiyatli yechildi\n");
            goto menyu;
            }
            else{
                printf("\nPul yechish bekor qilindi ");
                goto menyu;
            }
            
            
            break;
        
        default:

            printf("\n\n\t\tXatolik yuz berdi  \n\n");
            goto menyu;
            break;
        }
        break;
        
    case 2 :
        hisob1 :
        printf("\n\nTekshirish uchun parolingizni kiriting ==> \n\n");
        int parol2;
        scanf("%d", &parol2);
        if (parol2 == parol){
            printf("Sizning balansingiz    %d  ", hisob);
            goto menyu;
        }
        else
        {
            printf("Parolni xato kiritdingiz  ");
            goto hisob1; 
        }
        

        break;
        
    case 3 :

        
        printf("\n\n\t\tTekshirish uchun eski parolingizni kiriting \n");
        scanf("%d", &parr);
        if (parr == parol){
            parr = 0;
            printf("\n\n\t\tYangi parolni kiriting   \n\n");
            scanf("%d", &parr);
            printf("\n\n\t\tAmalni tasdiqlaysizmi? 1.Xa    2.Yo'q\n");
            int so;
            scanf("%d", &so);
            if (so == 1)
            {
                parol = parr;
                printf("PIN-KOD muvaffaqiyatli o'zgartirildi ");
                goto menyu;
            }
            


        }
        
        break;
        
    case 4 :


        printf("\n\nPul o'tkazish kerak bo'lgan kartani kiriting \n\n");
        int karta, summa5;
        scanf("%d", &karta);
         printf("\n\nPul yechish summasini kiriting\n\n");
            scanf("%d", &summa5);

            printf("\n\t\tPul O'tkazishni  tasdiqlaysizmi ?\n 1. Xa\n 2. Yo'q\n\n");
            int sorov;
            scanf("%d", &sorov);
            if (sorov == 1){
            
            hisob = hisob - summa5;
            printf("\nPul muvaffaqiyatli o'tkazildi\n");
            goto menyu;
            }
            else{
                printf("\nPul o'tkazish bekor qilindi ");
                goto menyu;
            }
            
            


       

        break;
    
    default:

    printf("Xatolik yuz berdi qaytadan urining ");
    goto menyu;
        break;
    }




    english :
    // int parol;
    printf("\n\n\t\tinput PIN-KOD\n");
    scanf("%d", &parol);
    // int hisob2;
    printf("Enter your balance\n\n");
    scanf("%d", &hisob2);

    menyu2 :

    // int menyu;
    printf("\n\n\t\tChoose one of tasks\n\n \t1.Withdraw money\n\n \t2.Balance\n\n\t3. Change PIN-KOD \n\n\t4.Transfer money\n\n");
    scanf("%d", &menyu);
    switch (menyu){
    case 1 :
        printf("Enter amount of withdraw\n 1. 50.000\n 2. 75.000\n 3. 100.000\n 4. Other amount \n\n");
        int summa;
        scanf("%d", &summa);
        switch (summa){
        case 1 :
            // int summa1 = 50000;
            printf("\n\t\tDo you  confirm withdraw ?\n 1. Yes \n 2. No\n\n");
            int sorov1 = 0;
            scanf("%d", &sorov1);
            if (sorov1 == 1){
            
            hisob2 = hisob2 - summa1;
            printf("\nMoney has been withdrawn succesfully \n");
            goto menyu2;
            }
            else{
                printf("\nWithdrawing Money has been cancelled ");
                goto menyu2;
            }
            
            
            break;

            case 2 :
            // int summa2 = 75000;
            printf("\n\t\tDo you confirmn withdrawing ?\n 1. Yes\n 2. No\n\n");
            int sorov2;
            scanf("%d", &sorov2);
            if (sorov2 == 1){
            
            hisob2 = hisob2 - summa2;
            printf("\nMoney has been withdrawn succesfully\n");
            goto menyu2;
            }
            else{
                printf("\nWithdrawing Money has been cancelled ");
                goto menyu2;
            }
            
            
            break;

            case 3 :
            // int summa3 = 100000;
            printf("\n\t\tDo you confirmn withdrawing ?\n 1. Yes\n 2. No\n\n");
            int sorov3;
            scanf("%d", &sorov3);
            if (sorov3 == 1){
            
            hisob2 = hisob2 - summa3;
            printf("\nMoney has been withdrawn succesfully\n");
            goto menyu2;
            }
            else{
                printf("\nWithdrawing Money has been cancelled");
                goto menyu2;
            }
            
            
            break;


            case 4 :
            // int summa4 ;

            printf("\n\nEnter amount of transfer\n\n");
            scanf("%d", &summa4);

            printf("\n\t\tDo you confirmn withdrawing ?\n 1. Yes\n 2. No\n\n");
            int sorov4;
            scanf("%d", &sorov4);
            if (sorov4 == 1){
            
            hisob2 = hisob2 - summa4;
            printf("\nMoney has been withdrawn succesfully\n");
            goto menyu2;
            }
            else{
                printf("\nWithdrawing Money has been cancelled ");
                goto menyu2;
            }
            
            
            break;
        
        default:

            printf("\n\n\t\tSome thing gone wrong  \n\n");
            goto menyu2;
            break;
        }
        break;
        
    case 2 :
        hisob2 :
        printf("\n\nEnter your password for checking ==> \n\n");
        int parol2;
        scanf("%d", &parol2);
        if (parol2 == parol){
            printf("Your balance    %d  ", hisob2);
            goto menyu2;
        }
        else
        {
            printf("Password is wrong  ");
            goto hisob2; 
        }
        

        break;
        
    case 3 :

        
        printf("\n\n\t\tEnter your  password for checking \n");
        scanf("%d", &parr);
        if (parr == parol){
            parr = 0;
            printf("\n\n\t\tEnter new password  \n\n");
            scanf("%d", &parr);
            printf("\n\n\t\tDo you confirm task? 1.Yes    2.No\n");
            int so;
            scanf("%d", &so);
            if (so == 1)
            {
                parol = parr;
                printf("PIN-KOD has been changed ");
                goto menyu2;
            }
            


        }
        
        break;
        
    case 4 :


        printf("\n\nEnter a card which you want to transfer \n\n");
        int karta, summa5;
        scanf("%d", &karta);
         printf("\n\nEnter amount of transfer\n\n");
            scanf("%d", &summa5);

            printf("\n\tDo you confirm  ?\n 1. Yes\n 2. No\n\n");
            int sorov;
            scanf("%d", &sorov);
            if (sorov == 1){
            
            hisob2 = hisob2 - summa5;
            printf("\nMoney has been transfered succesfully\n");
            goto menyu2;
            }
            else{
                printf("\nTransfer has been cancelled ");
                goto menyu2;
            }
            
            


       

        break;
        
    
    default:

    printf("Something gone wrong. Try again ");
    goto menyu2;
        break;
    }


/*

    koreys :
    
    printf("\n\n\t\t비밀번호를 입력하세요\n");
    scanf("%d", &parol);
    int hisob3;
    printf("귀하의 계좌에 있는 통화 금액을 입력하세요\n\n");
    scanf("%d", &hisob3);

    menyu3 :


    printf("\n\n\t\t작업 중 하나를 선택하세요.\n\n \t1.돈을 인출\n\n \t2.계정 보기\n\n\t3.PIN-KOD 변화\n\n\t4.송금\n\n");
    scanf("%d", &menyu);
    switch (menyu){
    case 1 :
        printf("인출금액을 입력하세요\n 1. 50.000\n 2. 75.000\n 3. 100.000\n 4.다른 금액을 입력하세요.\n\n");
        int summa;
        scanf("%d", &summa);
        switch (summa){
        case 1 :
            
            printf("\n\t\t결제 확인?\n 1. 예\n 2. 아니요\n\n");
            int sorov1 = 0;
            scanf("%d", &sorov1);
            if (sorov1 == 1){
            
            hisob = hisob - summa1;
            printf("\n돈이 성공적으로 인출되었습니다\n");
            goto menyu3;
            }
            else{
                printf("\n출금 취소됨 ");
                goto menyu3;
            }
            
            
            break;

            case 2 :
            
            printf("\n\t\t결제 확인 ?\n 1. 예\n 2. 아니요\n\n");
    
            scanf("%d", &sorov3);
            if (sorov3 == 1){
            
            hisob = hisob - summa2;
            printf("\n돈이 성공적으로 인출되었습니다\n");
            goto menyu3;
            }
            else{
                printf("\n출금 취소됨 ");
                goto menyu3;
            }
            
            
            break;

            case 3 :
            // int summa3 = 100000;
            printf("\n\t\t결제 확인 ?\n 1. 예\n 2. 아니요\n\n");
            int sorov3;
            scanf("%d", &sorov3);
            if (sorov3 == 1){
            
            hisob = hisob - summa3;
            printf("\n돈이 성공적으로 인출되었습니다\n");
            goto menyu3;
            }
            else{
                printf("\n출금 취소됨 ");
                goto menyu3;
            }
            
            
            break;


            case 4 :
            // int summa4 ;

            printf("\n\n인출금액을 입력하세요\n\n");
            scanf("%d", &summa4);

            printf("\n\t\t결제 확인 ?\n 1. 예\n 2. 아니요\n\n");
            int sorov4;
            scanf("%d", &sorov4);
            if (sorov4 == 1){
            
            hisob = hisob - summa4;
            printf("\n돈이 성공적으로 인출되었습니다\n");
            goto menyu3;
            }
            else{
                printf("\n출금 취소됨");
                goto menyu3;
            }
            
            
            break;
        
        default:

            printf("\n\n\t\t에러 발생됨  \n\n");
            goto menyu3;
            break;
        }
        break;
        
    case 2 :
        hisob3 :
        printf("\n\n확인을 위해 비밀번호를 입력하세요 ==>\n\n");
        int parol2;
        scanf("%d", &parol2);
        if (parol2 == parol){
            printf("귀하의 잔액   %d  ", hisob);
            goto menyu3;
        }
        else
        {
            printf("비밀번호를 잘못 입력하셨습니다  ");
            goto hisob3; 
        }
        

        break;
        
    case 3 :

        
        printf("\n\n\t\t확인하려면 이전 비밀번호를 입력하세요. \n");
        scanf("%d", &parr);
        if (parr == parol){
            parr = 0;
            printf("\n\n\t\t새 비밀번호를 입력하세요  \n\n");
            scanf("%d", &parr);
            printf("\n\n\t\t해당 조치를 승인하십니까?? 1.예    2.아니요\n");
            int so;
            scanf("%d", &so);
            if (so == 1)
            {
                parol = parr;
                printf("PIN 코드가 성공적으로 변경되었습니다.");
                goto menyu3;
            }
            


        }
        
        break;
        
    case 4 :


        printf("\n\n송금할 카드를 입력하세요. \n\n");
        int karta, summa5;
        scanf("%d", &karta);
         printf("\n\n인출금액을 입력하세요\n\n");
            scanf("%d", &summa5);

            printf("\n\t\t송금 확인?\n 1. 예\n 2.아니요\n\n");
            int sorov;
            scanf("%d", &sorov);
            if (sorov == 1){
            
            hisob = hisob - summa5;
            printf("\n돈이 성공적으로 이체되었습니다\n");
            goto menyu3;
            }
            else{
                printf("\n이전이 취소되었습니다. ");
                goto menyu3;
            }
            
            


       

        break;
    
    default:

    printf("에러가 발생했습니다 .. 다시 시도 해주세요 ");
    goto menyu3;
        break;
    }


    ruscha :
    // int parol;
    printf("\n\n\t\tвведите свой пароль\n");
    scanf("%d", &parol);
    // int hisob;
    printf("Введите, сколько денежных единиц на вашем счете\n\n");
    scanf("%d", &hisob);

    menyu4 :

    // int menyu;
    printf("\n\n\t\tВыберите одно из действий\n\n \t1.Снятие денег\n\n \t2.Просмотр аккаунта\n\n\t3.PIN-KOD изменить\n\n\t4.Перевод денег\n\n");
    scanf("%d", &menyu);
    switch (menyu){
    case 1 :
        printf("Введите сумму вывода средств\n 1. 50.000\n 2. 75.000\n 3. 100.000\n 4. Ввод другой суммы \n\n");
        int summa;
        scanf("%d", &summa);
        switch (summa){
        case 1 :
            // int summa1 = 50000;
            printf("\n\t\tВы одобряете снятие денег ?\n 1. да\n 2. Нет\n\n");
            int sorov1 = 0;
            scanf("%d", &sorov1);
            if (sorov1 == 1){
            
            hisob = hisob - summa1;
            printf("\nДеньги успешно расплатились\n");
            goto menyu4;
            }
            else{
                printf("\nСнятие средств отменено ");
                goto menyu4;
            }
            
            
            break;

            case 2 :
            // int summa2 = 75000;
            printf("\n\t\tВы одобряете снятие денег ?\n 1. да\n 2. Нет\n\n");
            int sorov2;
            scanf("%d", &sorov2);
            if (sorov2 == 1){
            
            hisob = hisob - summa2;
            printf("\nДеньги успешно расплатились\n\n");
            goto menyu4;
            }
            else{
                printf("\nСнятие средств отменено ");
                goto menyu4;
            }
            
            
            break;

            case 3 :
            // int summa3 = 100000;
            printf("\n\t\tВы одобряете снятие денег ?\n 1. да\n 2. Нет\n\n");
            int sorov3;
            scanf("%d", &sorov3);
            if (sorov3 == 1){
            
            hisob = hisob - summa3;
            printf("\nДеньги успешно расплатились\n\n");
            goto menyu4;
            }
            else{
                
                goto menyu4;
            }
            
            
            break;


            case 4 :
            // int summa4 ;

            printf("\n\nВведите сумму вывода средств\n\n");
            scanf("%d", &summa4);

            printf("\n\t\tВы одобряете снятие денег ?\n 1. да\n 2. Нет\n\n");
            int sorov4;
            scanf("%d", &sorov4);
            if (sorov4 == 1){
            
            hisob = hisob - summa4;
            printf("\nДеньги успешно расплатились\n\n");
            goto menyu4;
            }
            else{
                printf("\nСнятие средств отменено ");
                goto menyu4;
            }
            
            
            break;
        
        default:
            printf("\n\n\t\tВЫ ВВЕЛИ ОШИБКУ  \n\n");
            goto menyu4;
            break;
        }
        break;
        
    case 2 :
        hisob :
        printf("\n\nВведите свой пароль для проверки ==> \n\n");
        int parol2;
        scanf("%d", &parol2);
        if (parol2 == parol){
            printf("Ваш баланс   %d  ", hisob);
            goto menyu4;
        }
        else
        {
            printf("Вы ввели пароль по ошибке  ");
            goto hisob; 
        }
        

        break;
        
    case 3 :

        
        printf("\n\n\t\tВведите свой старый пароль для проверки \n");
        scanf("%d", &parr);
        if (parr == parol){
            parr = 0;
            printf("\n\n\t\tВведите новый пароль  \n\n");
            scanf("%d", &parr);
            printf("\n\n\t\tВы подтверждаете действие? 1. да  2.Нет\n");
            int so;
            scanf("%d", &so);
            if (so == 1)
            {
                parol = parr;
                printf("PIN-KOD успешно изменен ");
                goto menyu4;
            }
            


        }
        
        break;
        
    case 4 :


        printf("\n\nВведите карту, на которую нужно перевести деньги \n\n");
        int karta, summa5;
        scanf("%d", &karta);
         printf("\n\nВведите сумму вывода средств\n\n");
            scanf("%d", &summa5);

            printf("\n\t\tВы одобряете перевод ?\n 1. да \n 2. Нет\n\n");
            int sorov;
            scanf("%d", &sorov);
            if (sorov == 1){
            
            hisob = hisob - summa5;
            printf("\nДеньги успешно переведены\n");
            goto menyu4;
            }
            else{
                printf("\nПеревод отменен ");
                goto menyu4;
            }
            
            


       

        break;
    
    default:

    printf("Произошла ошибка попробуйте еще раз ");
    goto menyu4;
        break;
    }
*/


    return 0;
}
