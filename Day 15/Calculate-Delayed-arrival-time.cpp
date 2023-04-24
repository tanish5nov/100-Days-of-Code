int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int netTime= arrivalTime + delayedTime;
        
        if(netTime>24){return netTime-24;}
        else if (netTime==24){return 0;}
        else{return netTime;}
    }
