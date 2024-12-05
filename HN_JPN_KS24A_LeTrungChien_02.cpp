#include<stdio.h>

int main(){
	int arr[100];
	int chon;
	int n,x;
	int chan=0;
	int le=0;
	int tim=-1;
	int them[1];
	int giatri;
	int vitrixoa;
     	do{
			printf("                MENU \n");
			printf("1 nhap so phan tu va gia tri cua mang\n");
			printf("2 in ra gia tri cac phan tu trong mang\n");
			printf("3 dem so luong phan tu chan le trong mang\n");
			printf("4 tim gia tri lon thu hai trong mang\n");
			printf("5 them mot phan tu vao dau mang \n");
			printf("6 xoa mot phan tu o vi tri cu the\n");
			printf("7 sap xep theo thu tu giam dan(Insertion sort)\n");
			printf("8 tim kiem phan tu co trong mang\n");
			printf("9 in so nuyen to da binh phuong\n");
			printf("10 sap xep theo thu tu giam dan(Bubble sort)\n");
			printf("11 thoat\n");
			
			printf("\n");
			
			printf("moi ban lua chon chuc nang\n");
			scanf("%d",&chon);
		switch(chon){
		    	case 1:
					printf("moi ban chon kich thuc mang\n");
		            	scanf("%d",&n);
		            for(int i=0;i<n;i++){
		            	printf("moi ban nhap gia tri cua arr[%d]\n",i);
							scanf("%d",&arr[i]);
					}
				break;
			case 2:
				for(int i=0;i<n;i++){
		            	printf("arr[%d] = %d ,",i,arr[i]);
						
					}
					printf("\n");	
				break;
			case 3:
				chan=0;
				le=0;
				for(int i=0;i<n;i++){
		            	if(arr[i] % 2==0){
		            		chan++;
						}
						else{
							le++;
						}
					}
					printf("so phan tu chan co trong mang la %d \n",chan);
					printf("so phan tu le co trong mang la %d \n",le);	
						
				break;
			case 4:
				break;
			case 5:
		      	printf("moi ban nhap gia muon them vao dau mang\n");
		            	scanf("%d",&giatri);
		            	them[1]={giatri};
		            	printf("arr[0] = %d ,",giatri);
		          for(int i=0;i<n;i++){
		            	printf("arr[%d] = %d ,",i+1,arr[i]);
					}
					printf("\n");	  	
				break;
			case 6:
				printf("nhap vao vi tri ban muon xoa: ");
		        	scanf("%d", &vitrixoa);
		    	if(vitrixoa <0 || vitrixoa>=n){
			    	printf("so ban nhap khong hop le\n");
		    	}
			
		      	for(int i =vitrixoa; i<n-1;i++){
			      	arr[i]=arr[i+1];
		    	}
		         	n--; 
		
		        	for(int i =0; i<n;i++){
			        	printf("arr[%d] =%d\n",i, arr[i]);
		   	}
				break;
			case 7:
				break;
			case 8:
				tim=-1;
		     	printf("moi ban nhap gia tri muon tim kiem trong mang\n");
		            	scanf("%d",&x);
				for(int i=0;i<n;i++){
					if(arr[i]==x){
						printf("gia tri %d o vi tri arr[%d]\n",x,arr[i]);
							tim++;
						break;
					}
					
				}
				if(tim=-1){
			    	printf("gia tri khong ton tai trong mang\n");	
		   		}
				break;
			case 9:
				break;
			case 10:
			for(int i=0 ;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
					if(arr[j]>arr[j+1]){
					int temp=arr[j];
					arr[j] =arr[j+1];
					arr[j+1] = temp;
				}
				}
			}
				printf("gia tri sau sap xep \n ");
			for(int i=n ;i>-1;i--){
				printf(" %d \n",arr[i]);
			}
				break;
			case 11:
				printf("chuong trinh ket thuc\n");
				break;

		default:
		printf("lua chon khong hop le\n");	
			
		}
		
	}while(chon!=11);
	
	
	
	return 0;
}
