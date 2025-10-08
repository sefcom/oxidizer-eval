
  fn bat::config::generate_config_file::hc481a22fd82623a6(arg1: *mut i8) -> i64

{
    let mut var_50: ();
    bat::config::config_file::h4b67a380f7fc9337(&var_50);
    let var_48: *mut i8;
    let mut r15: *mut i8 = var_48;
    let var_40: u64;
    let mut r14: u64 = var_40;
    let mut var_a8: *mut *mut c_void;
    let mut var_78: *mut i64;
    let mut var_68: *mut c_void;
    let mut rax_1: ssize_t;
    
    if std::path::Path::is_file::h6e28d87ff76ffc41(r15, r14) == 0
    {
        let mut rax_3: *mut i8;
        let mut rdx_2: i64;
        rax_3 = std::path::Path::parent::hef287f60afa56900(r15, r14);
        
        if rax_3 == 0
        {
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_68, r15, r14);
            var_78 = &var_68;
            let var_70_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
            var_a8 = &data_ac8600;
            let var_a0_3: i64 = 1;
            let var_88_2: i64 = 0;
            let mut var_98_4: *mut *mut i64 = &var_78;
            let var_90_2: i64 = 1;
            let mut var_38: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha6af42fd863fbfff(&var_38, 0, &var_a8);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_68);
            *var_a8[7] = var_38;
            let var_28: i64;
            var_98_4 = var_28;
            *arg1 = 0xb;
            *arg1.byte_offset(1) = var_a8;
            *arg1.byte_offset(0x10) = var_a0_3;
            *arg1.byte_offset(0x18) = var_98_4;
        }
        else
        {
            rax_1 = std::fs::create_dir_all::h72c4bebdc9f0feff(rax_3);
            
            if rax_1 == 0
            {
                goto 'label_7acd25;
            }
            
            *arg1 = 0;
            *arg1.byte_offset(8) = rax_1;
        }
    }
    else
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_68, r15, r14);
        var_78 = &var_68;
        let var_70_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
        var_a8 = &data_ac85d0;
        let var_a0_1: i64 = 2;
        let var_88_1: i64 = 0;
        let var_98_1: *mut *mut i64 = &var_78;
        let mut var_90_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_68);
        var_a8 = &data_ac85f0;
        let var_a0_2: i64 = 1;
        let var_98_2: i64 = 8;
        var_90_1 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_a8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        rax_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            &var_a8);
        
        if rax_1 != 0
        {
            *arg1 = 0;
            *arg1.byte_offset(8) = rax_1;
        }
        else
        {
            var_a8 = nullptr;
            let var_a0: i64 = 1;
            let var_98_3: i64 = 0;
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            var_68 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
            let mut rax_2: i8;
            let mut rdx_1: i64;
            rax_2 = std::io::stdio::Stdin::read_line::h4f274dfaf65c22af(&var_68, &var_a8);
            
            if (rax_2 & 1) == 0
            {
                let mut rax_6: *mut i8;
                let mut rdx_5: i64;
                rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hbcac274ffcd47b99(var_a0, 
                    var_98_3);
                
                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_6, rdx_5) == 0
                {
                    *arg1 = 0xd;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_a8);
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(
                        &var_a8);
                    'label_7acd25:
                    let rax_8: i64 = std::fs::write::h4bd82eacd25dfa2c(&var_50);
                    
                    if rax_8 == 0
                    {
                        goto 'label_7acd6e;
                    }
                    
                    bat::config::generate_config_file::_$u7b$$u7b$closure$u7d$$u7d$::hdf5ae32e43f4c068(&var_a8, r15, r14, rax_8);
                    let rax_9: *mut *mut c_void = var_a8;
                    var_68 = var_a0;
                    
                    if -(rax_9) != -0x8000000000000000
                    {
                        *arg1.byte_offset(0x10) = var_68;
                        *arg1 = 0xb;
                        *arg1.byte_offset(8) = rax_9;
                    }
                    else
                    {
                        r15 = var_48;
                        r14 = var_40;
                        'label_7acd6e:
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_68, r15, 
                            r14);
                        var_78 = &var_68;
                        let var_70_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                        var_a8 = &data_ac8610;
                        let var_a0_4: i64 = 2;
                        let var_88_3: i64 = 0;
                        let var_98_5: *mut *mut i64 = &var_78;
                        let var_90_3: i64 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
                        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(
                            &var_68);
                        *arg1 = 0xd;
                    }
                }
            }
            else
            {
                *arg1 = 0;
                *arg1.byte_offset(8) = rdx_1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_a8);
            }
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(&var_50)
}
