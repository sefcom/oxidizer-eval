
  int64_t* uu_numfmt::format::format_and_print_delimited::h098508a496fb9107(int128_t* arg1, int64_t arg2, int64_t arg3, char* arg4)

{
    if (0 + -(*(arg4 + 0x70)))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void* var_1b8 = &arg4[0x70];
    void* const var_168;
    _$LT$$RF$alloc..string..String$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hf8368330bc7d3e9a(&var_168, &arg4[0x70], arg2, arg3);
    int64_t var_100 = 0;
    int64_t var_f8 = arg3;
    int16_t var_f0 = 1;
    char const (** const var_d0)[0x118];
    core::iter::traits::iterator::Iterator::zip::ha700ff6630919b15(&var_d0, &var_168);
    int64_t var_1b0;
    int64_t r9 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h63a30ee2b5483774(&var_1b0, &var_d0);
    void* var_1a8;
    void* rax = var_1a8;
    int64_t* result;
    
    if (!rax)
    {
        label_46b003:
        var_d0 = &data_502518;
        int64_t var_c8_1 = 1;
        int64_t var_c0_1 = 8;
        int128_t var_b8_1 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
        result = arg1;
        *result = -0x8000000000000000;
    }
    else
    {
        int64_t* r15_1 = *(arg4 + 0x60);
        int64_t r12_1 = *(arg4 + 0x68);
        
        while (true)
        {
            int64_t r14_1 = var_1b0;
            void* var_1e8 = rax;
            char rax_1 = uucore::features::ranges::contain::ha2f044f5693f050c(r15_1, r12_1, r14_1);
            void** var_198;
            int64_t (* var_190)(int64_t* arg1, int64_t arg2);
            
            if (r14_1 > 1)
            {
                var_198 = &var_1b8;
                var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hed06e343d9a3976c;
                var_168 = &data_4198c0;
                int64_t var_160_2 = 1;
                int64_t var_148_2 = 0;
                void*** var_158_2 = &var_198;
                int64_t var_150_2 = 1;
                r9 = std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            
            if (!rax_1)
            {
                var_198 = &var_1e8;
                var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                var_168 = &data_4198c0;
                int64_t var_160_1 = 1;
                int64_t var_148_1 = 0;
                void*** var_158_1 = &var_198;
                int64_t var_150_1 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            else
            {
                int64_t var_1a0;
                char* rax_2;
                int64_t rdx_2;
                rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4fc5e4c9ad6ee5c(
                    var_1e8, var_1a0);
                uu_numfmt::format::format_string::h3b8df337189cc348(&var_198, rax_2, rdx_2, arg4, 
                    0, r9);
                int128_t zmm0_2 = var_190;
                int64_t* result_1;
                
                if (var_198 & 1)
                {
                    result = result_1;
                    arg1[1] = result;
                    *arg1 = zmm0_2;
                    break;
                }
                
                int64_t* result_2 = result_1;
                int128_t var_e8 = zmm0_2;
                int128_t* var_178 = &var_e8;
                int64_t (* var_170_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_168 = &data_4198c0;
                int64_t var_160_3 = 1;
                int64_t var_148_3 = 0;
                int128_t** var_158_3 = &var_178;
                int64_t var_150_3 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_e8);
            }
            
            r9 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h63a30ee2b5483774(&var_1b0, &var_d0);
            rax = var_1a8;
            
            if (!rax)
                goto label_46b003;
        }
    }
    
    return result;
}
