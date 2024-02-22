class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        int end = x, start = 1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            
            if(mid > x / mid)
            {
                end = mid - 1;
            }  
            else if(mid  == x / mid) 
            {
                return  mid;
            }    
            else
            {
                start = mid + 1;
            }    
        }
        return end;
        /*int first = 1, last = x;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            // mid * mid == x gives runtime error
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid - 1;
            }
            else {
                first = mid + 1;
            }
        }
        return last;*/// referencing for upper improvement
    }
};