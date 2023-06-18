bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int l=0,r=m-1;
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(target<matrix[mid][0]) r=mid-1;
            else if(target>matrix[mid][n-1]) l=mid+1;
            else{
                break;
            }
        }
        l=0,r=n-1;
        int a=mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(target==matrix[a][mid]){
                return true;
            } else if(target <matrix[a][mid]){
                r=mid-1;
            } else{
                l=mid+1;
            }
        }
        return false;
}