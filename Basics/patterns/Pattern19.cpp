#include <iostream>
int main(){
    for (int q=0; q<5; q++){
        for(int a = 4; a>=q; a--){std::cout<<'*';}
        for(int x = 0; x<q; x++){std::cout<<" ";}
        for(int y = 0; y<q; y++){std::cout<<" ";}
        for (int b = 4; b>=q; b--){std::cout<<'*';}
        std::cout<<"\n";
    }
    for (int r =0; r<5; r++){
        for (int s = 0; s<=r; s++){std::cout<<'*';}
        for (int t = 3; t>=r; t--){std::cout<<" ";}
        for (int u = 3; u>=r; u--){std::cout<<" ";}
        for (int v = 0; v<=r; v++){std::cout<<'*';}




        std::cout<<"\n";
    }




    return 0;
}