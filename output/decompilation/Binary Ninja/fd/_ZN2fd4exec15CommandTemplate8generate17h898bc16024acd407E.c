
  int64_t fd::exec::CommandTemplate::generate::h898bc16024acd407(int64_t* arg1, int32_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    if (!arg3)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    void var_130;
    fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_130, arg2, arg4, arg5, arg6, arg7);
    void var_118;
    argmax::Command::new::h0ff314cd1dda056e(&var_118, &var_130);
    int64_t r13_1 = arg3 << 5;
    
    if (r13_1 != 0x20)
    {
        void* rbp_1 = &arg2[8];
        int64_t i_1 = r13_1 - 0x20;
        int64_t i;
        
        do
        {
            fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_130, rbp_1, arg4, arg5, arg6, 
                arg7);
            char rax_1;
            int64_t rdx_2;
            rax_1 = argmax::Command::try_arg::ha49bcf2cb4dd0994(&var_118, &var_130);
            
            if (rax_1 & 1)
            {
                arg1[1] = rdx_2;
                *arg1 = -0x8000000000000000;
                return core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(&var_118);
            }
            
            rbp_1 += 0x20;
            i = i_1;
            i_1 -= 0x20;
        } while (i != 0x20);
    }
    
    return memcpy(arg1, &var_118, 0xe8);
}
