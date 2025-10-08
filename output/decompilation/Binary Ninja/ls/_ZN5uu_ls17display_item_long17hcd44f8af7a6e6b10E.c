
  uint64_t uu_ls::display_item_long::hcd44f8af7a6e6b10(void* arg1, void* arg2, uint64_t arg3, int64_t* arg4, int64_t* arg5, char arg6)

{
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hf473535ce603429c(0x80, 1, 1);
    int64_t var_e8 = rax;
    uint64_t var_d8 = 0;
    int64_t var_c8;
    uint64_t var_c0;
    int64_t var_b8;
    
    if (*(arg4 + 0x85) != 2)
    {
        uu_ls::colors::StyleManager::apply_normal::h69c01341e2d260d1(&var_c8, &arg4[0xd]);
        uint64_t rsi_1 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_1, var_b8 + rsi_1);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
    }
    
    char rax_1 = *(arg3 + 0xf6);
    
    if (rax_1)
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, "  src/uu/ls/src/dired.rs//DIRED-…", "src/uu/ls/src/dired.rs//DIRED-OP…");
    
    void* rax_2 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg1, arg4);
    int64_t rdi_72;
    int64_t r15_1;
    int64_t var_98;
    
    if (!rax_2)
    {
        int32_t rax_12 = *(arg1 + 0xf8);
        char const* const rsi_18 = &data_4d4206[0x11];
        
        if (rax_12 != 2 && rax_12 & 1)
        {
            int32_t rax_15 = ROLD((0xf000 & *(arg1 + 0xfc)) - 0x2000, 0x13);
            
            if (rax_15 <= 4)
                rsi_18 = *(&data_4d44c0 + (rax_15 << 2)) + &data_4d44c0;
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_18, &rsi_18[1]);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, "?????????bd-???_-.:~/\x1b]8;;fil…", &data_4d4206[0xf]);
        
        if (*(arg1 + 0x40) >= 2)
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, ".//home/34r7hm4n/.rustup/toolcha…", "//home/34r7hm4n/.rustup/toolchai…");
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *(arg2 + 8));
        
        if (*(arg3 + 0xea))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *(arg2 + 0x10));
        }
        
        if (*(arg3 + 0xe9))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *(arg2 + 0x18));
        }
        
        if (*(arg3 + 0xf3))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *(arg1 + 0x38), *(arg1 + 0x40), *(arg2 + 0x20));
        }
        
        if (*(arg3 + 0xe8))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *(arg2 + 0x10));
        }
        
        var_98 = 0;
        int64_t var_90 = 1;
        int64_t var_88 = 0;
        uint64_t rax_19;
        int64_t r8;
        rax_19 = alloc::boxed::Box$LT$T$GT$::new::h4d3ebcf2dcfb6a31(&var_e8);
        var_c8 = 0;
        var_c0 = rax_19;
        void* const var_b8_1 = &data_686d08;
        int64_t var_78;
        uu_ls::display_item_name::h23801d128c21da3c(&var_78, arg1, arg3, 0, r8, &var_98, arg4, 
            &var_c8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, *(arg2 + 0x28));
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, "?,\n'"+?????????bd-???_-.:~/\x1b…", 1, 0xc);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        uint64_t r12_2;
        int64_t var_70;
        uint64_t var_68;
        
        if (!rax_1)
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
        uint64_t rsi_34 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_34, var_b8_1 + rsi_34);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        rdi_72 = var_78;
    }
    else
    {
        *(arg1 + 0x10);
        xattr::list::h98bb10efc77fe3e7(&var_c8, *(arg1 + 8));
        char rax_4 = core::result::Result$LT$T$C$E$GT$::is_ok_and::h84dfcb59db6f5993(&var_c8);
        uucore::features::fs::display_permissions::hc8fe13fd96ae0343(&var_c8, rax_2, 1);
        uint64_t rsi_5 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_5, var_b8 + rsi_5);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        int64_t rax_6 = *(arg1 + 0x40);
        
        if (rax_6 >= 2 | rax_4)
        {
            char const* const rdx_6 = "?????????bd-???_-.:~/\x1b]8;;fil…";
            
            if (rax_6 >= 2)
                rdx_6 = "//home/34r7hm4n/.rustup/toolchai…";
            
            char const* const rsi_6 = "+?????????bd-???_-.:~/\x1b]8;;fi…";
            
            if (rax_6 >= 2)
                rsi_6 = ".//home/34r7hm4n/.rustup/toolcha…";
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_6, rdx_6);
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        uu_ls::display_symlink_count::h2fe71a64427ba274(&var_c8, *(rax_2 + 0x30));
        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, var_c0, var_b8, *(arg2 + 8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        
        if (*(arg3 + 0xea))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            void* rax_7 =
                uu_ls::display_uname::h7c414fef392325b1(*(rax_2 + 0x3c), *(arg3 + 0xeb), arg4);
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *(rax_7 + 8), *(rax_7 + 0x10), *(arg2 + 0x10));
        }
        
        if (*(arg3 + 0xe9))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            void* rax_8 =
                uu_ls::display_group::h274df09bb9587751(*(rax_2 + 0x40), *(arg3 + 0xeb), arg4);
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *(rax_8 + 8), *(rax_8 + 0x10), *(arg2 + 0x18));
        }
        
        if (*(arg3 + 0xf3))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *(arg1 + 0x38), *(arg1 + 0x40), *(arg2 + 0x20));
        }
        
        if (*(arg3 + 0xe8))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            void* rax_10 =
                uu_ls::display_uname::h7c414fef392325b1(*(rax_2 + 0x3c), *(arg3 + 0xeb), arg4);
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_right::ha3afe12e98e0c3b8(&var_e8, *(rax_10 + 8), *(rax_10 + 0x10), *(arg2 + 0x10));
        }
        
        uu_ls::display_len_or_rdev::h54f0966b5b04a08a(&var_c8, rax_2, *(arg3 + 0xd0), 
            *(arg3 + 0xf9));
        int64_t* rdi_29;
        int64_t var_b0;
        
        if (!(0 + -(var_c8)))
        {
            uint64_t rbp_3 = var_c0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            int64_t rax_23 = *(arg2 + 0x28);
            int64_t r13_2 = *(arg2 + 0x38);
            int64_t rdx_22 = -1;
            
            if (r13_2 < -2)
                rdx_22 = r13_2 + 2;
            
            int64_t rsi_25 = 0;
            
            if (rax_23 >= rdx_22)
                rsi_25 = rax_23 - rdx_22;
            
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, rbp_3, var_b8, core::cmp::Ord::max::h3082798d7e57ba36(*(arg2 + 0x30), rsi_25));
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, ", ", &data_4d1ec7[2]);
            int64_t var_a8;
            int64_t var_a0;
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, var_a8, var_a0, r13_2);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_b0);
            rdi_29 = &var_c8;
        }
        else
        {
            int64_t rbp_1 = var_b0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
            _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$uu_ls..ExtendPad$GT$::extend_pad_left::h467ba58bf40f4318(&var_e8, var_b8, rbp_1, *(arg2 + 0x28));
            rdi_29 = &var_c0;
        }
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(rdi_29);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        uu_ls::display_date::h897c60a9acee5f16(&var_c8, rax_2, *(arg3 + 0xfb), arg4);
        uint64_t rsi_29 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_29, var_b8 + rsi_29);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, " \t/home/34r7hm4n/.cargo/registr…", "\t/home/34r7hm4n/.cargo/registry…");
        var_98 = 0;
        int64_t var_90_1 = 1;
        int64_t var_88_1 = 0;
        uint64_t rax_26;
        int64_t r8_1;
        rax_26 = alloc::boxed::Box$LT$T$GT$::new::h4d3ebcf2dcfb6a31(&var_e8);
        var_c8 = 0;
        var_c0 = rax_26;
        void* const var_b8_2 = &data_686ce8;
        int64_t var_48;
        uu_ls::display_item_name::h23801d128c21da3c(&var_48, arg1, arg3, 0, r8_1, &var_98, arg4, 
            &var_c8);
        int64_t var_40;
        r15_1 = var_40;
        void* var_38;
        void* const r13_3 = var_38;
        char rax_27;
        
        if (arg6)
            rax_27 = uu_ls::os_str_starts_with::hfc6f2914b2c0a945(r15_1, r13_3, 
                "'"+?????????bd-???_-.:~/\x1b]8;;…");
        
        int64_t r12_4;
        
        if (arg6 && !rax_27)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_c8, " \t/home/34r7hm4n/.cargo/registr…", 1);
            var_98 = var_c8;
            std::ffi::os_str::OsString::push::h7ae4c515aa982082(&var_98, &var_48);
            r12_4 = var_98;
            r15_1 = var_90_1;
            r13_3 = var_b8_2;
            
            if (rax_1)
                goto label_59dd30;
        }
        else
        {
            r12_4 = var_48;
            
            if (rax_1)
            {
                label_59dd30:
                int64_t rcx_21 = arg5[2];
                int64_t rsi_37;
                
                if (!rcx_21)
                    rsi_37 = 0;
                else
                    rsi_37 = *(arg5[1] + (rcx_21 << 4) - 8) + 1;
                
                void* rsi_38 = rsi_37 + var_d8;
                uu_ls::dired::update_positions::hea3b08d96622b01c(arg5, rsi_38, rsi_38 + r13_3);
            }
        }
        
        uu_ls::write_os_str::h18794456fbab1bc6(&var_e8, r15_1, r13_3);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0ee67096214dca41(
            &var_c8, arg3 + 0x102);
        uint64_t rsi_41 = var_c0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1aaadf86e95554cf(&var_e8, rsi_41, var_b8_2 + rsi_41);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
        rdi_72 = r12_4;
    }
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_72, r15_1);
    int64_t r15_2 = arg4[2];
    uint64_t result;
    
    if (var_d8 >= *arg4 - r15_2)
    {
        if (!std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h28d011dc1ac5cb15(
                arg4, rdx, var_d8))
            result = 0;
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    else
    {
        memcpy(arg4[1] + r15_2, rdx, var_d8);
        arg4[2] = r15_2 + var_d8;
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he07c38d0805bada3(var_e8, rdx);
    return result;
}
