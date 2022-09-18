class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int alDa, alMa, bDa, bMa, alDl, alMl, bMl, bDl;
        int a, b;
        a = (arriveAlice[0]-'0')*10;
        b = (arriveAlice[1]-'0');
        alMa = a+b;
        a = (arriveAlice[3]-'0')*10;
        b = (arriveAlice[4]-'0');
        alDa = a+b;
        a = (arriveBob[0]-'0')*10;
        b = (arriveBob[1]-'0');
        bMa = a+b;
        a = (arriveBob[3]-'0')*10;
        b = (arriveBob[4]-'0');
        bDa = a+b;
        
        a = (leaveAlice[0]-'0')*10;
        b = (leaveAlice[1]-'0');
        alMl = a+b;
        a = (leaveAlice[3]-'0')*10;
        b = (leaveAlice[4]-'0');
        alDl = a+b;
        a = (leaveBob[0]-'0')*10;
        b = (leaveBob[1]-'0');
        bMl = a+b;
        a = (leaveBob[3]-'0')*10;
        b = (leaveBob[4]-'0');
        bDl = a+b;
        // cout << "alMa: " << alMa << " alDa :" << alDa << " bMa : " << bMa << " bDa : " << bDa  << endl;
        // cout << "alMl: " << alMl << " alDl :" << alDl << " bMl : " << bMl << " bDl : " << bDl  << endl;     
        int w, x, y, z;
        
        if(alMa < bMa){
            w = bMa;
            x = bDa;
        }
        else if(alMa > bMa){
            w = alMa;
            x = alDa;
        }
        else{
            w = alMa;
            x = max(alDa, bDa);
        }

        
        if(alMl > bMl){
            y = bMl;
            z = bDl;
        }
        else if(alMl < bMl){
            y = alMl;
            z = alDl;
        }
        else{
            y = alMl;
            z = min(alDl, bDl);
        }
        
        
        int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int ans=0;
        // cout << "w: " << w << "x: " << x << "y: " << y <<  "z: " << z;
        if(w==y){
            if(z<x) return 0;
            return abs(z-x)+1;
        }
        else if(w<y){
            ans += m[w-1]-x;
            ans++;
            ans += z;
            w++;
            while(w<y){
                ans += m[w-1];
                w++;
            }
        }
        else if(y<w){
            return 0;
        }
        return ans;
    }
};
