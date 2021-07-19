#pragma once

void main()
{
    int chon;
    int soluongsv, diem;
    int diemsv[100];
    do
    {
        printf("====== CHUONG TRINH QUAN LI SINH VIEN ======\n");
        printf("0. Thoat chuong trinh \n");
        printf("1. Hien thi du lieu\n");
        printf("2. Nhap du lieu\n");
        printf("3. Sap xep du lieu\n");
        printf("4. Tim kiem du lieu\n");
        printf("5. Cap nhat du lieu\n");
        printf("6. Xoa du lieu\n");
        printf("============================================\n");
        printf("Nhap vao lua chon cua ban\n");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
        {
            printf("Thoat khoi chuong trinh");
            break;
        }
        case 1:
        {
            hienthi(diemsv, soluongsv);
            break;
        }
        case 2:
        {
            nhap(diemsv, soluongsv);
            hienthi(diemsv, soluongsv);
            break;
        }
        case 3:
        {
            sapxep(diemsv, soluongsv);
            hienthi(diemsv, soluongsv);
        }
        case 4:
        {
            int diemtk, slg = 0;
            printf("nhap vao diem can tim kiem");
            scanf("%d", &diemtk);
            for (int i = 0; i < soluongsv; i++)
            {
                if (diemtk == diemsv[i])
                {
                    slg = slg + 1;
                }
            }
            if (slg > 0)
            {
                printf("so luong ban sinh vien co diem %d la %d", diemtk, slg);
            }
            else
            {
                printf("khong co sv co diem %d", diemtk);
            }
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        default:
        {
            printf("Ban da nhap sai du lieu. moi ban nhap lai!");
            break;
        }
        }
    } while (chon != 0);
}
