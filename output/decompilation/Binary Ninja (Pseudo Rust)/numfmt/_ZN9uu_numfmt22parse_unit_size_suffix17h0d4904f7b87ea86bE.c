
  fn uu_numfmt::parse_unit_size_suffix::h0d4904f7b87ea86b(arg1: *mut i8, arg2: i64) -> i64

{
    if arg2 == 0
    {
        return 1;
    }
    
    let rbx_1: u64 = arg1;
    let mut var_20: *const i8 = arg1;
    let var_18_1: *mut c_void = &arg1[arg2];
    let mut rax_1: i32;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::hea6d5bf7d5f3451a(&var_20, rbx_1);
    
    if rax_1 == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_28: i32 = rdx;
    var_20 = "K";
    let var_18_2: *const char = &data_422468;
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::ha514c49988fbe620(&var_20, &var_28);
    
    if rax_2 == 1
    {
        let mut rax_5: *mut c_void;
        
        if arg2 == 1
        {
            if rdx_1 + 1 >= 0xa
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1 + 1, 0xa);
                /* no return */
            }
            
            rax_5 = &data_422468[(rdx_1 + 1) * 2];
            'label_4c03df:
            let mut zmm1: u128;
            zmm1 = *rax_5 - 9.2233720368547758e+18;
            _mm_xor_pd(zmm1, zmm1);
            return 1;
        }
        
        if arg2 == 2
        {
            let mut var_24: i32 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha109e61deb96259b(rbx_1, 2, 
                core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_24), 1) != 0
            {
                if rdx_1 + 1 <= 9
                {
                    rax_5 = (&data_4224b8).byte_offset((rdx_1 + 1) << 3);
                    goto 'label_4c03df;
                }
                
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1 + 1, 0xa);
                /* no return */
            }
        }
    }
    
    0
}
