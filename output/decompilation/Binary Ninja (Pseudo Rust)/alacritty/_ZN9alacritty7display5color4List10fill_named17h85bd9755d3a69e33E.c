
  fn alacritty::display::color::List::fill_named::h85bd9755d3a69e33(arg1: *mut i16, arg2: *mut c_void) -> u16

{
    arg1[1] = *arg2.byte_offset(0x62);
    *arg1 = *arg2.byte_offset(0x60);
    *arg1.byte_offset(5) = *arg2.byte_offset(0x65);
    *arg1.byte_offset(3) = *arg2.byte_offset(0x63);
    arg1[4] = *arg2.byte_offset(0x68);
    arg1[3] = *arg2.byte_offset(0x66);
    *arg1.byte_offset(0xb) = *arg2.byte_offset(0x6b);
    *arg1.byte_offset(9) = *arg2.byte_offset(0x69);
    arg1[7] = *arg2.byte_offset(0x6e);
    arg1[6] = *arg2.byte_offset(0x6c);
    *arg1.byte_offset(0xf) = *arg2.byte_offset(0x6f);
    *arg1.byte_offset(0x11) = *arg2.byte_offset(0x71);
    arg1[9] = *arg2.byte_offset(0x72);
    arg1[0xa] = *arg2.byte_offset(0x74);
    *arg1.byte_offset(0x17) = *arg2.byte_offset(0x77);
    *arg1.byte_offset(0x15) = *arg2.byte_offset(0x75);
    arg1[0xc] = *arg2.byte_offset(0x78);
    arg1[0xd] = *arg2.byte_offset(0x7a);
    *arg1.byte_offset(0x1b) = *arg2.byte_offset(0x7b);
    *arg1.byte_offset(0x1d) = *arg2.byte_offset(0x7d);
    arg1[0x10] = *arg2.byte_offset(0x80);
    arg1[0xf] = *arg2.byte_offset(0x7e);
    *arg1.byte_offset(0x23) = *arg2.byte_offset(0x83);
    *arg1.byte_offset(0x21) = *arg2.byte_offset(0x81);
    arg1[0x12] = *arg2.byte_offset(0x84);
    arg1[0x13] = *arg2.byte_offset(0x86);
    *arg1.byte_offset(0x27) = *arg2.byte_offset(0x87);
    *arg1.byte_offset(0x29) = *arg2.byte_offset(0x89);
    arg1[0x15] = *arg2.byte_offset(0x8a);
    arg1[0x16] = *arg2.byte_offset(0x8c);
    *arg1.byte_offset(0x2f) = *arg2.byte_offset(0x8f);
    let mut rcx: *mut c_void = arg2.byte_offset(0x98);
    
    if (*arg2.byte_offset(0x90) & 1) != 0
    {
        rcx = arg2.byte_offset(0x91);
    }
    
    *arg1.byte_offset(0x2d) = *arg2.byte_offset(0x8d);
    let rax_32: i8 = *rcx.byte_offset(2);
    let var_5e: i8 = rax_32;
    let rcx_1: i16 = *rcx;
    let mut var_60: i16 = rcx_1;
    *arg1.byte_offset(0x323) = rax_32;
    *arg1.byte_offset(0x321) = rcx_1;
    arg1[0x181] = *arg2.byte_offset(0x9a);
    arg1[0x180] = *arg2.byte_offset(0x98);
    *arg1.byte_offset(0x303) = *arg2.byte_offset(0x9b);
    *arg1.byte_offset(0x305) = *arg2.byte_offset(0x9d);
    let rbp_2: u32 = *arg2.byte_offset(0x97) << 0x10 | *arg2.byte_offset(0x95);
    let r15: i8 = *arg2.byte_offset(0x94);
    let mut rax_39: u32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x9a) << 0x10 | *arg2.byte_offset(0x98));
    
    if (r15 & 1) != 0
    {
        rax_39 = rbp_2;
    }
    
    arg1[0x192] = rax_39;
    arg1[0x193] = rax_39 >> 0x10;
    let rbp_3: i8 = *arg2.byte_offset(0x9e);
    let rax_41: i64 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    let mut result: u16;
    let mut var_a0: *const i8;
    
    if rbp_3 != 1
    {
        if rax_41 >= 5
        {
            var_60 = &data_c81fd0;
            let var_58_2: i64 = 1;
            let var_50_2: i64 = 8;
            let var_48_2: i128 = {0};
            let rax_58: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81fe0);
            var_a0 = "alacritty::display::colorhex col…";
            let var_98_2: i64 = 0x19;
            let var_90_2: *const i8 = "alacritty::display::colorhex col…";
            let var_88_2: i64 = 0x19;
            let var_80_2: i64 = rax_58;
            log::__private_api::log::h0b6680b994d742b1(&var_60, 5, &var_a0);
        }
        
        let rax_60: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x62) << 0x10 | *arg2.byte_offset(0x60));
        *arg1.byte_offset(0x309) = rax_60;
        *arg1.byte_offset(0x30b) = rax_60 >> 0x10;
        let rax_63: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x65) << 0x10 | *arg2.byte_offset(0x63));
        arg1[0x186] = rax_63;
        arg1[0x187] = rax_63 >> 0x10;
        let rax_66: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x68) << 0x10 | *arg2.byte_offset(0x66));
        *arg1.byte_offset(0x30f) = rax_66;
        *arg1.byte_offset(0x311) = rax_66 >> 0x10;
        let rax_69: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x6b) << 0x10 | *arg2.byte_offset(0x69));
        arg1[0x189] = rax_69;
        arg1[0x18a] = rax_69 >> 0x10;
        let rax_72: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x6e) << 0x10 | *arg2.byte_offset(0x6c));
        *arg1.byte_offset(0x315) = rax_72;
        *arg1.byte_offset(0x317) = rax_72 >> 0x10;
        let rax_75: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x71) << 0x10 | *arg2.byte_offset(0x6f));
        arg1[0x18c] = rax_75;
        arg1[0x18d] = rax_75 >> 0x10;
        let rax_78: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x74) << 0x10 | *arg2.byte_offset(0x72));
        *arg1.byte_offset(0x31b) = rax_78;
        *arg1.byte_offset(0x31d) = rax_78 >> 0x10;
        let rax_81: i32 = _$LT$alacritty..display..color..Rgb$u20$as$u20$core..ops..arith..Mul$LT$f32$GT$$GT$::mul::h74bf5456cb1dd01b(*arg2.byte_offset(0x77) << 0x10 | *arg2.byte_offset(0x75));
        arg1[0x18f] = rax_81;
        result = rax_81 >> 0x10;
        arg1[0x190] = result;
    }
    else
    {
        if rax_41 > 4
        {
            var_60 = &data_c81fc0;
            let var_58_1: i64 = 1;
            let var_50_1: i64 = 8;
            let var_48_1: i128 = {0};
            let rax_42: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81ff8);
            var_a0 = "alacritty::display::colorhex col…";
            let var_98_1: i64 = 0x19;
            let var_90_1: *const i8 = "alacritty::display::colorhex col…";
            let var_88_1: i64 = 0x19;
            let var_80_1: i64 = rax_42;
            log::__private_api::log::h0b6680b994d742b1(&var_60, 5, &var_a0);
        }
        
        *arg1.byte_offset(0x30b) = *arg2.byte_offset(0xa1);
        *arg1.byte_offset(0x309) = *arg2.byte_offset(0x9f);
        arg1[0x187] = *arg2.byte_offset(0xa4);
        arg1[0x186] = *arg2.byte_offset(0xa2);
        *arg1.byte_offset(0x311) = *arg2.byte_offset(0xa7);
        *arg1.byte_offset(0x30f) = *arg2.byte_offset(0xa5);
        arg1[0x18a] = *arg2.byte_offset(0xaa);
        arg1[0x189] = *arg2.byte_offset(0xa8);
        *arg1.byte_offset(0x317) = *arg2.byte_offset(0xad);
        *arg1.byte_offset(0x315) = *arg2.byte_offset(0xab);
        arg1[0x18c] = *arg2.byte_offset(0xae);
        arg1[0x18d] = *arg2.byte_offset(0xb0);
        *arg1.byte_offset(0x31b) = *arg2.byte_offset(0xb1);
        *arg1.byte_offset(0x31d) = *arg2.byte_offset(0xb3);
        arg1[0x190] = *arg2.byte_offset(0xb6);
        result = *arg2.byte_offset(0xb4);
        arg1[0x18f] = result;
    }
    result
}
