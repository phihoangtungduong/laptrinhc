#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int *p;
//	p = (int*) malloc (10 * sizeof(int*));
//	int i;
//	for(i=0;i<10;i++){
//		printf("\nNhap p[%d]: ",i);
//		scanf("%d",p+i);
//	}
//	int s=0;
//	for(i=0;i<10;i++){
//		if(p[i] % 2 == 0){
//			s+=p[i];
//		}
//	}printf("\nTong s = %d",s);	
//	int N;
//	printf("\nNhap N: ");
//	scanf("%d",&N);	
//	int t[N],i,j;
//	for(i=0;i<N;i++){
//		printf("\nNhap t[%d]: ",i);
//		scanf("%d",&t[i]);
//	}
//	for(i=0;i<N;i++){
//		for(j=i+1;j<N;j++){
//			if(t[i] < t[j]){
//				int temp = t[i];
//				t[i] = t[j];
//				t[j] = temp;
//			}
//		}
//	}
//	printf("\nMang da sap xep la: ");
//	for(i=0;i<N;i++){
//		printf(" %d",t[i]);
//	}
//	int N;
//	printf("\nNhap N: ");
//	scanf("%d",&N);	
//	int t[N],i,j;
//	for(i=0;i<N;i++){
//		printf("\nNhap t[%d]: ",i);
//		scanf("%d",&t[i]);
//	}
//	for(i=0;i<N;i++){
//		for(j=i+1;j<N;j++){
//				int temp = t[i];
//				t[i] = t [j];
//				t[j] = temp;
//			}
//		}
//	printf("\nMang da sap xep la: ");
//	for(i=0;i<N;i++){
//		printf(" %d",t[i]);
//	}
//	int x,n,i,j,k,count;
//    int *p;
//    i = 0;
//    count =0;
//    p= (int *) calloc(1, sizeof(int));
//    for (;;)
//    {
//        printf("\nMenu chuong trinh");
//        printf("\n=============================");
//        printf("\n1.Nhap vao so nguyen x");
//        printf("\n2.Sap xep cac so theo thu tu tang dan");
//        printf("\n3.Tim kiem phan tu trong mang");
//        printf("\n4.Xoa phan tu trong mang");
//        printf("\n5.Hien thi");
//        printf("\n6.Thoat");
//        printf("\n=============================");
//        printf("\nNhap lua chon chuong trinh = ");
//        scanf("%d",&n);
//        if(n == 1){
//            printf("Nhap vao so nguyen x = ");
//            scanf("%d",p + i);
//            i++;
//            p = (int *) realloc(p, i *sizeof(int) );
//            
//        }
//        if( n ==2){
//            printf("cac so duoc sap xep theo thu tu tang dan: ");
//            for (j=0;j<i;j++){
//                for (k=i-1;k>j;k--){
//                if(p[j]>p[k]){
//                    p[j] =p[j]+p[k];
//                    p[k] = p[j]-p[k];
//                    p[j] = p[j] - p[k];
//                }
//            }
//        }
//        for (j=0;j<i;j++){
//            printf("%d ", p[j]);
//        }
//    }
//    if(n == 3){
//        printf("\nNhap so can tim trong mang = ");
//        scanf("%d", &x);
//        for (j=0;j<i;j++){
//            if(p[j] == x){
//                count++;
//            }
//        }
//        printf("\nso phan tu co gia tri bang gia tri can tim la = %d", count);
//    }
//    if (n==4){
//        printf("\nNhap phan tu can xoa = ");
//        scanf("%d",&x);
//        for (j=0;j<i;j++){
//            if(p[j]==x){
//                for(k=j;k<i;k++){
//                p[k]=p[k+1];
//                }
//                i--;
//                j--;
//            }
//        }
//        for (j=0;j<i;j++)
//        {
//            printf("%d ",p[j]);
//        }
//    }
//    if( n == 5){
//        printf("\nCac phan tu trong mang: ");
//        for (j=0;j<i;j++)
//        {
//            printf("%d ",p[j]);
//        }
//    }
//    if( n == 6){
//        return 0;
//    }
//}
//free (p);
	return 0;
}
