
  fn uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(arg1: *mut i128, arg2: i8) -> *mut i128

{
    let mut var_d9: i8 = arg2;
    let mut var_60: ();
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7bd6b561c7dd34ea(&var_60, &var_d9);
    let mut var_c0: *mut *mut [i8; 0x98];
    let var_50: i64;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h82af769b21b92444(&var_c0, var_50, 0);
    let var_b8: i64;
    
    if var_c0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_b8);
        /* no return */
    }
    
    let mut var_d8: i64 = var_b8;
    let var_b0: i64;
    let var_d0: i64 = var_b0;
    let var_c8: i64 = 0;
    let var_58: i64;
    let mut var_48: i64 = var_58;
    let var_40: i64 = var_50 + var_58;
    let var_38: i64 = 0;
    let mut rax_2: i64;
    let mut i: i32;
    rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
    let mut var_88: *mut i64;
    
    if i != 0x110000
    {
        do
        {
            if rax_2 != 0
            {
                alloc::string::String::push::h859ae11851fd8b8e(&var_d8, i);
            }
            else
            {
                core::unicode::unicode_data::conversions::to_upper::h75a19f004959258f(&var_88, i);
                core::char::CaseMappingIter::new::h3810fcac66648f70(&var_c0, &var_88);
                let var_78_1: i128 = var_b0;
                var_88 = var_c0;
                
                loop
                {
                    let rax_4: i32 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc58afee2023a2b2b(&var_88);
                    
                    if rax_4 == 0x110000
                    {
                        break;
                    }
                    
                    alloc::string::String::push::h859ae11851fd8b8e(&var_d8, rax_4);
                }
                
                core::ptr::drop_in_place$LT$core..char..ToUppercase$GT$::h43adcbb5a5b65b60();
            }
            
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
        } while i != 0x110000;
    }
    
    var_88 = &var_d8;
    let var_80: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_c0 = &data_549910;
    let var_b8_1: i64 = 1;
    let var_a0: i64 = 0;
    let var_b0_1: *mut *mut i64 = &var_88;
    let var_a8: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(arg1, &var_c0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb8d56522d3c47933(&var_d8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb8d56522d3c47933(&var_60);
    arg1
}
