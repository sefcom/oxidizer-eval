
  fn uu_join::State::next_line::hdcd6fa155f18f200(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i8) -> u64

{
    let mut result_5: *mut i64;
    uu_join::State::read_line::hae4618c32b71c268(&result_5, arg2, &arg3[2]);
    let result_4: *mut i64 = result_5;
    let result_1: u64;
    let mut result: u64 = result_1;
    
    if result_4 == -0x7fffffffffffffff
    {
        arg1[1] = -0x8000000000000000;
        arg1[2] = result;
        *arg1 = -0x7fffffffffffffff;
    }
    else if result_4 != -0x8000000000000000
    {
        let mut result_2: *mut i64 = result_4;
        let result_3: u64 = result;
        let mut var_138: i128;
        let var_108_1: i128 = var_138;
        let mut var_148: i128;
        let var_118_1: i128 = var_148;
        let rax: i8 = arg3[1];
        
        if rax != 1
        {
            let mut rax_1: i64;
            let mut rdx_1: u64;
            rax_1 = uu_join::State::get_current_key::h6b22667ac5a703a7(arg2);
            let mut rax_2: i64;
            let mut rdx_2: u64;
            rax_2 = uu_join::Line::get_field::h7dd14bed39768627(&result_2, *arg2.byte_offset(0x40));
            result = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(*arg3, rax_1, rdx_1, 
                rax_2, rdx_2);
            let mut zmm0_2: i128;
            
            if result == 1
            {
                if rax == 2
                {
                    'label_4746e3:
                    zmm0_2 = *arg2.byte_offset(0x18);
                    let mut var_a0: i64 = 0;
                    let mut var_98_1: i128 = zmm0_2;
                    let var_88_1: i8 = 0;
                    let mut var_48: ();
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_48, var_108_1, 
                        *var_108_1[8]);
                    result_5 = &var_a0;
                    let var_150: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_148 = arg2.byte_offset(0x50);
                    *var_148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_138 = &var_48;
                    *var_138[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd10f93617439d897;
                    let mut var_d0: *mut c_void = &data_532728;
                    let var_c8_1: i64 = 3;
                    let var_b0_1: i64 = 0;
                    let var_c0_1: *mut *mut i64 = &result_5;
                    let var_b8_1: i64 = 3;
                    let mut var_80: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h8935355a4f11714a(&var_80, &var_d0);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h047006ab4df47656(&var_48);
                    let mut var_f8: i128 = var_80;
                    
                    if rax == 2
                    {
                        let var_70: i64;
                        arg1[3] = var_70;
                        *arg1.byte_offset(8) = var_f8;
                        *arg1 = -0x7fffffffffffffff;
                        return core::ptr::drop_in_place$LT$uu_join..Line$GT$::h9f6fb57b6249ddac(
                            &result_2);
                    }
                    
                    let mut rax_6: i64;
                    let mut rdx_5: i64;
                    rax_6 = uucore::execution_phrase::h7a36a698673d06ab();
                    var_a0 = rax_6;
                    var_98_1 = rdx_5;
                    var_d0 = &var_a0;
                    let var_c8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
                    let var_c0_2: *mut i128 = &var_f8;
                    let var_b8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    result_5 = &data_532758;
                    let var_150_1: i64 = 3;
                    var_138 = 0;
                    var_148 = &var_d0;
                    *var_148[8] = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&result_5);
                    *arg2.byte_offset(0x5a) = 1;
                    result =
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf159c9483d4ed405(
                        &var_f8);
                }
                else if *arg2.byte_offset(0x5b) != 0 && *arg2.byte_offset(0x5a) == 0
                {
                    goto 'label_4746e3;
                }
            }
            
            zmm0_2 = result_2;
            *arg1.byte_offset(0x20) = var_108_1;
            *arg1.byte_offset(0x10) = var_118_1;
            *arg1 = zmm0_2;
        }
        else
        {
            result = result_2;
            *arg1.byte_offset(0x20) = var_108_1;
            *arg1.byte_offset(0x10) = var_118_1;
            *arg1 = result;
            arg1[1] = result_3;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    result
}
