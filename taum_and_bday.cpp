long taumBday(long int b,long int w,long int bc,long int wc,long int z) {
    long diff, change, min,answ;
    if(abs(bc - wc) > z) {
        min = bc < wc ? bc : wc;
        change = bc > wc ? b : w;
        answ = ((w+b)*min + change*z);
        return answ;
    }
    else {
        answ = (b*bc + w*wc);
        return answ;
    }
    return 0;
}


// Or Simple Solution without variable:
   //case 1, black is more expensive then change to white
    if(bc > wc && (wc+z) < bc)
            {
                    return (b*wc) + (w*wc) + (b*z);
            }
    else if(wc > bc && (bc+z) < wc)//case 2, white is more expensive
            {
                    return (b*bc) + (w*bc) + (w*z);
    }

                    return (b*bc) + (w*wc);