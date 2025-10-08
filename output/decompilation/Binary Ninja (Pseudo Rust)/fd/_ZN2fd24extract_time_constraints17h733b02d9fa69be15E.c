
  fn fd::extract_time_constraints::h733b02d9fa69be15(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_d0: i64 = 0;
    let var_c8: i64 = 8;
    let result: i64 = 0;
    
    if 0 + -(*arg2.byte_offset(0x118))
    {
        goto 'label_5fbd1c;
    }
    
    let mut var_d8: *mut c_void = arg2.byte_offset(0x118);
    let mut var_78: i32;
    let rdx_2: u64 = fd::filter::time::TimeFilter::after::h806e9649c0de5a90(&var_78, 
        *arg2.byte_offset(0x120), *arg2.byte_offset(0x128));
    let mut var_b8: *mut *mut c_void;
    let mut var_a8: *mut *mut c_void;
    
    if var_78 == 2
    {
        var_b8 = &var_d8;
        let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7524885660455a;
        var_a8 = &data_802900;
        let var_a0_1: i64 = 2;
        let var_88_1: i64 = 0;
        let var_98_1: *mut *mut *mut c_void = &var_b8;
        let var_90_1: i64 = 1;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_48, 0, rdx_2, &var_a8);
        arg1[1] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_48);
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..filter..time..TimeFilter$GT$$GT$::h01aa39202dfda311(0, 8);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h06bfc1afd985d20a(&var_d0, &var_78);
    'label_5fbd1c:
    
    if *arg2.byte_offset(0x130) != -0x8000000000000000
    {
        var_d8 = arg2.byte_offset(0x130);
        let mut var_60: i32;
        let rdx_5: u64 = fd::filter::time::TimeFilter::before::h5ae92f0af3d8d241(&var_60, 
            *arg2.byte_offset(0x138), *arg2.byte_offset(0x140));
        
        if var_60 == 2
        {
            var_b8 = &var_d8;
            let var_b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7524885660455a;
            var_a8 = &data_802900;
            let var_a0_2: i64 = 2;
            let var_88_2: i64 = 0;
            let var_98_2: *mut *mut *mut c_void = &var_b8;
            let var_90_2: i64 = 1;
            let mut var_30: ();
            core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_30, 0, rdx_5, 
                &var_a8);
            arg1[1] =
                anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_30);
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..filter..time..TimeFilter$GT$$GT$::h01aa39202dfda311(var_d0, var_c8);
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h06bfc1afd985d20a(&var_d0, &var_60);
    }
    
    arg1[2] = result;
    *arg1 = var_d0;
    result
}
