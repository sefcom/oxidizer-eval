
  fn uu_tail::args::parse_obsolete::hfe2542368a23c75b(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut i64

{
    let mut var_90: i8;
    uu_tail::parse::parse_obsolete::h38d0198c01039e5a(&var_90, arg2);
    let var_86: i8;
    let rax: u32 = var_86;
    
    if rax == 2
    {
        let r12_1: u64 = var_90;
        let mut var_a8: ();
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_a8, 
            *arg2.byte_offset(8), *arg2.byte_offset(0x10));
        let mut var_118: *mut *mut [i8; 0x52];
        let mut var_100_1: i64;
        let mut var_e0: *mut i64;
        let mut var_c8: *mut c_void;
        let mut var_c0: i128;
        let var_a0: i128;
        let mut r14_1: *mut c_void;
        
        match r12_1
        {
            0 =>
            {
                var_c8 = nullptr;
                let var_c0_1: i128 = var_a0;
                let var_b0_1: i8 = 1;
                var_e0 = &var_c8;
                let var_d8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_118 = &data_5bb630;
                let var_110_1: i64 = 2;
                let var_f8_1: i64 = 0;
                let var_108_1: *mut *mut i64 = &var_e0;
                var_100_1 = 1;
                let mut var_80: ();
                r14_1 = &var_80;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_80, &var_118);
            }
            1 =>
            {
                var_c8 = nullptr;
                let var_c0_2: i128 = var_a0;
                let var_b0_2: i8 = 1;
                var_e0 = &var_c8;
                let var_d8_3: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_118 = &data_5bb650;
                let var_110_4: i64 = 1;
                let var_f8_4: i64 = 0;
                let var_108_4: *mut *mut i64 = &var_e0;
                var_100_1 = 1;
                let mut var_68: ();
                r14_1 = &var_68;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_68, &var_118);
            }
            2 =>
            {
                let rax_1: *mut c_void = var_a0;
                var_c8 = rax_1;
                var_c0 = *var_a0[8].byte_offset(rax_1);
                let rax_2: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_c8);
                let mut rax_6: i32;
                let mut rdx_2: i32;
                
                if rax_2 == 0
                {
                    rax_6 =
                        core::str::validations::next_code_point::habe44cbb115926fa(&var_c8, arg1);
                }
                
                if rax_2 != 0 || rax_6 == 0 || rdx_2 == 0x110000
                {
                    rdx_2 = 0;
                }
                
                let mut var_cc: i32 = rdx_2;
                var_e0 = &var_cc;
                let var_d8_2: fn(arg1: *mut i32, arg2: *mut i64) -> *mut c_void =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                var_118 = &data_5bb660;
                let var_110_2: i64 = 1;
                let var_f8_2: i64 = 0;
                let var_108_2: *mut *mut i64 = &var_e0;
                var_100_1 = 1;
                let mut var_50: ();
                r14_1 = &var_50;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_50, &var_118);
            }
            3 =>
            {
                var_c8 = &var_a8;
                var_c0 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3266cc735e754328;
                var_118 = &data_5bb670;
                let var_110_3: i64 = 2;
                let var_f8_3: i64 = 0;
                let var_108_3: *mut *mut c_void = &var_c8;
                var_100_1 = 1;
                let mut var_38: ();
                r14_1 = &var_38;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_38, &var_118);
            }
        }
        
        let var_108_5: i64 = *r14_1.byte_offset(0x10);
        var_118 = *r14_1;
        var_100_1 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_118);
        arg1[2] = &data_5bb3c8;
        *arg1 = 6;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h890545819f3c5be0(&var_a8);
    }
    else if rax != 3
    {
        uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(arg1, &var_90, arg3);
    }
    else
    {
        *arg1 = 5;
    }
    
    arg1
}
