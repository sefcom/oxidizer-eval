
  uint64_t uu_fmt::extract_width::h7438790f5cc9b932(int64_t* arg1, void* arg2)

{
    char var_a8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(&var_a8, 
        arg2, "width(uutils coreutils) 0.0.30Re…", 5);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
        "width(uutils coreutils) 0.0.30Re…", 5, &var_a8);
    uint64_t result;
    uint64_t result_1;
    
    if (!rax)
    {
        char rax_1;
        int64_t rdx_2;
        rax_1 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
            arg2, "filesa negative number should be…", 5);
        int64_t r13_1 = 8;
        
        if (!(rax_1 & rdx_2 == 1))
            result = 0;
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(
                &var_a8, arg2, "filesa negative number should be…", 5);
            void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
                "filesa negative number should be…", 5, &var_a8);
            
            if (!rax_2)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_a8 = 0;
            char* rax_4;
            int64_t rdx_5;
            rax_4 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_a8), 
                *(rax_2 + 8), *(rax_2 + 0x10));
            
            if (!rax_4)
                result = 0;
            else
            {
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_a8, 
                    rax_4, rdx_5);
                result = result_1;
                arg1[1] = var_a8 ^ 1;
                r13_1 = 0x10;
            }
        }
        
        *(arg1 + r13_1) = result;
        *arg1 = 0;
    }
    else
    {
        char* r14_1 = *(rax + 8);
        int64_t r15_1 = *(rax + 0x10);
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_a8, r14_1, 
            r15_1);
        
        if (!var_a8)
        {
            result = result_1;
            arg1[1] = 1;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            int64_t var_68 = 0;
            char* var_60_1 = r14_1;
            int64_t var_58_1 = r15_1;
            char var_50_1 = 1;
            int64_t* var_78 = &var_68;
            int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a8 = &data_4f0928;
            int64_t var_a0 = 1;
            int64_t var_88_1 = 0;
            int64_t** var_98_1 = &var_78;
            int64_t var_90_1 = 1;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::h974ccb46cc19ceac(&var_48, &var_a8);
            int32_t var_30_1 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_48);
            arg1[1] = result;
            arg1[2] = &data_4f0720;
            *arg1 = 1;
        }
    }
    return result;
}
