
  fn uu_ls::display_item_long::hcd44f8af7a6e6b10(arg1: *mut c_void, arg2: *mut c_void, arg3: u64, arg4: *mut i64, arg5: *mut i64, arg6: i8) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hf473535ce603429c(0x80, 1, 1);
    let mut var_e8: i64 = rax;
    let var_d8: u64 = 0;
    let mut var_c8: i64;
    let mut var_c0: u64;
    let var_b8: i64;
    
    if *arg4.byte_offset(0x85) != 2
    {
        uu_ls::colors::StyleManager::apply_normal::h69c01341e2d260d1(&var_c8, &arg4[0xd]);
        let rsi_1: u64 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_1, var_b8 + rsi_1);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
    }
    
    let rax_1: i8 = *(arg3 + 0xf6);
    
    if rax_1 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, "  src/uu/ls/src/dired.rs//DIRED-…", "src/uu/ls/src/dired.rs//DIRED-OP…");
    }
    
    let rax_2: *mut c_void = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg1, arg4);
    let mut rdi_72: i64;
    let mut r15_1: i64;
    let mut var_98: i64;
    
    if rax_2 == 0
    {
        let rax_12: i32 = *arg1.byte_offset(0xf8);
        let mut rsi_18: *const i8 = &data_4d4206[0x11];
        
        if rax_12 != 2 && (rax_12 & 1) != 0
        {
            let rax_15: i32 = ((0xf000 & *arg1.byte_offset(0xfc)) - 0x2000).rotate_left(0x13);
            
            if rax_15 <= 4
            {
                rsi_18 = *(&data_4d44c0).byte_offset(rax_15 << 2) + &data_4d44c0;
            }
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_18, &rsi_18[1]);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, "?????????bd-???_-.:~/\x1b]8;;fil…", &data_4d4206[0xf]);
        
        if *arg1.byte_offset(0x40) >= 2
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, ".//home/34r7hm4n/.rustup/toolcha…", "//home/34r7hm4n/.rustup/toolchai…");
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *arg2.byte_offset(8));
        
        if *(arg3 + 0xea) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *arg2.byte_offset(0x10));
        }
        
        if *(arg3 + 0xe9) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *arg2.byte_offset(0x18));
        }
        
        if *(arg3 + 0xf3) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *arg1.byte_offset(0x38), *arg1.byte_offset(0x40), *arg2.byte_offset(0x20));
        }
        
        if *(arg3 + 0xe8) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *arg2.byte_offset(0x10));
        }
        
        var_98 = 0;
        let var_90: i64 = 1;
        let var_88: i64 = 0;
        let mut rax_19: u64;
        let mut r8: i64;
        rax_19 = alloc::boxed::Box$LT$T$GT$::new::h4d3ebcf2dcfb6a31(&var_e8);
        var_c8 = 0;
        var_c0 = rax_19;
        let var_b8_1: *mut c_void = &data_686d08;
        let mut var_78: i64;
        uu_ls::display_item_name::h23801d128c21da3c(&var_78, arg1, arg3, 0, r8, &var_98, arg4, 
            &var_c8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *arg2.byte_offset(0x28));
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, 0xc);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        let mut r12_2: u64;
        let var_70: i64;
        let var_68: u64;
        
        if rax_1 == 0
        {
            r15_1 = var_70;
            r12_2 = var_68;
        }
        else
        {
            r15_1 = var_70;
            r12_2 = var_68;
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_c8, r15_1, r12_2);
            uu_ls::dired::calculate_and_update_positions::h95a9ea6d492d96cc(arg5, var_d8, 
                core::str::_$LT$impl$u20$str$GT$::trim_matches::h180c41ce689d4cde(var_c0, 
                    var_b8_1));
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(
                &var_c8);
        }
        uu_ls::write_os_str::h18794456fbab1bc6(&var_e8, r15_1, r12_2);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0ee67096214dca41(
            &var_c8, arg3 + 0x102);
        let rsi_34: u64 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_34, var_b8_1.byte_offset(rsi_34));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        rdi_72 = var_78;
    }
    else
    {
        *arg1.byte_offset(0x10);
        xattr::list::h98bb10efc77fe3e7(&var_c8, *arg1.byte_offset(8));
        let rax_4: i8 = core::result::Result$LT$T$C$E$GT$::is_ok_and::h84dfcb59db6f5993(&var_c8);
        uucore::features::fs::display_permissions::hc8fe13fd96ae0343(&var_c8, rax_2, 1);
        let rsi_5: u64 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_5, var_b8 + rsi_5);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        let rax_6: i64 = *arg1.byte_offset(0x40);
        
        if (rax_6 >= 2 | rax_4) != 0
        {
            let mut rdx_6: *const i8 = "?????????bd-???_-.:~/\x1b]8;;fil…";
            
            if rax_6 >= 2
            {
                rdx_6 = "//home/34r7hm4n/.rustup/toolchai…";
            }
            
            let mut rsi_6: *const i8 = "+?????????bd-???_-.:~/\x1b]8;;fi…";
            
            if rax_6 >= 2
            {
                rsi_6 = ".//home/34r7hm4n/.rustup/toolcha…";
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_6, rdx_6);
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        uu_ls::display_symlink_count::h2fe71a64427ba274(&var_c8, *rax_2.byte_offset(0x30));
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, var_c0, var_b8, *arg2.byte_offset(8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        
        if *(arg3 + 0xea) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            let rax_7: *mut c_void = uu_ls::display_uname::h7c414fef392325b1(
                *rax_2.byte_offset(0x3c), *(arg3 + 0xeb), arg4);
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *rax_7.byte_offset(8), *rax_7.byte_offset(0x10), *arg2.byte_offset(0x10));
        }
        
        if *(arg3 + 0xe9) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            let rax_8: *mut c_void = uu_ls::display_group::h274df09bb9587751(
                *rax_2.byte_offset(0x40), *(arg3 + 0xeb), arg4);
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *rax_8.byte_offset(8), *rax_8.byte_offset(0x10), *arg2.byte_offset(0x18));
        }
        
        if *(arg3 + 0xf3) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *arg1.byte_offset(0x38), *arg1.byte_offset(0x40), *arg2.byte_offset(0x20));
        }
        
        if *(arg3 + 0xe8) != 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            let rax_10: *mut c_void = uu_ls::display_uname::h7c414fef392325b1(
                *rax_2.byte_offset(0x3c), *(arg3 + 0xeb), arg4);
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *rax_10.byte_offset(8), *rax_10.byte_offset(0x10), *arg2.byte_offset(0x10));
        }
        
        uu_ls::display_len_or_rdev::h54f0966b5b04a08a(&var_c8, rax_2, *(arg3 + 0xd0), 
            *(arg3 + 0xf9));
        let mut rdi_29: *mut i64;
        let mut var_b0: i64;
        
        if !(0 + -(var_c8))
        {
            let rbp_3: u64 = var_c0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            let rax_23: i64 = *arg2.byte_offset(0x28);
            let r13_2: i64 = *arg2.byte_offset(0x38);
            let mut rdx_22: i64 = -1;
            
            if r13_2 < -2
            {
                rdx_22 = r13_2 + 2;
            }
            
            let mut rsi_25: i64 = 0;
            
            if rax_23 >= rdx_22
            {
                rsi_25 = rax_23 - rdx_22;
            }
            
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, rbp_3, var_b8, 
                core::cmp::Ord::max::h3082798d7e57ba36(*arg2.byte_offset(0x30), rsi_25));
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, ", ", &data_4d1ec7[2]);
            let var_a8: i64;
            let var_a0: i64;
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, var_a8, var_a0, r13_2);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_b0);
            rdi_29 = &var_c8;
        }
        else
        {
            let rbp_1: i64 = var_b0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, var_b8, rbp_1, *arg2.byte_offset(0x28));
            rdi_29 = &var_c0;
        }
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(rdi_29);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        uu_ls::display_date::h897c60a9acee5f16(&var_c8, rax_2, *(arg3 + 0xfb), arg4);
        let rsi_29: u64 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_29, var_b8 + rsi_29);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        var_98 = 0;
        let var_90_1: i64 = 1;
        let var_88_1: i64 = 0;
        let mut rax_26: u64;
        let mut r8_1: i64;
        rax_26 = alloc::boxed::Box$LT$T$GT$::new::h4d3ebcf2dcfb6a31(&var_e8);
        var_c8 = 0;
        var_c0 = rax_26;
        let var_b8_2: *mut c_void = &data_686ce8;
        let mut var_48: i64;
        uu_ls::display_item_name::h23801d128c21da3c(&var_48, arg1, arg3, 0, r8_1, &var_98, arg4, 
            &var_c8);
        let var_40: i64;
        r15_1 = var_40;
        let var_38: *mut c_void;
        let mut r13_3: *mut c_void = var_38;
        let mut rax_27: i8;
        
        if arg6 != 0
        {
            rax_27 = uu_ls::os_str_starts_with::hfc6f2914b2c0a945(r15_1, r13_3, 
                "'"+?????????bd-???_-.:~/\x1b]8;;…");
        }
        
        let mut r12_4: i64;
        
        if arg6 != 0 && rax_27 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_c8, " \t/home/34r7hm4n/.cargo/registr…", 1);
            var_98 = var_c8;
            std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_98, &var_48);
            r12_4 = var_98;
            r15_1 = var_90_1;
            r13_3 = var_b8_2;
            
            if rax_1 != 0
            {
                goto 'label_59dd30;
            }
        }
        else
        {
            r12_4 = var_48;
            
            if rax_1 != 0
            {
                'label_59dd30:
                let rcx_21: i64 = arg5[2];
                let mut rsi_37: i64;
                
                if rcx_21 == 0
                {
                    rsi_37 = 0;
                }
                else
                {
                    rsi_37 = *(arg5[1] + (rcx_21 << 4) - 8) + 1;
                }
                
                let rsi_38: *mut c_void = rsi_37 + var_d8;
                uu_ls::dired::update_positions::hea3b08d96622b01c(arg5, rsi_38, 
                    rsi_38.byte_offset(r13_3));
            }
        }
        
        uu_ls::write_os_str::h18794456fbab1bc6(&var_e8, r15_1, r13_3);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0ee67096214dca41(
            &var_c8, arg3 + 0x102);
        let rsi_41: u64 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_41, var_b8_2.byte_offset(rsi_41));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        rdi_72 = r12_4;
    }
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_72, r15_1);
    let r15_2: i64 = arg4[2];
    let mut result: u64;
    
    if var_d8 >= *arg4 - r15_2
    {
        if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h28d011dc1ac5cb15(
            arg4, rdx, var_d8) == 0
        {
            result = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
    }
    else
    {
        memcpy(arg4[1] + r15_2, rdx, var_d8);
        arg4[2] = r15_2 + var_d8;
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he07c38d0805bada3(var_e8, rdx);
    result
}
