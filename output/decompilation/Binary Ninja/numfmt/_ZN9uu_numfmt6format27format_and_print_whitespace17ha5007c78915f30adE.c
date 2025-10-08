
  int64_t (*)(int64_t* arg1, int64_t arg2) uu_numfmt::format::format_and_print_whitespace::ha5007c78915f30ad(int128_t* arg1, int64_t arg2, int64_t arg3, char* arg4)

{
    int64_t* var_60;
    core::iter::traits::iterator::Iterator::zip::hc5c51cab09057469(&var_60, arg2);
    int64_t var_d0;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::hcacff3f450858e3c(&var_d0, &var_60);
    char* i_2;
    char* i = i_2;
    char const (** const var_158)[0x117];
    char rcx_2;
    
    if (!i)
        rcx_2 = arg4[0xc8];
    else
    {
        int64_t* rax_1 = *(arg4 + 0x60);
        int64_t rax_2 = *(arg4 + 0x68);
        char rax_3 = arg4[0xc8];
        int64_t rax_4 = *(arg4 + 0xb8);
        
        do
        {
            int64_t r13_1 = var_d0;
            int64_t var_c0;
            int64_t r14_1 = var_c0;
            char* var_b8;
            char* r12_1 = var_b8;
            char* var_100 = r12_1;
            int64_t var_140;
            char* i_1;
            char** var_a8;
            int64_t (* var_a0)(int64_t* arg1, int64_t arg2);
            int64_t (* var_90)(int64_t* arg1, int64_t arg2);
            
            if (!uucore::features::ranges::contain::ha2f044f5693f050c(rax_1, rax_2, r13_1))
            {
                if (rax_3 & 1)
                {
                    var_158 = 0;
                    
                    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h436c904482f687d7(
                        i, r14_1, 
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_158)))
                    {
                        var_158 = &data_502540;
                        int64_t var_150_4 = 1;
                        int64_t var_148_4 = 8;
                        var_140 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                        void* i_3;
                        int64_t rdx_6;
                        i_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, i, r14_1);
                        
                        if (!i_3)
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(i, r14_1, 1, r14_1);
                            /* no return */
                        }
                        
                        i = i_3;
                        r14_1 = rdx_6;
                    }
                }
                
                i_1 = i;
                int64_t var_120_1 = r14_1;
                var_a8 = &i_1;
                var_a0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                char** var_98_1 = &var_100;
                var_90 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                var_158 = &data_4195a0;
                int64_t var_150_1 = 2;
                int64_t var_138_1 = 0;
                char*** var_148_1 = &var_a8;
                var_140 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_158);
            }
            else
            {
                int64_t r9_1 = r14_1;
                void* rax_5;
                
                if (r13_1 > 1)
                {
                    var_158 = &data_502540;
                    int64_t var_150_2 = 1;
                    int64_t var_148_2 = 8;
                    var_140 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                    int64_t rdx_2;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, i, r14_1);
                    
                    if (!rax_5)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(i, r14_1, 1, r14_1);
                        /* no return */
                    }
                    
                    r9_1 = rdx_2;
                    r12_1 = var_100;
                }
                
                rax_5 = r14_1;
                int64_t var_b0;
                uu_numfmt::format::format_string::h3b8df337189cc348(&var_a8, r12_1, var_b0, arg4, 
                    !rax_4 & rax_5, r9_1 + var_b0);
                i_1 = var_a0;
                
                if (var_a8 & 1)
                {
                    arg1[1] = var_90;
                    *arg1 = i_1;
                    return var_90;
                }
                
                int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) = var_90;
                int128_t var_78 = i_1;
                int128_t* var_88 = &var_78;
                int64_t (* var_80_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_158 = &data_4198c0;
                int64_t var_150_3 = 1;
                int64_t var_138_2 = 0;
                int128_t** var_148_3 = &var_88;
                var_140 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_78);
            }
            _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::hcacff3f450858e3c(&var_d0, &var_60);
            i = i_2;
        } while (i);
        
        rcx_2 = rax_3;
    }
    
    int32_t rcx_3 = 0xa;
    
    if (rcx_2 & 1)
        rcx_3 = 0;
    
    var_d0 = rcx_3;
    var_60 = &var_d0;
    int64_t (* var_58_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    var_158 = &data_4198c0;
    int64_t var_150_5 = 1;
    int64_t var_138_3 = 0;
    int64_t** var_148_5 = &var_60;
    int64_t var_140_1 = 1;
    int64_t (* rax_10)(int64_t* arg1, int64_t arg2) =
        std::io::stdio::_print::h5e446ff973c02de6(&var_158);
    *arg1 = -0x8000000000000000;
    return rax_10;
}
