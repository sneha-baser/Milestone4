class Solution
{
    //Function to find the maximum profit and the number of jobs done.
    int[] JobScheduling(Job arr[], int n)
    {
        int res[]=new int[2];
        res[0]=0;
        res[1]=0;
        Set<Integer> slot=new HashSet<>();
        List<Job> list=new ArrayList<>();
        for(Job item:arr)
            list.add(item);
        Collections.sort(list,(n1,n2)->{
            return n2.profit - n1.profit; 
        });
        for(Job job:list)
        {
            int dead=job.deadline;
            if(!slot.contains(dead))
            {
                slot.add(dead);
                res[0]+=1;
                res[1]+=job.profit;
            }
            else
            {
                while(dead-->1)
                {
                     if(!slot.contains(dead))
                        {
                            slot.add(dead);
                            res[0]+=1;
                            res[1]+=job.profit;
                            break;
                        }
                }
            }
        }
        return res;
    }
}
    
