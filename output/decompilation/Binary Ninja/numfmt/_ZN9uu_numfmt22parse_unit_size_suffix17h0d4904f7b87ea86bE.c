
  int64_t uu_numfmt::parse_unit_size_suffix::h0d4904f7b87ea86b(char* arg1, int64_t arg2)

{
    if (!arg2)
        return 1;
    
    uint64_t rbx_1 = arg1;
    char const* const var_20 = arg1;
    void* var_18_1 = &arg1[arg2];
    int32_t rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::hea6d5bf7d5f3451a(&var_20, rbx_1);
    
    if (!rax_1)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int32_t var_28 = rdx;
    var_20 = "K";
    wchar32 const* const var_18_2 = &data_422468;
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::ha514c49988fbe620(&var_20, &var_28);
    
    if (rax_2 == 1)
    {
        void* rax_5;
        
        if (arg2 == 1)
        {
            if (rdx_1 + 1 >= 0xa)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1 + 1, 0xa);
                /* no return */
            }
            
            rax_5 = &data_422468[(rdx_1 + 1) * 2];
            label_4c03df:
            uint128_t zmm1;
            zmm1 = *rax_5 - 9.2233720368547758e+18;
            _mm_xor_pd(zmm1, zmm1);
            return 1;
        }
        
        if (arg2 == 2)
        {
            int32_t var_24 = 0;
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha109e61deb96259b(rbx_1, 2, 
                core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_24), 1))
            {
                if (rdx_1 + 1 <= 9)
                {
                    rax_5 = &data_4224b8 + ((rdx_1 + 1) << 3);
                    goto label_4c03df;
                }
                
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1 + 1, 0xa);
                /* no return */
            }
        }
    }
    
    return 0;
}
