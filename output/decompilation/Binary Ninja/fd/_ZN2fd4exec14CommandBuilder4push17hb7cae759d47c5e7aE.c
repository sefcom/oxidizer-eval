
  int64_t fd::exec::CommandBuilder::push::hb7cae759d47c5e7a(int32_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    if (*(arg1 + 0x140) - 1 < *(arg1 + 0x138))
    {
        int64_t rax_2 = fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(arg1);
        
        if (rax_2)
            return rax_2;
    }
    
    int128_t var_70;
    fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_70, arg1, arg2, arg3, arg4, arg5);
    int128_t var_58;
    core::iter::traits::iterator::Iterator::chain::h22a73fcc39e834cf(&var_58, &var_70, 
        *(arg1 + 0x40), *(arg1 + 0x48));
    
    if (!argmax::Command::args_would_fit::h98dcd836a2a2d367(*(arg1 + 0x130)))
    {
        int64_t rax_4 = fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(arg1);
        
        if (rax_4)
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7308b79749514aee(var_70, 
                *var_70[8]);
            return rax_4;
        }
    }
    
    int64_t var_60;
    int64_t var_48_1 = var_60;
    var_58 = var_70;
    char rax_6;
    int64_t rdx_2;
    rax_6 = argmax::Command::try_arg::ha49bcf2cb4dd0994(&arg1[0x14], &var_58);
    
    if (rax_6 & 1)
        return rdx_2;
    
    *(arg1 + 0x138) += 1;
    return 0;
}
