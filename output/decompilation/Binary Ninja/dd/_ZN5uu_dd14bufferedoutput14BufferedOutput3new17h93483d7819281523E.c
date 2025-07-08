
  int64_t* uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(int64_t* arg1, char* arg2)

{
    char rbp = *arg2;
    int32_t rbx = *(arg2 + 4);
    int64_t var_38;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he1ec86b2283b0e90(&var_38, 
        *(*(arg2 + 0x10) + 0x78), 0);
    int64_t var_30;
    
    if (var_38)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_30);
        /* no return */
    }
    
    arg1[3] = rbp;
    *(arg1 + 0x19) = *(arg2 + 1);
    *(arg1 + 0x1b) = arg2[3];
    *(arg1 + 0x1c) = rbx;
    *(arg1 + 0x20) = *(arg2 + 8);
    *arg1 = var_30;
    int64_t var_28;
    arg1[1] = var_28;
    arg1[2] = 0;
    return arg1;
}
