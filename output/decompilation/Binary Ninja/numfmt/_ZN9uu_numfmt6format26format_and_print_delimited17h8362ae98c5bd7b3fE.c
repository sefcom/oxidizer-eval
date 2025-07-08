
  int64_t* uu_numfmt::format::format_and_print_delimited::h8362ae98c5bd7b3f(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    if (arg4[0xe] == -0x8000000000000000)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    void* var_1b8 = &arg4[0xe];
    int128_t* const var_168;
    _$LT$$RF$alloc..string..String$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h282a0739900a3654(&var_168, &arg4[0xe], arg2, arg3);
    int64_t var_100 = 0;
    int64_t var_f8 = arg3;
    int16_t var_f0 = 1;
    char const (** const var_d0)[0xb];
    core::iter::traits::iterator::Iterator::zip::h4a03188e88e105ee(&var_d0, &var_168);
    int64_t var_1b0;
    int64_t r9 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::he3883890326b5614(&var_1b0, &var_d0);
    void* var_1a8;
    void* rax = var_1a8;
    int64_t* result;
    
    if (!rax)
    {
        label_4c4c2b:
        var_d0 = &data_535ba0;
        int64_t var_c8_1 = 1;
        int64_t var_c0_1 = 8;
        int128_t var_b8_1 = {0};
        std::io::stdio::_print::he918bceb0c89db46(&var_d0);
        result = arg1;
        *result = -0x8000000000000000;
    }
    else
    {
        int64_t r15_1 = arg4[0xc];
        int64_t r12_1 = arg4[0xd];
        
        while (true)
        {
            int64_t r14_1 = var_1b0;
            void* var_1e8 = rax;
            char rax_1 = uucore::features::ranges::contain::ha9677be85801ec1f(r15_1, r12_1, r14_1);
            void** var_198;
            int64_t (* var_190)(int64_t* arg1, int64_t arg2);
            
            if (r14_1 > 1)
            {
                var_198 = &var_1b8;
                var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc19265c681ac20;
                var_168 = &data_416000;
                int64_t var_160_2 = 1;
                int64_t var_148_2 = 0;
                void*** var_158_2 = &var_198;
                int64_t var_150_2 = 1;
                r9 = std::io::stdio::_print::he918bceb0c89db46(&var_168);
            }
            
            if (!rax_1)
            {
                var_198 = &var_1e8;
                var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_168 = &data_416000;
                int64_t var_160_1 = 1;
                int64_t var_148_1 = 0;
                void*** var_158_1 = &var_198;
                int64_t var_150_1 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_168);
            }
            else
            {
                int64_t var_1a0;
                char* rax_2;
                void* rdx_2;
                rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd29dae6a79270574(
                    var_1e8, var_1a0);
                uu_numfmt::format::format_string::h230c6a9d10700455(&var_198, rax_2, rdx_2, arg4, 
                    0, r9);
                int128_t zmm0_2 = var_190;
                int64_t* result_1;
                
                if (var_198)
                {
                    result = result_1;
                    arg1[1] = result;
                    *arg1 = zmm0_2;
                    break;
                }
                
                int64_t* result_2 = result_1;
                int128_t var_e8 = zmm0_2;
                int128_t* var_178 = &var_e8;
                int64_t (* var_170_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_168 = &data_416000;
                int64_t var_160_3 = 1;
                int64_t var_148_3 = 0;
                int128_t** var_158_3 = &var_178;
                int64_t var_150_3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_168);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_e8);
            }
            
            r9 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::he3883890326b5614(&var_1b0, &var_d0);
            rax = var_1a8;
            
            if (!rax)
                goto label_4c4c2b;
        }
    }
    
    return result;
}
