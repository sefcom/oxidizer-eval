
  void* uu_numfmt::format::format_and_print_whitespace::h40be5ec289fb4772(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    void var_60;
    core::iter::traits::iterator::Iterator::zip::h9e915b482ca14524(&var_60, arg2);
    int64_t var_a0;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h9dfd8b8e36c49ba3(&var_a0, &var_60);
    char* var_98;
    char* rax = var_98;
    void* result;
    char const (** const var_150)[0xa];
    
    if (!rax)
    {
        label_4c4f7a:
        var_150 = &data_535ba0;
        int64_t var_148_4 = 1;
        int64_t var_140_4 = 8;
        int128_t var_138_1 = {0};
        result = std::io::stdio::_print::he918bceb0c89db46(&var_150);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t r15_1 = arg4[0xc];
        int64_t r12_1 = arg4[0xd];
        int64_t r13_1 = arg4[0x17];
        int64_t var_e8_1 = r12_1;
        
        while (true)
        {
            int64_t rbx_1 = var_a0;
            char* var_118 = rax;
            int128_t var_88;
            int128_t var_e0 = var_88;
            int128_t var_138;
            char** var_d0;
            int64_t (* var_c8)(int64_t* arg1, int64_t arg2);
            void* result_1;
            
            if (!uucore::features::ranges::contain::ha9677be85801ec1f(r15_1, r12_1, rbx_1))
            {
                var_d0 = &var_118;
                var_c8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                int128_t* var_c0_1 = &var_e0;
                result_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_150 = &data_41a370;
                int64_t var_148_1 = 2;
                *var_138[8] = 0;
                char*** var_140_1 = &var_d0;
                var_138 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_150);
            }
            else
            {
                void* var_90;
                void* r9_1 = var_90;
                void* rax_1;
                
                if (rbx_1 > 1)
                {
                    var_150 = &data_535bc8;
                    int64_t var_148_2 = 1;
                    int64_t var_140_2 = 8;
                    var_138 = {0};
                    std::io::stdio::_print::he918bceb0c89db46(&var_150);
                    char* rbp_1 = var_118;
                    void* rdx_2;
                    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, rbp_1, var_90);
                    
                    if (!rax_1)
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, var_90, 1, var_90);
                        /* no return */
                    }
                    
                    r9_1 = rdx_2;
                    r12_1 = var_e8_1;
                }
                
                rax_1 = var_90;
                void* rdx_3 = *var_e0[8];
                uu_numfmt::format::format_string::h230c6a9d10700455(&var_d0, var_e0, rdx_3, arg4, 
                    !r13_1 & rax_1, r9_1 + rdx_3);
                int128_t zmm0_2 = var_c8;
                
                if (var_d0)
                {
                    result = result_1;
                    arg1[1] = result;
                    *arg1 = zmm0_2;
                    break;
                }
                
                void* result_2 = result_1;
                int128_t var_78 = zmm0_2;
                int128_t* var_b0 = &var_78;
                int64_t (* var_a8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_150 = &data_416000;
                int64_t var_148_3 = 1;
                *var_138[8] = 0;
                int128_t** var_140_3 = &var_b0;
                var_138 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_150);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_78);
            }
            _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h9dfd8b8e36c49ba3(&var_a0, &var_60);
            rax = var_98;
            
            if (!rax)
                goto label_4c4f7a;
        }
    }
    return result;
}
