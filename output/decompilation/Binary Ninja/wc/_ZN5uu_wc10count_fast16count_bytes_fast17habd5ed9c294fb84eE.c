
  int64_t uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(int32_t* arg1)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t rax;
    int64_t var_4038 = rax;
    int32_t rbp = *arg1;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&var_4030, rbp);
    int64_t result;
    int64_t result_3;
    
    if (!var_4030)
    {
        result_3 = 0;
        int32_t var_4010;
        
        if (rbp <= 0 || var_4010 >= 0)
        {
            label_4b8834:
            
            if (!(var_4010 & 0x1000))
                goto label_4b8722;
            
            int64_t rax_19;
            int64_t result_2;
            rax_19 = uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(arg1);
            result_3 = result_2;
            result = result_2;
            
            if (rax_19)
                goto label_4b8722;
        }
        else
        {
            int64_t result_1;
            result = result_1;
            
            if (result <= 0)
                goto label_4b8834;
            
            int64_t rax_3 = sysconf(0x1e);
            
            if (!rax_3)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            if (!((rax_3 | result) >> 0x20))
            {
                if (!(COMBINE(0, result) % rax_3))
                {
                    label_4b87e7:
                    int64_t var_3ff0;
                    
                    if (var_3ff0 == -1)
                    {
                        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                        /* no return */
                    }
                    
                    uint64_t rdx_5;
                    
                    if (!((result | (var_3ff0 + 1)) >> 0x20))
                        rdx_5 = COMBINE(0, result) % (var_3ff0 + 1);
                    else
                        rdx_5 = result % (var_3ff0 + 1);
                    
                    result_3 = 0;
                    int64_t rax_18;
                    int64_t result_4;
                    rax_18 =
                        _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                        arg1, 0, result - rdx_5);
                    
                    if (!rax_18)
                        result_3 = result_4;
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::ha0f27aa6f0fdbae0(rax_18, result_4);
                    goto label_4b8834;
                }
            }
            else if (!(COMBINE(0, result) % rax_3))
                goto label_4b87e7;
        }
    }
    else
    {
        result_3 = 0;
        label_4b8722:
        memset(&var_4030, 0, 0x4000);
        int64_t i;
        
        do
        {
            result = result_3;
            
            while (true)
            {
                int64_t rax_1;
                rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(
                    arg1, &var_4030, 0x4000);
                
                if (!rax_1)
                    break;
                
                if (std::io::error::Error::kind::hb2ff5fa058639b3d(i) != 0x23)
                    return result;
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(i);
            }
            
            result_3 = result + i;
        } while (i);
    }
    return result;
}
