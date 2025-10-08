
  int64_t uu_timeout::wait_or_kill_process::h3c57ed1f2e84097f(int32_t* arg1, int32_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int32_t arg6, char arg7, char arg8, char arg9)

{
    int32_t var_60;
    _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::wait_or_timeout::he25bb3510a5d6b08(&var_60, arg2, arg5, arg6);
    int32_t rbx = var_60;
    int64_t var_58;
    int32_t rax_1;
    int32_t var_5c;
    
    if (rbx)
    {
        arg1[1] = 0x7c;
        rax_1 = 0;
    }
    else if (var_5c != 1)
    {
        char rax_5;
        int64_t rdx_2;
        rax_5 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "KILLTRAP -- \x1b[8mPIPEhelpNones…", 4);
        
        if (!(rax_5 & 1))
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uu_timeout::report_if_verbose::ha1199c5238d9a8e5(rdx_2, arg3, arg4, arg9);
        uu_timeout::send_signal::h21a409eed1ad1074(arg2, rdx_2, arg8);
        int32_t var_40;
        std::process::Child::wait::h7e33de4911114104(&var_40, arg2);
        
        if (var_40 != 1)
        {
            arg1[1] = rdx_2 + 0x80;
            rax_1 = 0;
        }
        else
        {
            int64_t var_38;
            *(arg1 + 8) = var_38;
            rax_1 = 1;
        }
    }
    else if (!arg7)
    {
        arg1[1] = 0x7d;
        rax_1 = 0;
    }
    else
    {
        int32_t rax_3 = var_58;
        uint32_t rbp = rax_3 & 0x7f;
        
        if (!rbp)
        {
            arg1[1] = *rax_3[1];
            rax_1 = 0;
        }
        else
        {
            if (rbp + 1 <= 1)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            arg1[1] = rbp;
            rax_1 = 0;
        }
    }
    *arg1 = rax_1;
    /* tailcall */
    return core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbx, var_58);
}
