
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<windows.h>

int main()
{

    int i, j;//��ʾ���̺�������
    /*************************************************
    *
    *���Ʊ����Ҫ���ַ�:�� �� ���� �� �ȩ� �� ���������
    *�����ֵ0��ʾ���壬1��ʾ���壬2��ʾ��λ��û����
    *
    */
    int qipan[20][20];
    int color = 0;//0��ʾ����(ԲȦ)��1��ʾ����
    int iTemp = 0, jTemp = 0, countTemp = 0;
    int colorFlag = 0;
    char op;

again:

    for (i = 0; i < 20; i++)
        for (j = 0; j < 20; j++)
            qipan[i][j] = 2;

    while (1)
    {
        printf("����������λ�ã����̴�СΪ20*20),��2,2: ");
        scanf("%d,%d", &i, &j);

        if (i < 1 || i >20 || j < 1 || j>20)
        {
            printf("�����λ�ó��������̵ķ�Χ�����������룡\n");
            continue;
        }

        if ((2 != qipan[i - 1][j - 1]))
        {
            printf("��ʾ����λ���Ѿ���������!\n");
            fflush(stdin);
            continue;
        }

        color = (color + 1) % 2;//��ȡ������������
        qipan[i - 1][j - 1] = color;//����λ���������Ը�����

        //�������̶�Ӧλ�����ԣ���������״̬�����̣�һ���л��ƣ���Ե�ر���
        for (i = 1; i <= 20; i++)
        {
            //��һ��
            if (i == 1)
            {
                //��һ��
                if (qipan[i - 1][0] == 1)
                    printf("��");
                if (qipan[i - 1][0] == 0)
                    printf("��");
                if (qipan[i - 1][0] == 2)
                    printf("�� ");

                //��2-19��
                for (j = 2; j <= 19; j++)
                {
                    if (qipan[i - 1][j - 1] == 1)
                        printf("��");
                    if (qipan[i - 1][j - 1] == 0)
                        printf("��");
                    if (qipan[i - 1][j - 1] == 2)
                        printf("�� ");
                }

                //��20��
                if (qipan[i - 1][j - 1] == 1)
                    printf("��");
                if (qipan[i - 1][j - 1] == 0)
                    printf("��");
                if (qipan[i - 1][j - 1] == 2)
                    printf("�� ");

                printf("\n");
            }

            //��2-19��
            if (i <= 19 && i >= 2)
            {
                //��һ��
                if (qipan[i - 1][0] == 1)
                    printf("��");
                if (qipan[i - 1][0] == 0)
                    printf("��");
                if (qipan[i - 1][0] == 2)
                    printf("�� ");

                //��2-19��
                for (j = 2; j <= 19; j++)
                {
                    if (qipan[i - 1][j - 1] == 1)
                        printf("��");
                    if (qipan[i - 1][j - 1] == 0)
                        printf("��");
                    if (qipan[i - 1][j - 1] == 2)
                        printf("�� ");
                }

                //��20��
                if (qipan[i - 1][j - 1] == 1)
                    printf("��");
                if (qipan[i - 1][j - 1] == 0)
                    printf("��");
                if (qipan[i - 1][j - 1] == 2)
                    printf("�� ");

                printf("\n");
            }

            //��20��
            if (i == 20)
            {
                if (qipan[i - 1][0] == 1)
                    printf("��");
                if (qipan[i - 1][0] == 0)
                    printf("��");
                if (qipan[i - 1][0] == 2)
                    printf("�� ");

                for (j = 2; j <= 19; j++)
                {
                    if (qipan[i - 1][j - 1] == 1)
                        printf("��");
                    if (qipan[i - 1][j - 1] == 0)
                        printf("��");
                    if (qipan[i - 1][j - 1] == 2)
                        printf("�� ");
                }

                if (qipan[i - 1][j - 1] == 1)
                    printf("��");
                if (qipan[i - 1][j - 1] == 0)
                    printf("��");
                if (qipan[i - 1][j - 1] == 2)
                    printf("�� ");

                printf("\n");
            }

        }

        //�ж���Ӯ
        for (i = 0; i < 20; i++)
        {
            for (j = 0; j < 20; j++)
            {
                //count = 0;
                //�����⵽�������ӣ�������������йص��Ƿ����Ӯ
                if (2 != qipan[i][j])
                {
                    colorFlag = qipan[i][j];
                    countTemp = 1;
                    iTemp = i;
                    jTemp = j;

                    //�����Ӻ������Ƿ����Ӯ
                    while ((++jTemp < 20) && (5 != countTemp))
                    {
                        if (colorFlag == qipan[i][jTemp])
                        {
                            countTemp++;
                            if (5 == countTemp)
                            {
                                if (0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if (1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }

                    //�������Ӯ
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while ((++iTemp < 20) && (5 != countTemp))
                    {
                        if (colorFlag == qipan[iTemp][j])
                        {
                            countTemp++;
                            if (5 == countTemp)
                            {
                                if (0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if (1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }

                    }

                    //б��,�����ϵ����·�����
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while ((++iTemp < 20) && (++jTemp < 20) && (5 != countTemp))
                    {
                        if (colorFlag == qipan[iTemp][jTemp])
                        {
                            countTemp++;
                            if (5 == countTemp)
                            {
                                if (0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if (1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }

                    //б��,�����ϵ����·�����
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while ((++iTemp >= 0) && (--jTemp >= 0) && (5 != countTemp))
                    {
                        if (colorFlag == qipan[iTemp][jTemp])
                        {
                            countTemp++;
                            if (5 == countTemp)
                            {
                                if (0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if (1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }

                }

            }

        }

    }
whileEnd:
    printf("���¿�ʼ�������˳�?���¿�ʼ�밴y/Y,�˳��밴�����:");
    fflush(stdin);
    op = getchar();

    if (('y' == op) || ('Y' == op))
    {
        system("cls");
        printf("�Ѿ����¿�ʼ�ˣ��������һ�����ӵ�����:\n\n\n");
        goto again;
    }

}