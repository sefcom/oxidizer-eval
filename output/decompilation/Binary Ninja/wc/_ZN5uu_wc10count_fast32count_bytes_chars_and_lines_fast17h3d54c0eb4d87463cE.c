
  int64_t* uu_wc::count_fast::count_bytes_chars_and_lines_fast::h3d54c0eb4d87463c(int64_t* arg1, int32_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t rax;
    int64_t var_4038 = rax;
    int64_t var_4038_1 = 0;
    memset(&var_4030, 0, 0x4000);
    int64_t r12 = 0;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(arg2, 
            &var_4030, 0x4000);
        
        if (!rax_1)
        {
            if (!rdx_1)
            {
                *arg1 = var_4038_1;
                arg1[1] = r12;
                __builtin_memset(&arg1[2], 0, 0x20);
                break;
            }
            
            var_4038_1 += rdx_1;
            char* rax_3;
            void* rdx_3;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(rdx_1, &var_4030);
            r12 += _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h30f4432b71c13f89(rax_3, rdx_3 + rax_3);
        }
        else
        {
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1) != 0x23)
            {
                *arg1 = var_4038_1;
                arg1[1] = r12;
                __builtin_memset(&arg1[2], 0, 0x18);
                arg1[5] = rdx_1;
                break;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(rdx_1);
        }
    }
    
    return arg1;
}
