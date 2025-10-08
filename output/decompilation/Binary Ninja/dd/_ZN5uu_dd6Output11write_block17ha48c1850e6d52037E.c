
  int64_t uu_dd::Output::write_block::ha48c1850e6d52037(char* arg1, int64_t arg2, int64_t arg3)

{
    int64_t r13 = arg3;
    int64_t rbx = 0;
    
    while (true)
    {
        char rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$uu_dd..Dest$u20$as$u20$std..io..Write$GT$::write::h306764d99c319006(arg1, 
            arg2 + rbx, r13 - rbx);
        
        if (!(rax_2 & 1))
        {
            rbx += rdx_1;
            r13 = arg3;
            
            if (rbx >= r13)
                break;
            
            if (!*(*(arg1 + 0x10) + 0x4d))
                break;
        }
        else
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23)
                return 1;
            
            int64_t var_38 = rdx_1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8fa75f22e705d35b(&var_38);
        }
    }
    
    return 0;
}
