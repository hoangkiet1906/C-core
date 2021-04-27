#include<stdio.h>
#include<math.h>
void Nhap1SoNguyen(int n){
	printf("Nhap so nguyen :");scanf("%d",&n);
	if(0<n<50)printf("So nguyen vua nhap la : %d",n);
	else printf("Moi ban nhap lai !");
}

void hienthi(float a[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%.2f ",a[i]);
}
float max(float a[],int n){
	int i;
	float max=a[0];
	for(i=1;i<n;i++)
		if(max<a[i])
		max=a[i];		
	return max;
}
float min(float a[],int n){
	int i;
	float min=a[0];
	for(i=1;i<n;i++)
		if(min>a[i])
		min=a[i];		
	return min;
}
void tongmang(float a[],int n){
	int i;
	float s=0;
	for(i=0;i<n;i++){
		s+=a[i];
	}
	printf("%0.2f",s);
}
float tbc(float a[],int n){
	int i;
	float s=0;
	for(i=0;i<n;i++){
			s+=a[i];
	}
	return s/n;	
}	
void sapxeptang(float a[],int n){
	int i,j;float tmp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			}
		}
	}
}
void sapxepgiam(float a[],int n){
	int i,j;float tmp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]>a[j]){
		   tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			}
		}
	}
}
float max_duong_chan(float a[],int n){
	int i;
	float max=(int)a[0];
	for(i=1;i<n;i++){
		int tg=(int)a[i];
		if (tg>0&&tg%2==0&&max<tg){
			max=(float)tg;
		}
	}		
	return (float)max;
}
float min_am_le(float a[],int n){
	int i;
	int min=(int)a[0];
	for(i=1;i<n;i++){
		int tg=(int)a[i];
		if ((tg<0)&&(abs(tg)%2==1)&&(min>tg)){
			min=tg;
		}
	}		
	return (float)min;
}
int ktra(float n){
	int i=(int)n;
	if(pow(sqrt(i),2)==i) return 1;
	else return 0;
}
int main(){
	int n,i;
	float a[10];
	Nhap1SoNguyen(n);
	printf("\nNhap so phan tu cua mang ");scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	printf("Max la : %0.2f",max(a,n));
	printf("\nMin la : %0.2f",min(a,n));
	printf("\nMax duong chan la : %0.2f",max_duong_chan(a,n));
	printf("\nMin am le la : %0.2f",min_am_le(a,n));
	printf("\nCac so Chinh Phuong trong day la : ");
	for (i=0;i<n;i++){
		if(ktra(a[i])) 
		printf("%.2f ",a[i]);
	}	
    printf("\nTong cua mang la :");
    tongmang(a,n);
    printf("\nTrung binh cong cac phan tu cua mang :%0.3f",tbc(a,n));
    printf("\nCac so lon hon TBC trong day la : ");
	for (i=0;i<n;i++){
		if(a[i]>tbc(a,n)) 
		printf("%.2f ",a[i]);
	}
    printf("\nMang vua nhap la :");
	hienthi(a,n);
    sapxeptang(a,n);
	printf("\nSau sap xep tang :");
	hienthi(a,n);
	sapxepgiam(a,n);
	printf("\nSau sap xep giam :");
	hienthi(a,n);
}
