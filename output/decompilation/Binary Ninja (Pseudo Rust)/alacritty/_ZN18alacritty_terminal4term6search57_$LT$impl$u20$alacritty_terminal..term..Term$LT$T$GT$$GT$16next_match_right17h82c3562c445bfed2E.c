
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::next_match_right::h82c3562c445bfed2(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i32, arg6: i8, arg7: i8, arg8: i32) -> i64

{
    let mut var_138: i64 = arg4;
    let mut var_130: i32 = arg5;
    let mut var_141: i8 = arg6;
    let rax: i32 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg2, arg5);
    let var_108: i64 = 0;
    let mut var_100: i32 = rax;
    let mut rax_2: i32;
    let mut rcx_1: i64;
    
    if (arg7 & 1) == 0
    {
        let mut rax_3: i64;
        let mut rdx_2: i32;
        rax_3 = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(0, rax, arg2, 2);
        rcx_1 = rax_3;
        rax_2 = rdx_2;
    }
    else
    {
        rax_2 = alacritty_terminal::index::Line::grid_clamp::h7a533a4686eb6d93(rax + arg8, 
            *arg2.byte_offset(0x50), *arg2.byte_offset(0xc0), 2);
        rcx_1 = *arg2.byte_offset(0xb8) - 1;
    }
    
    let mut var_60: i64 = 0;
    let var_58: i32 = rax;
    let var_50: i64 = rcx_1;
    let var_48: i32 = rax_2;
    let var_40: i64 = arg3;
    let var_38: *mut c_void = arg2;
    let var_30: i16 = 1;
    let var_68: i8 = 3;
    let mut var_88: ();
    let mut result: i32 =
        core::option::Option$LT$T$GT$::get_or_insert_with::he1b39de9d157c638(&var_88, &var_60);
    
    if var_68 != 2
    {
        let mut var_d8: i128;
        _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e74ac01ef9f7a4d(&var_d8, &var_88);
        let mut var_f8: *mut i8 = &var_141;
        let var_f0_1: *mut i32 = &var_100;
        let var_e8_1: *mut i32 = &var_130;
        let var_e0_1: *mut i64 = &var_138;
        let mut var_b0: i128;
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hce3baf6709a6d3ca(&var_b0, &var_88, &var_f8);
        let var_90: i8;
        let mut rax_4: i8 = var_90;
        let mut var_128_1: i128;
        let mut var_118_1: i128;
        let mut result_1: i32;
        let mut result_4: i32;
        
        if rax_4 != 2
        {
            let var_a0: i128;
            var_118_1 = var_a0;
            var_128_1 = var_b0;
            let result_3: i32;
            result_4 = result_3;
            result_1 = result_3;
        }
        else
        {
            var_128_1 = var_d8;
            let var_c8: i128;
            var_118_1 = var_c8;
            let var_b8: i8;
            rax_4 = var_b8;
            let result_2: i32;
            result_4 = result_2;
            result_1 = result_2;
        }
        arg1[1] = var_118_1;
        *arg1 = var_128_1;
        arg1[2] = rax_4;
        result = result_1;
        *arg1.byte_offset(0x21) = result;
        *arg1.byte_offset(0x24) = result_1;
    }
    else
    {
        arg1[2] = 2;
    }
    
    result
}
