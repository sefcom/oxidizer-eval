
  int64_t uu_wc::count_fast::count_bytes_fast::h1b572bf67c4143c1(int64_t* arg1)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t rax;
    int64_t var_4038 = rax;
    int64_t result = 0;
    nix::sys::stat::fstat::h932ea0f7705da4a5(&var_4030, 0);
    
    if (var_4030 & 1)
        goto label_4634b6;
    
    char var_400f;
    
    if (var_400f & 0x10)
    {
        char rax_1;
        int64_t result_2;
        rax_1 = uu_wc::count_fast::count_bytes_using_splice::h131ffe0d704d0ba2();
        result = result_2;
        
        if (rax_1 & 1)
            goto label_4634b6;
    }
    else
    {
        result = 0;
        label_4634b6:
        memset(&var_4030, 0, 0x4000);
        int64_t result_1 = result;
        int64_t i;
        
        do
        {
            result = result_1;
            
            while (true)
            {
                int64_t rax_2;
                rax_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::ha94ed9861f25a8f0(arg1, &var_4030, 0x4000);
                
                if (!(rax_2 & 1))
                    break;
                
                if (std::io::error::Error::kind::h135fe00c4e7365f3(i) != 0x23)
                    return result;
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h06d3f45961b15e39(rax_2, i);
            }
            
            result_1 = result + i;
        } while (i);
    }
    
    return result;
}
