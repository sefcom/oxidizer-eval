
  int64_t* uu_wc::count_fast::count_bytes_chars_and_lines_fast::h010e9b1655211949(int64_t* arg1, int64_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t rbx = 0;
    memset(&var_4030, 0, 0x4000);
    int64_t var_4040 = 0;
    int64_t* result;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 =
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::ha94ed9861f25a8f0(
            arg2, &var_4030, 0x4000);
        
        if (!(rax_1 & 1))
        {
            if (!rdx_1)
            {
                result = arg1;
                *result = 0;
                result[1] = rbx;
                result[2] = var_4040;
                __builtin_memset(&result[3], 0, 0x18);
                break;
            }
            
            char* rax_3;
            void* rdx_3;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, rdx_1, &var_4030, 0x4000);
            int64_t rax_4 = bytecount::num_chars::hb6a8e991551eb7ac(rax_3, rdx_3);
            int64_t* rax_5;
            void* rdx_5;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, rdx_1, &var_4030, 0x4000);
            rbx += rax_4;
            var_4040 += bytecount::count::ha8ef7b6513bc7b05(rax_5, rdx_5, 0xa);
        }
        else
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23)
            {
                result = arg1;
                *result = 0;
                result[1] = rbx;
                result[2] = var_4040;
                *(result + 0x18) = {0};
                result[5] = rdx_1;
                break;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h06d3f45961b15e39(rax_1, rdx_1);
        }
    }
    
    return result;
}
