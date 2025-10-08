
  bool fd::walk::ReceiverBuffer$LT$W$GT$::stop::h953efcef9522a5da(void* arg1)

{
    bool result;
    
    if (!*(arg1 + 0x80))
    {
        alloc::slice::stable_sort::h08c83894e6862646(*(arg1 + 0x40), *(arg1 + 0x48));
        result = fd::walk::ReceiverBuffer$LT$W$GT$::stream::hd6ded5132bc549ae(arg1);
    }
    
    if (*(arg1 + 0x80) || result == 6)
    {
        result = true;
        
        if (*(*(arg1 + 0x60) + 0x1e4))
            return *(arg1 + 0x78);
    }
    
    return result;
}
