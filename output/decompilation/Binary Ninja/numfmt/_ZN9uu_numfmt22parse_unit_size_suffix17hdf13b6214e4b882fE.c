
  int64_t uu_numfmt::parse_unit_size_suffix::hdf13b6214e4b882f(wchar32* arg1, int64_t arg2)

{
    if (arg2)
    {
        uint64_t rbx_1 = arg1;
        wchar32 const* const var_20 = arg1;
        void* var_18_1 = arg1 + arg2;
        char rax_2;
        int32_t rdx;
        rax_2 = core::str::validations::next_code_point::h5d7df44f8cb1b62e(&var_20, rbx_1);
        
        if (!(rax_2 & 1))
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int32_t var_28 = rdx;
        var_20 = U"KMGTPE";
        wchar32 const* const var_18_2 = &data_41aedc;
        char rax_3;
        int64_t rdx_1;
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h8c3a699082174296(&var_20, &var_28);
        
        if (!(rax_3 & 1))
            return 0;
        
        uint128_t zmm0;
        
        if (arg2 == 2)
        {
            int32_t var_24 = 0;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h8acf7e79f75ef2f1(rbx_1, 2, 
                    core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x69, &var_24), 1))
                return 0;
            
            if (rdx_1 + 1 > 9)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_1 + 1, 0xa);
                /* no return */
            }
            
            zmm0 = *((rdx_1 << 3) + 0x41ab10);
        }
        else
        {
            if (arg2 != 1)
                return 0;
            
            if (rdx_1 + 1 >= 0xa)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_1 + 1, 0xa);
                /* no return */
            }
            
            zmm0 = *((rdx_1 << 3) + 0x41aac0);
        }
        
        uint128_t zmm1;
        zmm1 = zmm0 - 9.2233720368547758e+18;
        _mm_xor_pd(zmm1, zmm1);
    }
    
    return 1;
}
