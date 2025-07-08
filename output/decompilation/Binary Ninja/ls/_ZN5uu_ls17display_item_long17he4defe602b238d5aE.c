
  int128_t* uu_ls::display_item_long::he4defe602b238d5a(void* arg1, int64_t*** arg2, void* arg3, void* arg4, int64_t* arg5, int64_t* arg6, char arg7)

{
    int64_t var_e0 = 0;
    int64_t var_d8 = 1;
    int64_t var_d0 = 0;
    int128_t* const var_178;
    int64_t* var_138;
    int64_t (* var_130)(void* arg1, int64_t arg2);
    void* const var_118;
    
    if (*(arg6 + 0x1d) != 2)
    {
        uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&var_118, arg6);
        var_138 = &var_118;
        var_130 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_178 = &data_423c10;
        int64_t var_170_1 = 1;
        int64_t var_158_1 = 0;
        int64_t** var_168_1 = &var_138;
        int64_t var_160_1 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
    }
    
    char rax_2 = *(arg3 + 0xee);
    
    if (rax_2)
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_e0, 
            "  \t?????????+bd-cannot access a…", 2);
    
    int32_t* rax_3 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg1);
    int64_t* r15 = rax_3;
    int64_t** var_c8;
    void* const var_a8;
    int64_t** var_88;
    
    if (!rax_3)
    {
        void* rax_16;
        
        if (*(arg1 + 0xf8) & 1)
        {
            uint64_t rax_43 = ROLD((0xf000 & *(arg1 + 0xfc)) - 0x2000, 0x13);
            
            if (rax_43 > 4)
                rax_16 = "-cannot access a Thread Local St…";
            else
                switch (rax_43)
                {
                    case 0:
                    {
                        rax_16 = "cescapeinternal error: entered u…";
                        break;
                    }
                    case 1:
                    {
                        rax_16 = "d-cannot access a Thread Local S…";
                        break;
                    }
                    case 2:
                    {
                        rax_16 = "bd-cannot access a Thread Local …";
                        break;
                    }
                    case 3:
                    {
                        rax_16 = "-cannot access a Thread Local St…";
                        break;
                    }
                    case 4:
                    {
                        rax_16 = "lUse literal quoting style. Equi…";
                        break;
                    }
                }
        }
        else
            rax_16 = "-cannot access a Thread Local St…";
        
        var_a8 = rax_16;
        int64_t var_a0_1 = 1;
        int64_t temp1_1 = *(arg1 + 0x40);
        int64_t** rdx_10 = 1;
        
        if (temp1_1 >= 2)
            rdx_10 = "...a Display implementation retu…";
        
        int64_t rax_17;
        rax_17 = temp1_1 >= 2;
        var_c8 = rdx_10;
        int64_t var_c0_1 = rax_17;
        arg2[1];
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_138, "? ,\n,   \t?????????+bd-cannot a…");
        var_178 = &var_a8;
        int64_t (* var_170_8)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        int64_t*** var_168_8 = &var_c8;
        int64_t (* var_160_8)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        int64_t** var_158_8 = &var_138;
        int64_t (* var_150_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_118 = &data_612728;
        int64_t var_110_1 = 3;
        int64_t var_f8_1 = 0;
        int128_t* const* var_108_1 = &var_178;
        int64_t var_100_1 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_118));
        int64_t r8 =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        
        if (*(arg3 + 0xe2))
        {
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, "? ,\n,   \t?????????+bd-cannot a…");
            var_138 = &var_118;
            int64_t (* var_130_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_9 = 1;
            int64_t var_158_9 = 0;
            int64_t** var_168_9 = &var_138;
            int64_t var_160_9 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if (*(arg3 + 0xe1))
        {
            arg2[3];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, "? ,\n,   \t?????????+bd-cannot a…");
            var_138 = &var_118;
            int64_t (* var_130_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_10 = 1;
            int64_t var_158_10 = 0;
            int64_t** var_168_10 = &var_138;
            int64_t var_160_10 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if (*(arg3 + 0xeb))
        {
            *(arg1 + 0x40);
            arg2[4];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, *(arg1 + 0x38));
            var_138 = &var_118;
            int64_t (* var_130_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_11 = 1;
            int64_t var_158_11 = 0;
            int64_t** var_168_11 = &var_138;
            int64_t var_160_11 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if (*(arg3 + 0xe0))
        {
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, "? ,\n,   \t?????????+bd-cannot a…");
            var_138 = &var_118;
            int64_t (* var_130_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_12 = 1;
            int64_t var_158_12 = 0;
            int64_t** var_168_12 = &var_138;
            int64_t var_160_12 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            r8 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        var_178 = nullptr;
        int64_t var_170_13 = 1;
        int64_t var_168_13 = 0;
        uu_ls::display_item_name::h2be516ffa591d327(&var_88, arg1, arg3, 0, r8, &var_178, arg4, 
            arg6, ansi_width::ansi_width::h2f2b875c576f64e5(var_d8, var_d0));
        arg2[5];
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_c8, "? ,\n,   \t?????????+bd-cannot a…");
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_138, "? ,\n,   \t?????????+bd-cannot a…");
        var_118 = &var_c8;
        int64_t (* var_110_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        int64_t** var_108_2 = &var_138;
        int64_t (* var_100_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_178 = &data_612758;
        int64_t var_170_14 = 3;
        int64_t var_158_13 = 0;
        void* const* var_168_14 = &var_118;
        int64_t var_160_13 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        int64_t var_80;
        int64_t var_78;
        
        if (rax_2)
            uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(arg5, var_d0, 
                core::str::_$LT$impl$u20$str$GT$::trim_matches::hc93eafa728d7d508(var_80, var_78));
        var_118 = &var_88;
        int64_t (* var_110_3)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        void* var_108_3 = arg3 + 0xfa;
        int64_t (* var_100_3)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_178 = &data_428c70;
        int64_t var_170_15 = 2;
        int64_t var_158_14 = 0;
        void* const* var_168_15 = &var_118;
        int64_t var_160_14 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
    }
    else
    {
        *(arg1 + 0x10);
        char rax_5 = uucore::features::fsxattr::has_acl::h71ae0ae5f3d767a3(*(arg1 + 8));
        uucore::features::fs::display_permissions::h7f7460be11af54d3(&var_88, r15, 1);
        int64_t temp0_1 = *(arg1 + 0x40);
        int64_t rax_6;
        rax_6 = temp0_1 >= 2;
        char const* const rcx_1 = "...a Display implementation retu…";
        
        if (temp0_1 < 2)
            rcx_1 = 1;
        
        char const* const var_68 = rcx_1;
        void* const rax_7 = "+bd-cannot access a Thread Local…";
        
        if (!rax_5)
            rax_7 = 1;
        
        var_a8 = rax_7;
        uu_ls::display_symlink_count::h0e09a9bc6ad70230(&var_138, r15[6]);
        arg2[1];
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_c8, var_130);
        var_178 = &var_88;
        int64_t (* var_170_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        char const* const* var_168_2 = &var_68;
        int64_t (* var_160_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        void* const* var_158_2 = &var_a8;
        int64_t (* var_150)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        int64_t* var_148_1 = &var_c8;
        int64_t (* var_140_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_118 = &data_612698;
        int64_t var_110 = 4;
        int64_t var_f8 = 0;
        int128_t* const* var_108 = &var_178;
        int64_t var_100 = 4;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_118));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
        int64_t (* var_c0)(void* arg1, int64_t arg2);
        
        if (*(arg3 + 0xe2))
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&var_118, *(r15 + 0x3c), *(arg3 + 0xe3));
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_138, var_110);
            var_c8 = &var_138;
            var_c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_3 = 1;
            int64_t var_158_3 = 0;
            int64_t*** var_168_3 = &var_c8;
            int64_t var_160_3 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if (*(arg3 + 0xe1))
        {
            uu_ls::display_group::hd4d6945b2a81cff8(&var_118, r15[8], *(arg3 + 0xe3));
            arg2[3];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_138, var_110);
            var_c8 = &var_138;
            var_c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_4 = 1;
            int64_t var_158_4 = 0;
            int64_t*** var_168_4 = &var_c8;
            int64_t var_160_4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if (*(arg3 + 0xeb))
        {
            *(arg1 + 0x40);
            arg2[4];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_118, *(arg1 + 0x38));
            var_138 = &var_118;
            int64_t (* var_130_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_5 = 1;
            int64_t var_158_5 = 0;
            int64_t** var_168_5 = &var_138;
            int64_t var_160_5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        if (*(arg3 + 0xe0))
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&var_118, *(r15 + 0x3c), *(arg3 + 0xe3));
            arg2[2];
            uu_ls::pad_right::h03bdecf4fae380b6(&var_138, var_110);
            var_c8 = &var_138;
            var_c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_6 = 1;
            int64_t var_158_6 = 0;
            int64_t*** var_168_6 = &var_c8;
            int64_t var_160_6 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        }
        
        uu_ls::display_len_or_rdev::habe6b45626a6ff16(&var_118, r15, *(arg3 + 0xd0), 
            *(arg3 + 0xf1));
        int128_t* const* var_b8;
        
        if (var_100 != -0x8000000000000000)
        {
            int128_t* const* var_58_1 = var_108;
            var_68 = var_118;
            int64_t var_f0;
            int64_t var_98_1 = var_f0;
            var_a8 = var_100;
            int64_t rax_27 = arg2[5];
            int64_t rbx_1 = arg2[7];
            int64_t rdx_20 = -1;
            
            if (rbx_1 < -2)
                rdx_20 = rbx_1 + 2;
            
            int64_t rsi_48 = 0;
            
            if (rax_27 >= rdx_20)
                rsi_48 = rax_27 - rdx_20;
            
            core::cmp::max_by::h7ee1a79e2ed707c0(arg2[6], rsi_48);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_88, rax_6);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&var_c8, rax_5);
            var_138 = &var_88;
            int64_t (* var_130_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int64_t*** var_128_1 = &var_c8;
            int64_t (* var_120_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126e8;
            int64_t var_170_16 = 2;
            int64_t var_158_15 = 0;
            int64_t** var_168_16 = &var_138;
            int64_t var_160_15 = 2;
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
            int64_t (* var_80_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_6126d8;
            int64_t var_170_7 = 1;
            int64_t var_158_7 = 0;
            int64_t*** var_168_7 = &var_88;
            int64_t var_160_7 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
        }
        
        uu_ls::display_date::h5db6390c2e0df8d3(&var_118, r15, arg3);
        var_138 = &var_118;
        int64_t (* var_130_7)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_178 = &data_612708;
        int64_t var_170_17 = 2;
        int64_t var_158_16 = 0;
        int64_t** var_168_17 = &var_138;
        int64_t var_160_16 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        int64_t r8_1 =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_118);
        var_178 = nullptr;
        int64_t var_170_18 = 1;
        int64_t var_168_18 = 0;
        int64_t*** r15_1 = &var_c8;
        uu_ls::display_item_name::h2be516ffa591d327(&var_c8, arg1, arg3, 0, r8_1, &var_178, arg4, 
            arg6, ansi_width::ansi_width::h2f2b875c576f64e5(var_d8, var_d0));
        int64_t* r12_2;
        
        if (!arg7)
            r12_2 = 1;
        else
        {
            var_178 = 0;
            int64_t rax_33;
            uint64_t rdx_25;
            rax_33 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x27, &var_178);
            int64_t*** rbp;
            rbp = 1;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(var_c0, 
                var_b8, rax_33, rdx_25))
            {
                var_118 = &var_c8;
                int64_t (* var_110_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_178 = &data_6126d8;
                int64_t var_170_19 = 1;
                int64_t var_158_17 = 0;
                void* const* var_168_19 = &var_118;
                int64_t var_160_17 = 1;
                rbp = 1;
                void var_48;
                r15_1 = &var_48;
                core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_48, &var_178);
                rbp = 1;
                r12_2 = nullptr;
            }
            else
                r12_2 = 1;
        }
        
        var_138 = *r15_1;
        
        if (rax_2)
        {
            int64_t rcx_24 = arg5[2];
            int64_t rsi_63;
            
            if (!rcx_24)
                rsi_63 = 0;
            else
                rsi_63 = *((rcx_24 << 4) + arg5[1] - 8) + 1;
            
            int64_t rsi_64 = rsi_63 + var_d0;
            uu_ls::dired::update_positions::h1dc8b030d29268c5(arg5, rsi_64, r15_1[2] + rsi_64);
        }
        
        var_118 = &var_138;
        int64_t (* var_110_5)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        void* var_108_4 = arg3 + 0xfa;
        int64_t (* var_100_4)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_178 = &data_428c70;
        int64_t var_170_20 = 2;
        int64_t var_158_18 = 0;
        void* const* var_168_20 = &var_118;
        int64_t var_160_18 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&var_e0, &var_178));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_138);
        
        if (!r12_2)
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c8);
    }
    var_118 = &var_e0;
    int64_t (* var_110_6)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_178 = &data_423c10;
    int64_t var_170_21 = 1;
    int64_t var_158_19 = 0;
    void* const* var_168_21 = &var_118;
    int64_t var_160_19 = 1;
    
    if (!std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_178))
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_e0);
        return nullptr;
    }
    
    int128_t* result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_e0);
    return result;
}
