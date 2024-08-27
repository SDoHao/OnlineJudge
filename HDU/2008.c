int main()
{
    int n;
    double m;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int i = 0,positives =0,negatives =0,zeros = 0;
        while(i<n)
        {
            scanf("%lf",&m);
            if(m==0)
            {
                zeros++;
            }
            else if(m<0)
            {
                negatives++;
            }
            else
            {
                positives++;
            }
            i++;
        }
        printf("%d %d %d\n",negatives,zeros,positives);
    }

    return 0;
}