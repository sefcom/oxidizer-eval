
  int64_t uu_dd::Output::write_block::h75bb814762c2a847(char* arg1, void* arg2, int64_t arg3)

{
    int64_t rbp = arg3;
    int64_t r12 = 0;
    int64_t result;
    
    while (true)
    {
        int64_t rdx_1;
        result = _$LT$uu_dd..Dest$u20$as$u20$std..io..Write$GT$::write::h3271a02f9286a322(arg1, 
            arg2 + r12, rbp - r12);
        
        if (!result)
        {
            r12 += rdx_1;
            rbp = arg3;
            
            if (r12 >= rbp)
                break;
            
            if (!*(*(arg1 + 0x10) + 0x4d))
                break;
        }
        else
        {
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1) != 0x23)
                break;
            
            int64_t var_38 = rdx_1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9ee6c79b3338b78b(&var_38);
        }
    }
    
    return result;
}
