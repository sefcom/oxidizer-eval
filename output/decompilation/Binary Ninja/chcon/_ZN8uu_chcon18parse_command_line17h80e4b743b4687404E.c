
  int64_t uu_chcon::parse_command_line::h80e4b743b4687404(int64_t* arg1)

{
    void** const var_238;
    int64_t rdx;
    int64_t* rsi;
    clap_builder::builder::command::Command::try_get_matches_from::h74c3fe6b7768e9bb(&var_238, rsi, 
        rdx);
    void** const rcx = var_238;
    int64_t result;
    
    if (-(rcx) == -0x8000000000000000)
    {
        arg1[1] = 0xe;
        arg1[2] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_208;
    int64_t var_190_1 = var_208;
    int128_t var_218;
    int128_t var_1a0_1 = var_218;
    int128_t var_228;
    int128_t var_1b0_1 = var_228;
    void** const var_1c0 = rcx;
    int64_t result_1 = result;
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_1c0, "verbosereferencerangerecursivefo…", 7);
    char var_23c_1;
    char const (** const var_168)[0xbe];
    int128_t var_158;
    char r14_1;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_1c0, "recursivefollow-arg-dir-sym-link…", 9))
    {
        r14_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "no-dereferencepreserve-root(uuti…", 0xe) ^ 1;
        var_23c_1 = 0;
        label_45c6d8:
        char rax_7 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "preserve-root(uutils coreutils) …", 0xd);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc5f2a3eca716ea62(
            &var_238, &var_1c0);
        clap_builder::parser::error::MatchesError::unwrap::hec60d137fbc4d6ef(&var_168, &var_238);
        int128_t var_148;
        int128_t var_138;
        void (* var_c8)() __noreturn;
        
        if (!var_168)
        {
            var_c8 = core::ops::function::FnOnce::call_once::he5068d866819ed9a;
            char const* const var_c0_1 = "/home/34r7hm4n/.cargo/registry/s…";
            char const* const var_b8_1 = "/home/34r7hm4n/.cargo/registry/s…";
            int64_t var_b0_1 = 0;
            int64_t var_a0_1 = 0;
            int64_t var_90_1 = 0;
        }
        else
        {
            int128_t var_98_1 = var_138;
            int128_t var_a8_1 = var_148;
            int64_t var_b8;
            var_b8 = var_158;
            var_c8 = var_168;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(
            &var_238, &var_1c0, "referencerangerecursivefollow-ar…", 9);
        void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
            "referencerangerecursivefollow-ar…", 9, &var_238);
        int128_t var_188;
        int64_t var_178;
        int64_t var_160;
        int128_t var_128;
        int128_t var_118;
        char const (** rax_10)[0xbe];
        
        if (!rax_8)
        {
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4))
            {
                label_45c8b4:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4);
                void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    "userSomedumb\x1b[5m\x1b[9m <= tr…", 4, &var_238);
                int64_t var_108;
                int64_t var_f8;
                
                if (!rax_15)
                    var_108 = -0x8000000000000000;
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *(rax_15 + 8), *(rax_15 + 0x10));
                    var_f8 = var_228;
                    var_108 = var_238;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, "role) = Zero\x1b[7mBool", 4);
                void* rax_21 = clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    "role) = Zero\x1b[7mBool", 4, &var_238);
                int64_t var_e8;
                int64_t var_d8;
                
                if (!rax_21)
                    var_e8 = -0x8000000000000000;
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *(rax_21 + 8), *(rax_21 + 0x10));
                    var_d8 = var_228;
                    var_e8 = var_238;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, &data_419360, 4);
                void* rax_23 = clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    &data_419360, 4, &var_238);
                
                if (!rax_23)
                    var_188 = -0x8000000000000000;
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *(rax_23 + 8), *(rax_23 + 0x10));
                    var_178 = var_228;
                    var_188 = var_238;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, "rangerecursivefollow-arg-dir-sym…", 5);
                void* rax_25 = clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    "rangerecursivefollow-arg-dir-sym…", 5, &var_238);
                void** const rcx_2 = -0x8000000000000000;
                int128_t var_88;
                
                if (rax_25)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *(rax_25 + 8), *(rax_25 + 0x10));
                    rcx_2 = var_238;
                    var_88 = result;
                }
                
                var_158 = var_f8;
                var_168 = var_108;
                var_158 = var_e8;
                *var_148[8] = var_d8;
                var_138 = var_188;
                var_128 = var_178;
                *var_128[8] = rcx_2;
                var_118 = var_88;
                goto label_45cc89;
            }
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, "role) = Zero\x1b[7mBool", 4))
                goto label_45c8b4;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, &data_419360, 4))
                goto label_45c8b4;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, "rangerecursivefollow-arg-dir-sym…", 5))
                goto label_45c8b4;
            
            void* rax_35 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7a165e3d750885e(&var_c8);
            
            if (rax_35)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *(rax_35 + 8), *(rax_35 + 0x10));
                *var_158[8] = var_228;
                var_160 = var_238;
                rax_10 = -0x8000000000000002;
                goto label_45c807;
            }
            
            arg1[1] = 0xa;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *(rax_8 + 8), *(rax_8 + 0x10));
            *var_158[8] = var_228;
            var_160 = var_238;
            rax_10 = -0x8000000000000001;
            label_45c807:
            var_168 = rax_10;
            label_45cc89:
            core::iter::traits::iterator::Iterator::collect::hc92e52921e991262(&var_188, &var_c8);
            
            if (!var_178)
            {
                arg1[1] = 0xb;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hfed6b9b34b8c787e(&var_188);
                core::ptr::drop_in_place$LT$uu_chcon..CommandLineMode$GT$::hb5c779bffb711795(
                    &var_168);
            }
            else
            {
                var_228 = var_168;
                var_228 = var_178;
                int128_t zmm0_9 = var_188;
                var_238 = zmm0_9;
                *arg1 = zmm0_9;
                *(arg1 + 0x20) = var_158;
                *(arg1 + 0x30) = var_208;
                *(arg1 + 0x40) = var_148;
                *(arg1 + 0x50) = var_138;
                *(arg1 + 0x60) = var_128;
                arg1[2] = var_228;
                arg1[3] = *var_228[8];
                arg1[0xe] = *var_118[8];
                arg1[0xf] = rax_1;
                *(arg1 + 0x79) = rax_7;
                *(arg1 + 0x7a) = r14_1;
                *(arg1 + 0x7b) = var_23c_1;
            }
        }
    }
    else
    {
        int64_t var_230;
        int64_t rax_5;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "follow-dir-sym-linksno-follow-sy…", 0x14))
        {
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_1c0, "follow-arg-dir-sym-linkfollow-di…", 0x17))
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_1c0, "no-dereferencepreserve-root(uuti…", 0xe))
                {
                    r14_1 = 1;
                    var_23c_1 = 3;
                    goto label_45c6d8;
                }
                
                var_168 = &uu_chcon::options::RECURSIVE::h433a04139793bdf7;
                int64_t (* var_160_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
                var_158 = &uu_chcon::options::dereference::NO_DEREFERENCE::hc7d4d7bee8a13a98;
                *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
                var_238 = &data_4ef4f0;
                var_230 = 3;
                var_218 = 0;
                var_228 = &var_168;
                *var_228[8] = 2;
                int128_t var_60;
                core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_60, &var_238);
                *var_238[4] = var_60;
                int64_t var_50;
                rax_5 = var_50;
                goto label_45ca86;
            }
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_1c0, "dereferenceno-dereferencepreserv…", 0xb))
            {
                var_23c_1 = 1;
                r14_1 = 0;
                goto label_45c6d8;
            }
            
            var_168 = &uu_chcon::options::RECURSIVE::h433a04139793bdf7;
            int64_t (* var_160_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
            var_158 = &uu_chcon::options::dereference::DEREFERENCE::h91753ff18563b15f;
            *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
            var_238 = &data_4ef520;
            var_230 = 3;
            var_218 = 0;
            var_228 = &var_168;
            *var_228[8] = 2;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_48, &var_238);
            *var_238[4] = var_48;
            int64_t var_38;
            rax_5 = var_38;
            goto label_45ca86;
        }
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "no-dereferencepreserve-root(uuti…", 0xe))
        {
            r14_1 = 1;
            var_23c_1 = 2;
            goto label_45c6d8;
        }
        
        var_168 = &uu_chcon::options::RECURSIVE::h433a04139793bdf7;
        int64_t (* var_160_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
        var_158 = &uu_chcon::options::dereference::NO_DEREFERENCE::hc7d4d7bee8a13a98;
        *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
        var_238 = &data_4ef4f0;
        var_230 = 3;
        var_218 = 0;
        var_228 = &var_168;
        *var_228[8] = 2;
        int128_t var_78;
        core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_78, &var_238);
        *var_238[4] = var_78;
        int64_t var_68;
        rax_5 = var_68;
        label_45ca86:
        *var_228[4] = rax_5;
        arg1[1] = 0xd;
        *(arg1 + 0xc) = var_238;
        arg1[3] = var_230;
        arg1[4] = *var_228[4];
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h64662adfe54568ce(&var_1c0);
}
