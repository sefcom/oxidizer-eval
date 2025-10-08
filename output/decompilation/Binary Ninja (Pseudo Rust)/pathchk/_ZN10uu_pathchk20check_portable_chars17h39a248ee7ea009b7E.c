
  fn uu_pathchk::check_portable_chars::h39a248ee7ea009b7(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_80: *mut i8 = arg1;
    let var_78: *mut c_void = &arg1[arg2];
    let var_70: i64 = 0;
    let mut result: i64;
    let mut rdx_1: *mut i8;
    
    loop
    {
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9d3bd4ed76b4919(&var_80);
        
        if rdx_1 == 0
        {
            break;
        }
        
        if core::slice::memchr::memchr::hf33a0085a04e009d(*rdx_1) != 1
        {
            let mut rax_2: *mut c_void;
            let mut rdx_3: *mut c_void;
            rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(result, arg1, arg2);
            
            if rax_2 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, result, arg2);
                /* no return */
            }
            
            let mut var_b0: *mut c_void = rax_2;
            let var_a8_1: *mut c_void = rdx_3.byte_offset(rax_2);
            let mut rax_3: i8;
            let mut rdx_5: i32;
            rax_3 = core::str::validations::next_code_point::h57324ef1edfff360(&var_b0, rdx_1);
            
            if (rax_3 & 1) == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let mut var_bc: i32 = rdx_5;
            let mut var_b8: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            let mut var_48: i64 = 0;
            let var_40_1: *mut i8 = arg1;
            let var_38_1: i64 = arg2;
            let var_30_1: i8 = 1;
            let mut var_68: *mut i32 = &var_bc;
            let var_60_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            let var_58_1: *mut i64 = &var_48;
            let var_50_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_b0 = &data_4deb08;
            let var_a8_2: i64 = 3;
            let var_90_1: i64 = 0;
            let var_a0_1: *mut *mut i32 = &var_68;
            let var_98_1: i64 = 2;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
                &var_b8, &var_b0));
            break;
        }
    }
    
    result = rdx_1 == 0;
    result
}
