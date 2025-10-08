
  char* bat::output::OutputType::handle::h5316410587048584(char* arg1, int64_t* arg2)

{
    int64_t rcx = *arg2 - 3;
    int64_t rax = 1;
    
    if (rcx < 3)
        rax = rcx;
    
    void** const rcx_1;
    
    if (!rax)
    {
        if (arg2[3] == 0xffffffff)
        {
            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(arg1, "Could not open stdin for pagersr…", 0x1e);
            return arg1;
        }
        
        arg2 = &arg2[3];
        rcx_1 = &data_ace840;
        rax = 0;
    }
    else if (rax != 1)
    {
        arg2 = &arg2[1];
        rcx_1 = &data_ace890;
        rax = 0;
    }
    else
        rcx_1 = &data_acd888;
    
    *(arg1 + 8) = rax;
    *(arg1 + 0x10) = arg2;
    *(arg1 + 0x18) = rcx_1;
    *arg1 = 0xd;
    return arg1;
}
