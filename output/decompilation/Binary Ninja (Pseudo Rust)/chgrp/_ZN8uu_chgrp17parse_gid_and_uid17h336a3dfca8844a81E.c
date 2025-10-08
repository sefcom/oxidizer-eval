
  fn uu_chgrp::parse_gid_and_uid::h336a3dfca8844a81(arg1: *mut i64, arg2: *mut c_void, arg3: u64 @ rbp) -> *mut i64

{
    let var_8: u64 = arg3;
    let mut var_c8: *mut *mut c_void;
    uu_chgrp::get_dest_gid::h4d05a3664157cc82(&var_c8, arg2);
    let var_c0: i64;
    let mut var_b8: u128;
    
    if -(var_c0) != -0x8000000000000000
    {
        let var_58_1: u128 = var_c8;
        let r15_1: i64 = var_b8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3e938edac5a056f4(
            &var_c8, arg2, "fromkindAuto/", 4);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h400a437e510a09d7("fromkindAuto/", 
            4, &var_c8);
        let mut rax_3: i32;
        
        if rax_2 == 0
        {
            rax_3 = 0;
            'label_46001b:
            *arg1 = var_c0;
            *arg1.byte_offset(8) = var_b8;
            arg1[3] = var_58_1;
            arg1[4] = 0;
            arg1[5] = rax_3;
            *arg1.byte_offset(0x2c) = arg3;
        }
        else
        {
            let mut var_98: *mut c_void = rax_2;
            let mut var_90: i64;
            uu_chgrp::parse_gid_from_str::h3091fc49b902fbfc(&var_90, *rax_2.byte_offset(8), 
                *rax_2.byte_offset(0x10));
            let r13_1: i64 = var_90;
            let var_88: i64;
            
            if r13_1 == -0x8000000000000000
            {
                arg3 = var_88;
                core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$alloc..string..String$GT$$GT$::h006ca93ec0283182(-0x8000000000000000, var_88);
                rax_3 = 2;
                goto 'label_46001b;
            }
            
            let mut var_78: *mut *mut c_void = &var_98;
            let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd0a34de72fe2a3f1;
            var_c8 = &data_4f4910;
            let var_c0_1: i64 = 2;
            let var_a8_1: i64 = 0;
            var_b8 = &var_78;
            *var_b8[8] = 1;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h10b49b386562c66c(&var_48, &var_c8);
            *var_b8[8] = 1;
            var_c8 = var_48;
            let var_38: i64;
            var_b8 = var_38;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h80792f8261bee4f9(&var_c8);
            arg1[2] = &data_4f4898;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$alloc..string..String$GT$$GT$::h006ca93ec0283182(r13_1, var_88);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(var_c0, r15_1);
        }
    }
    else
    {
        *arg1.byte_offset(8) = var_b8;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
