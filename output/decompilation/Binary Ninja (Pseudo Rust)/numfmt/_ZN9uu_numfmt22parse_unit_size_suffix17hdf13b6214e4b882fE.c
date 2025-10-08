
  fn uu_numfmt::parse_unit_size_suffix::hdf13b6214e4b882f(arg1: *mut char, arg2: i64) -> i64

{
    if arg2 != 0
    {
        let rbx_1: u64 = arg1;
        let mut var_20: *const char = arg1;
        let var_18_1: *mut c_void = arg1.byte_offset(arg2);
        let mut rax_2: i8;
        let mut rdx: i32;
        rax_2 = core::str::validations::next_code_point::h5d7df44f8cb1b62e(&var_20, rbx_1);
        
        if (rax_2 & 1) == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut var_28: i32 = rdx;
        var_20 = U"KMGTPE";
        let var_18_2: *const char = &data_41aedc;
        let mut rax_3: i8;
        let mut rdx_1: i64;
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h8c3a699082174296(&var_20, &var_28);
        
        if (rax_3 & 1) == 0
        {
            return 0;
        }
        
        let mut zmm0: u128;
        
        if arg2 == 2
        {
            let mut var_24: i32 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h8acf7e79f75ef2f1(rbx_1, 2, 
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x69, &var_24), 1) == 0
            {
                return 0;
            }
            
            if rdx_1 + 1 > 9
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_1 + 1, 0xa);
                /* no return */
            }
            
            zmm0 = *((rdx_1 << 3) + 0x41ab10);
        }
        else
        {
            if arg2 != 1
            {
                return 0;
            }
            
            if rdx_1 + 1 >= 0xa
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_1 + 1, 0xa);
                /* no return */
            }
            
            zmm0 = *((rdx_1 << 3) + 0x41aac0);
        }
        
        let mut zmm1: u128;
        zmm1 = zmm0 - 9.2233720368547758e+18;
        _mm_xor_pd(zmm1, zmm1);
    }
    
    1
}
