
  int64_t* uu_wc::count_fast::count_bytes_chars_and_lines_fast::hd7978f18bcbb2d44(int64_t* arg1, int32_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t var_4040 = 0;
    memset(&var_4030, 0, 0x4000);
    int64_t rbx = 0;
    int64_t r13 = 0;
    int64_t* result;
    
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
                result = arg1;
                *result = var_4040;
                result[1] = rbx;
                result[2] = r13;
                __builtin_memset(&result[3], 0, 0x18);
                break;
            }
            
            var_4040 += rdx_1;
            char* rax_3;
            void* rdx_3;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(rdx_1, &var_4030);
            rbx += _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5a66f6267fc22cf2(rax_3, rdx_3 + rax_3);
            char* rax_5;
            void* rdx_5;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(rdx_1, &var_4030);
            r13 += bytecount::count::h11a8399421fb62fe(rax_5, rdx_5, 0xa);
        }
        else
        {
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1) != 0x23)
            {
                result = arg1;
                *result = var_4040;
                result[1] = rbx;
                result[2] = r13;
                *(result + 0x18) = {0};
                result[5] = rdx_1;
                break;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(rdx_1);
        }
    }
    
    return result;
}
