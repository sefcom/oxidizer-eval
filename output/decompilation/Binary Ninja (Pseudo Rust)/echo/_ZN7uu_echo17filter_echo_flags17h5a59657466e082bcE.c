
  fn uu_echo::filter_echo_flags::h5a59657466e082bc(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_e8: i64 = 0;
    let var_e0: i64 = 8;
    let var_d8: i64 = 0;
    let mut result_1: i16 = 1;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    let mut var_78: i128 = *arg2;
    let mut var_c8: i128;
    
    loop
    {
        let mut var_90: i64;
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfb50bb4acd145f37(&var_90, &var_78);
        
        if var_90 == -0x8000000000000000
        {
            break;
        }
        
        let mut var_108: i128 = var_90;
        
        if uu_echo::is_echo_flag::h50b86463f524c5ed(&var_108, &result_1) == 0
        {
            let mut var_b8: i128;
            let var_80: i64;
            var_b8 = var_80;
            var_c8 = var_108;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h9dad9423e5c6bf86(&var_e8, &var_c8);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h209e065877f44192(var_108, 
            *var_108[8]);
    }
    
    let var_a8: i128 = zmm2;
    let var_b8_1: i128 = zmm1;
    var_c8 = var_78;
    
    loop
    {
        let mut var_48: i64;
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfb50bb4acd145f37(&var_48, &var_c8);
        
        if var_48 == -0x8000000000000000
        {
            break;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h9dad9423e5c6bf86(&var_e8, &var_48);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$core..iter..adapters..skip..Skip$LT$core..iter..adapters..cloned..Cloned$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$$GT$$GT$::h0cbdb65c0fbd85df(var_c8, *var_c8[8]);
    arg1[1] = var_d8;
    *arg1 = var_e8;
    let result: i16 = result_1;
    *arg1.byte_offset(0x18) = result;
    result
}
