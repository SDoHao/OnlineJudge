class Solution {
public
    vectorint findPeaks(vectorint& mountain) {
        vectorint peaks;
        for(int i = 1;i  mountain.size() - 1;i++)
        {
            if(mountain[i-1]  mountain[i] && mountain[i]  mountain[i+1])
            {
                peaks.push_back(i);
            }
        }
        return peaks;
    }
};