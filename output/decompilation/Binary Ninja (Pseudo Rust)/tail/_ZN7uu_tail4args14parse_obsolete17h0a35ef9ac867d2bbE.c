
  fn uu_tail::args::parse_obsolete::h0a35ef9ac867d2bb(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut i64

{
    let r15: i64 = *arg2.byte_offset(8);
    let r12: u64 = *arg2.byte_offset(0x10);
    let mut var_38: i8;
    uu_tail::parse::parse_obsolete::h9e4918f448acbdfb(&var_38);
    let var_2e: i8;
    let rax: u32 = var_2e;
    
    if rax == 2
    {
        let r13_1: u64 = var_38;
        let mut var_50: ();
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, r15, r12);
        let mut var_e8: *mut *mut [i8; 0x10];
        let mut var_d0_1: i64;
        let mut var_b8: *mut i64;
        let mut var_a8: *mut c_void;
        let var_98: i64;
        let mut var_88: i64;
        let var_80: i128;
        let mut var_68_1: i128;
        let var_48: i128;
        let mut rax_4: i64;
        
        match r13_1
        {
            0 =>
            {
                var_88 = 0;
                let var_80_1: i128 = var_48;
                let var_70_1: i8 = 1;
                var_b8 = &var_88;
                let var_b0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_e8 = &data_573108;
                let var_e0_1: i64 = 2;
                let var_c8_1: i64 = 0;
                let var_d8_1: *mut *mut i64 = &var_b8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_a8, &var_e8);
                var_68_1 = var_a8;
                rax_4 = var_98;
            }
            1 =>
            {
                var_88 = 0;
                let var_80_2: i128 = var_48;
                let var_70_2: i8 = 1;
                var_b8 = &var_88;
                let var_b0_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_e8 = &data_573128;
                let var_e0_4: i64 = 1;
                let var_c8_4: i64 = 0;
                let var_d8_4: *mut *mut i64 = &var_b8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_a8, &var_e8);
                var_68_1 = var_a8;
                rax_4 = var_98;
            }
            2 =>
            {
                let rax_1: *mut c_void = var_48;
                var_a8 = rax_1;
                let var_a0_1: *mut c_void = *var_48[8].byte_offset(rax_1);
                let rax_2: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_a8);
                let mut rax_3: i8;
                let mut rdx_3: i32;
                
                if rax_2 == 0
                {
                    rax_3 =
                        core::str::validations::next_code_point::h4e3882b40d59c120(&var_a8, arg1);
                }
                
                if rax_2 != 0 || (rdx_3 != 0x110000 & rax_3) == 0
                {
                    rdx_3 = 0;
                }
                
                let mut var_8c: i32 = rdx_3;
                var_b8 = &var_8c;
                let var_b0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_e8 = &data_573138;
                let var_e0_2: i64 = 1;
                let var_c8_2: i64 = 0;
                let var_d8_2: *mut *mut i64 = &var_b8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_88, &var_e8);
                var_68_1 = var_88;
                rax_4 = *var_80[8];
            }
            3 =>
            {
                var_a8 = &var_50;
                let var_a0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h0a315621bb4b991c;
                var_e8 = &data_573148;
                let var_e0_3: i64 = 2;
                let var_c8_3: i64 = 0;
                let var_d8_3: *mut *mut c_void = &var_a8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_88, &var_e8);
                var_68_1 = var_88;
                rax_4 = *var_80[8];
            }
        }
        
        var_d0_1 = 1;
        var_e8 = var_68_1;
        let var_d8_5: i64 = rax_4;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_e8);
        arg1[2] = &data_572f18;
        *arg1 = 6;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha58dd5728a52fcee(&var_50);
    }
    else if rax != 3
    {
        uu_tail::args::Settings::from_obsolete_args::hfeff493f00111f18(arg1, &var_38, arg3);
    }
    else
    {
        *arg1 = 5;
    }
    
    arg1
}
