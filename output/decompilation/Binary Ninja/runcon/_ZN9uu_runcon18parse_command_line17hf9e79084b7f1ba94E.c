
  uint64_t uu_runcon::parse_command_line::hf9e79084b7f1ba94(int64_t* arg1)

{
    void (* r14)() __noreturn = -0x8000000000000000;
    void (* var_2b8)() __noreturn;
    int64_t rdx;
    int64_t* rsi;
    clap_builder::builder::command::Command::try_get_matches_from::he4febe2e2d11f7c9(&var_2b8, rsi, 
        rdx);
    void (* rax)() __noreturn = var_2b8;
    int64_t var_2b0;
    
    if (-(rax) == -0x8000000000000000)
    {
        uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h5fa986a47c88d19f(var_2b0, 0x7d);
        arg1[1] = result;
        arg1[2] = &data_4eace8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int128_t var_2a4;
    int128_t var_1ec_1 = var_2a4;
    int128_t var_294;
    int128_t var_1dc_1 = var_294;
    int32_t var_284;
    int32_t var_1cc_1 = var_284;
    void (* var_200)() __noreturn = rax;
    int64_t var_1f8_1 = var_2b0;
    int32_t var_2a8;
    int32_t var_1f0_1 = var_2a8;
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_200, "computeARGrange: \nTry ' --help'…", 7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h2f0dacb574fc0bce(
        &var_2b8, &var_200);
    int64_t* rsi_2 = &var_2b8;
    void (* var_1c8)() __noreturn;
    clap_builder::parser::error::MatchesError::unwrap::hcb369db439fca05c(&var_1c8, rsi_2);
    void (* rax_2)() __noreturn = var_1c8;
    char* var_1c0;
    uint128_t var_1b8;
    int64_t* var_198;
    char const* const rcx_3;
    int64_t rdx_2;
    int128_t zmm0_2;
    uint128_t zmm1_1;
    
    if (!rax_2)
    {
        zmm0_2 = {0};
        zmm1_1 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_3 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_2 = core::ops::function::FnOnce::call_once::h0ea9a3512eb1b7d0;
        rdx_2 = 0;
    }
    else
    {
        rcx_3 = var_1c0;
        zmm1_1 = var_1b8;
        int128_t var_1a8;
        zmm0_2 = var_1a8;
        rsi_2 = var_198;
        int64_t var_190;
        rdx_2 = var_190;
    }
    
    void (* var_148)() __noreturn = rax_2;
    char const* const var_140_1 = rcx_3;
    int64_t var_110_1 = rdx_2;
    
    if (rax_1)
    {
        label_45ac71:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4);
        void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            "userSomedumb\x1b[5m\x1b[9m <= tr…", 4, &var_2b8);
        int64_t var_108;
        int64_t var_f8;
        
        if (!rax_7)
            var_108 = -0x8000000000000000;
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_7 + 8), *(rax_7 + 0x10));
            var_f8 = var_2a8;
            var_108 = var_2b8;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, "role) = Zero\x1b[7mBool", 4);
        void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            "role) = Zero\x1b[7mBool", 4, &var_2b8);
        int64_t var_218;
        int64_t var_208;
        
        if (!rax_9)
            var_218 = -0x8000000000000000;
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_9 + 8), *(rax_9 + 0x10));
            var_208 = var_2a8;
            var_218 = var_2b8;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, &data_418cd0, 4);
        void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            &data_418cd0, 4, &var_2b8);
        int64_t var_2d8;
        int64_t var_2c8;
        
        if (!rax_11)
            var_2d8 = -0x8000000000000000;
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_11 + 8), *(rax_11 + 0x10));
            var_2c8 = var_2a8;
            var_2d8 = var_2b8;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, "range: \nTry ' --help' for more …", 5);
        void* rax_13 = clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            "range: \nTry ' --help' for more …", 5, &var_2b8);
        
        if (!rax_13)
            var_1c8 = -0x8000000000000000;
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_13 + 8), *(rax_13 + 0x10));
            var_1b8 = var_2a8;
            var_1c8 = var_2b8;
        }
        
        void* rax_15 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h17cec20ae7398b16(&var_148);
        int128_t var_28;
        
        if (rax_15)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_15 + 8), *(rax_15 + 0x10));
            r14 = var_2b8;
            var_28 = var_2b0;
        }
        
        int128_t var_d0_1 = var_218;
        int64_t var_c0_1 = var_208;
        int128_t zmm0_7 = var_1c8;
        int64_t var_170_1 = var_1b8;
        int64_t var_180_1 = zmm0_7;
        var_198 = var_2d8;
        var_1c8 = var_108;
        char var_150_1 = rax_1;
        int32_t var_14f_1 = var_218;
        var_14f_1 = *var_218[3];
        core::iter::traits::iterator::Iterator::collect::hdb4a413cd924f414(&var_2d8, &var_148);
        int128_t var_230_1 = var_28;
        int128_t var_240_1 = r14;
        int128_t var_250_1 = *zmm0_7[8];
        int128_t var_260_1 = var_2c8;
        int128_t var_270_1 = var_198;
        int128_t var_280_1 = var_d0_1;
        var_294 = var_f8;
        var_2a4 = var_1c8;
        var_2b8 = var_2d8;
        var_2a8 = var_2c8;
        memcpy(arg1, &var_2b8, 0x98);
    }
    else
    {
        if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
                &var_200, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4))
            goto label_45ac71;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
                &var_200, "role) = Zero\x1b[7mBool", 4))
            goto label_45ac71;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
                &var_200, &data_418cd0, 4))
            goto label_45ac71;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
                &var_200, "range: \nTry ' --help' for more …", 5))
            goto label_45ac71;
        
        void* rax_26 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h17cec20ae7398b16(&var_148);
        int64_t var_2f8;
        
        if (!rax_26)
        {
            var_2f8 = -0x8000000000000000;
            label_45b14d:
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha987e9ec2f8e9af9(&var_2f8);
            *arg1 = 0;
            arg1[1] = 8;
            arg1[2] = 0;
            arg1[3] = -0x7fffffffffffffff;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_26 + 8), *(rax_26 + 0x10));
            int64_t rax_27 = var_2a8;
            var_2f8 = var_2b8;
            
            if (var_2f8 == -0x8000000000000000)
                goto label_45b14d;
            
            void* rax_28 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h17cec20ae7398b16(&var_148);
            void (* rax_29)() __noreturn;
            
            if (rax_28)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *(rax_28 + 8), *(rax_28 + 0x10));
                rax_29 = var_2b8;
            }
            
            int128_t var_88;
            
            if (rax_28 && rax_29 != -0x8000000000000000)
            {
                int64_t var_78_2 = rax_27;
                var_88 = var_2f8;
                int128_t var_70_2 = var_148;
                uint128_t var_60_2 = zmm1_1;
                int128_t var_50_2 = zmm0_2;
                int128_t var_40_2 = rsi_2;
                var_1c8 = rax_29;
                var_1c0 = var_2b0;
                uu_runcon::parse_command_line::_$u7b$$u7b$closure$u7d$$u7d$::h9385ddf6434ad80a(
                    &var_2b8, &var_88, &var_1c8);
                memcpy(arg1, &var_2b8, 0x98);
            }
            else
            {
                var_2b8 = 0xa;
                uint64_t rax_30 = alloc::boxed::Box$LT$T$GT$::new::h1127e89508eb0964(&var_2b8);
                var_88 = var_2f8;
                int64_t var_78_1 = rax_27;
                int128_t var_70_1 = var_148;
                uint128_t var_60_1 = zmm1_1;
                int128_t var_50_1 = zmm0_2;
                int128_t var_40_1 = rsi_2;
                arg1[1] = rax_30;
                arg1[2] = &data_4eac60;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_runcon..parse_command_line$LT$core..iter..adapters..cloned..Cloned$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hdf29c886f5faa993(&var_88);
            }
        }
    }
    
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hebcc24dacbba70cf(&var_200);
}
