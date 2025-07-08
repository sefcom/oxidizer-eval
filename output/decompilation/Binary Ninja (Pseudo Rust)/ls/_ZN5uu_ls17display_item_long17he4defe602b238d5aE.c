
  fn uu_ls::display_item_long::he4defe602b238d5a(arg1: *mut c_void, arg2: *mut *mut *mut i64, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut i64, arg6: *mut i64, arg7: i8) -> *mut i128

{
    let mut var_e0: i64 = 0;
    let var_d8: i64 = 1;
    let var_d0: i64 = 0;
    let mut var_178: *mut i128;
    let mut var_138: *mut i64;
    let mut var_130: fn(arg1: *mut c_void, arg2: i64) -> i64;
    let mut var_118: *mut c_void;
    
    if *arg6.byte_offset(0x1d) != 2
    {
        uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&var_118, arg6);
        var_138 = &var_118;
        var_130 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_178 = &data_423c10;
        let var_170_1: i64 = 1;
        let var_158_1: i64 = 0;
        let var_168_1: *mut *mut i64 = &var_138;
        let var_160_1: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
    }
    
    let rax_2: i8 = *arg3.byte_offset(0xee);
    
    if rax_2 != 0
    {
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_e0, 
            "  \t?????????+bd-cannot access a…", 2);
    }
    
    let rax_3: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg1);
    let r15: *mut i64 = rax_3;
    let mut var_c8: *mut *mut i64;
    let mut var_a8: *mut c_void;
    let mut var_88: *mut *mut i64;
    
    if rax_3 == 0
    {
        let mut rax_16: *mut c_void;
        
        if (*arg1.byte_offset(0xf8) & 1) != 0
        {
            let rax_43: u64 = ((0xf000 & *arg1.byte_offset(0xfc)) - 0x2000).rotate_left(0x13);
            
            if rax_43 > 4
            {
                rax_16 = "-cannot access a Thread Local St…";
            }
            else
            {
                match rax_43
                {
                    0 =>
                    {
                        rax_16 = "cescapeinternal error: entered u…";
                    }
                    1 =>
                    {
                        rax_16 = "d-cannot access a Thread Local S…";
                    }
                    2 =>
                    {
                        rax_16 = "bd-cannot access a Thread Local …";
                    }
                    3 =>
                    {
                        rax_16 = "-cannot access a Thread Local St…";
                    }
                    4 =>
                    {
                        rax_16 = "lUse literal quoting style. Equi…";
                    }
                }
            }
        }
        else
        {
            rax_16 = "-cannot access a Thread Local St…";
        }
        
        var_a8 = rax_16;
        let var_a0_1: i64 = 1;
        let temp1_1: i64 = *arg1.byte_offset(0x40);
        let mut rdx_10: *mut *mut i64 = 1;
        
        if temp1_1 >= 2
        {
            rdx_10 = "...a Display implementation retu…";
        }
        
        let mut rax_17: i64;
        rax_17 = temp1_1 >= 2;
        var_c8 = rdx_10;
        let var_c0_1: i64 = rax_17;
        arg2[1];
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_138, "? ,\n,   \t?????????+bd-cannot a…");
        var_178 = &var_a8;
        let var_170_8: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        let var_168_8: *mut *mut *mut i64 = &var_c8;
        let var_160_8: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        let var_158_8: *mut *mut i64 = &var_138;
        let var_150_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_118 = &data_612728;
        let var_110_1: i64 = 3;
        let var_f8_1: i64 = 0;
        let var_108_1: *const *mut i128 = &var_178;
        let var_100_1: i64 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_118));
        let mut r8: i64 =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        
        if *arg3.byte_offset(0xe2) != 0
        {
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, "? ,\n,   \t?????????+bd-cannot a…");
            var_138 = &var_118;
            let var_130_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_9: i64 = 1;
            let var_158_9: i64 = 0;
            let var_168_9: *mut *mut i64 = &var_138;
            let var_160_9: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if *arg3.byte_offset(0xe1) != 0
        {
            arg2[3];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, "? ,\n,   \t?????????+bd-cannot a…");
            var_138 = &var_118;
            let var_130_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_10: i64 = 1;
            let var_158_10: i64 = 0;
            let var_168_10: *mut *mut i64 = &var_138;
            let var_160_10: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if *arg3.byte_offset(0xeb) != 0
        {
            *arg1.byte_offset(0x40);
            arg2[4];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, *arg1.byte_offset(0x38));
            var_138 = &var_118;
            let var_130_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_11: i64 = 1;
            let var_158_11: i64 = 0;
            let var_168_11: *mut *mut i64 = &var_138;
            let var_160_11: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if *arg3.byte_offset(0xe0) != 0
        {
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, "? ,\n,   \t?????????+bd-cannot a…");
            var_138 = &var_118;
            let var_130_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_12: i64 = 1;
            let var_158_12: i64 = 0;
            let var_168_12: *mut *mut i64 = &var_138;
            let var_160_12: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        var_178 = nullptr;
        let var_170_13: i64 = 1;
        let var_168_13: i64 = 0;
        uu_ls::display_item_name::h2be516ffa591d327(&var_88, arg1, arg3, 0, r8, &var_178, arg4, 
            arg6, ansi_width::ansi_width::h2f2b875c576f64e5(var_d8, var_d0));
        arg2[5];
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_c8, "? ,\n,   \t?????????+bd-cannot a…");
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_138, "? ,\n,   \t?????????+bd-cannot a…");
        var_118 = &var_c8;
        let var_110_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_108_2: *mut *mut i64 = &var_138;
        let var_100_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_178 = &data_612758;
        let var_170_14: i64 = 3;
        let var_158_13: i64 = 0;
        let var_168_14: *const *mut c_void = &var_118;
        let var_160_13: i64 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        let var_80: i64;
        let var_78: i64;
        
        if rax_2 != 0
        {
            uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(arg5, var_d0, 
                core::str::_$LT$impl$u20$str$GT$::trim_matches::hc93eafa728d7d508(var_80, var_78));
        }
        var_118 = &var_88;
        let var_110_3: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_108_3: *mut c_void = arg3.byte_offset(0xfa);
        let var_100_3: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_178 = &data_428c70;
        let var_170_15: i64 = 2;
        let var_158_14: i64 = 0;
        let var_168_15: *const *mut c_void = &var_118;
        let var_160_14: i64 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
    }
    else
    {
        *arg1.byte_offset(0x10);
        let rax_5: i8 = uucore::features::fsxattr::has_acl::h71ae0ae5f3d767a3(*arg1.byte_offset(8));
        uucore::features::fs::display_permissions::h7f7460be11af54d3(&var_88, r15, 1);
        let temp0_1: i64 = *arg1.byte_offset(0x40);
        let mut rax_6: i64;
        rax_6 = temp0_1 >= 2;
        let mut rcx_1: *const i8 = "...a Display implementation retu…";
        
        if temp0_1 < 2
        {
            rcx_1 = 1;
        }
        
        let mut var_68: *const i8 = rcx_1;
        let mut rax_7: *mut c_void = "+bd-cannot access a Thread Local…";
        
        if rax_5 == 0
        {
            rax_7 = 1;
        }
        
        var_a8 = rax_7;
        uu_ls::display_symlink_count::h0e09a9bc6ad70230(&var_138, r15[6]);
        arg2[1];
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_c8, var_130);
        var_178 = &var_88;
        let var_170_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_168_2: *const *const i8 = &var_68;
        let var_160_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        let var_158_2: *const *mut c_void = &var_a8;
        let var_150: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        let var_148_1: *mut i64 = &var_c8;
        let var_140_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_118 = &data_612698;
        let var_110: i64 = 4;
        let var_f8: i64 = 0;
        let var_108: *const *mut i128 = &var_178;
        let var_100: i64 = 4;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_118));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
        let mut var_c0: fn(arg1: *mut c_void, arg2: i64) -> i64;
        
        if *arg3.byte_offset(0xe2) != 0
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&var_118, *r15.byte_offset(0x3c), 
                *arg3.byte_offset(0xe3));
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_138, var_110);
            var_c8 = &var_138;
            var_c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_3: i64 = 1;
            let var_158_3: i64 = 0;
            let var_168_3: *mut *mut *mut i64 = &var_c8;
            let var_160_3: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if *arg3.byte_offset(0xe1) != 0
        {
            uu_ls::display_group::hd4d6945b2a81cff8(&var_118, r15[8], *arg3.byte_offset(0xe3));
            arg2[3];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_138, var_110);
            var_c8 = &var_138;
            var_c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_4: i64 = 1;
            let var_158_4: i64 = 0;
            let var_168_4: *mut *mut *mut i64 = &var_c8;
            let var_160_4: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if *arg3.byte_offset(0xeb) != 0
        {
            *arg1.byte_offset(0x40);
            arg2[4];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, *arg1.byte_offset(0x38));
            var_138 = &var_118;
            let var_130_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_5: i64 = 1;
            let var_158_5: i64 = 0;
            let var_168_5: *mut *mut i64 = &var_138;
            let var_160_5: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if *arg3.byte_offset(0xe0) != 0
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&var_118, *r15.byte_offset(0x3c), 
                *arg3.byte_offset(0xe3));
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_138, var_110);
            var_c8 = &var_138;
            var_c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_6: i64 = 1;
            let var_158_6: i64 = 0;
            let var_168_6: *mut *mut *mut i64 = &var_c8;
            let var_160_6: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        uu_ls::display_len_or_rdev::habe6b45626a6ff16(&var_118, r15, *arg3.byte_offset(0xd0), 
            *arg3.byte_offset(0xf1));
        let mut var_b8: *const *mut i128;
        
        if var_100 != -0x8000000000000000
        {
            let var_58_1: *const *mut i128 = var_108;
            var_68 = var_118;
            let var_f0: i64;
            let var_98_1: i64 = var_f0;
            var_a8 = var_100;
            let rax_27: i64 = arg2[5];
            let rbx_1: i64 = arg2[7];
            let mut rdx_20: i64 = -1;
            
            if rbx_1 < -2
            {
                rdx_20 = rbx_1 + 2;
            }
            
            let mut rsi_48: i64 = 0;
            
            if rax_27 >= rdx_20
            {
                rsi_48 = rax_27 - rdx_20;
            }
            
            core::cmp::max_by::h7ee1a79e2ed707c0(arg2[6], rsi_48);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_88, rax_6);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_c8, rax_5);
            var_138 = &var_88;
            let var_130_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_128_1: *mut *mut *mut i64 = &var_c8;
            let var_120_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126e8;
            let var_170_16: i64 = 2;
            let var_158_15: i64 = 0;
            let var_168_16: *mut *mut i64 = &var_138;
            let var_160_15: i64 = 2;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
        }
        else
        {
            var_b8 = var_108;
            var_c8 = var_118;
            arg2[5];
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_138, var_c0);
            var_88 = &var_138;
            let var_80_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            let var_170_7: i64 = 1;
            let var_158_7: i64 = 0;
            let var_168_7: *mut *mut *mut i64 = &var_88;
            let var_160_7: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        }
        
        uu_ls::display_date::h5db6390c2e0df8d3(&var_118, r15, arg3);
        var_138 = &var_118;
        let var_130_7: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_178 = &data_612708;
        let var_170_17: i64 = 2;
        let var_158_16: i64 = 0;
        let var_168_17: *mut *mut i64 = &var_138;
        let var_160_16: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        let r8_1: i64 =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        var_178 = nullptr;
        let var_170_18: i64 = 1;
        let var_168_18: i64 = 0;
        let mut r15_1: *mut *mut *mut i64 = &var_c8;
        uu_ls::display_item_name::h2be516ffa591d327(&var_c8, arg1, arg3, 0, r8_1, &var_178, arg4, 
            arg6, ansi_width::ansi_width::h2f2b875c576f64e5(var_d8, var_d0));
        let mut r12_2: *mut i64;
        
        if arg7 == 0
        {
            r12_2 = 1;
        }
        else
        {
            var_178 = 0;
            let mut rax_33: i64;
            let mut rdx_25: u64;
            rax_33 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x27, &var_178);
            let mut rbp: *mut *mut *mut i64;
            rbp = 1;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(var_c0, 
                var_b8, rax_33, rdx_25) == 0
            {
                var_118 = &var_c8;
                let var_110_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_178 = &data_6126d8;
                let var_170_19: i64 = 1;
                let var_158_17: i64 = 0;
                let var_168_19: *const *mut c_void = &var_118;
                let var_160_17: i64 = 1;
                rbp = 1;
                let mut var_48: ();
                r15_1 = &var_48;
                core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_48, &var_178);
                rbp = 1;
                r12_2 = nullptr;
            }
            else
            {
                r12_2 = 1;
            }
        }
        
        var_138 = *r15_1;
        
        if rax_2 != 0
        {
            let rcx_24: i64 = arg5[2];
            let mut rsi_63: i64;
            
            if rcx_24 == 0
            {
                rsi_63 = 0;
            }
            else
            {
                rsi_63 = *((rcx_24 << 4) + arg5[1] - 8) + 1;
            }
            
            let rsi_64: i64 = rsi_63 + var_d0;
            uu_ls::dired::update_positions::h1dc8b030d29268c5(arg5, rsi_64, 
                r15_1[2].byte_offset(rsi_64));
        }
        
        var_118 = &var_138;
        let var_110_5: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_108_4: *mut c_void = arg3.byte_offset(0xfa);
        let var_100_4: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_178 = &data_428c70;
        let var_170_20: i64 = 2;
        let var_158_18: i64 = 0;
        let var_168_20: *const *mut c_void = &var_118;
        let var_160_18: i64 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        
        if r12_2 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        }
    }
    var_118 = &var_e0;
    let var_110_6: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_178 = &data_423c10;
    let var_170_21: i64 = 1;
    let var_158_19: i64 = 0;
    let var_168_21: *const *mut c_void = &var_118;
    let var_160_19: i64 = 1;
    
    if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_178) == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_e0);
        return nullptr;
    }
    
    let result: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_e0);
    result
}
