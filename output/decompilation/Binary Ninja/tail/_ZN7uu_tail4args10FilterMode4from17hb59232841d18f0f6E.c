
  int64_t uu_tail::args::FilterMode::from::hb59232841d18f0f6(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "zero-terminatedbyteslinescannot …", 0xf);
    void** const var_d8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(&var_d8, 
        arg2, "byteslinescannot convert float s…", 5);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
        "byteslinescannot convert float s…", 5, &var_d8);
    int64_t result;
    int64_t result_2;
    int64_t rdx_2;
    int32_t var_a8;
    int64_t result_1;
    int128_t var_98;
    int128_t* var_88;
    int128_t var_78;
    uint64_t rax_4;
    
    if (!rax_1)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
            &var_d8, arg2, "linescannot convert float second…", 5);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
            "linescannot convert float second…", 5, &var_d8);
        
        if (!rax_2)
        {
            result = 0;
            result_2 = 0xa;
            rdx_2 = 0xa;
            
            if (rax)
                rdx_2 = 0;
        }
        else
        {
            uu_tail::args::parse_num::h777295376e2c5b82(&var_a8, *(rax_2 + 8), *(rax_2 + 0x10));
            
            if (var_a8 != 4)
            {
                int128_t var_68_2 = var_98;
                var_78 = var_a8;
                var_88 = &var_78;
                int64_t (* var_80_2)(int64_t arg1, int64_t* arg2) = _$LT$uucore..features..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he618d31d336be9c1;
                var_d8 = &data_572ee8;
                int64_t var_d0_2 = 1;
                int64_t var_b8_2 = 0;
                int128_t** var_c8_3 = &var_88;
                int64_t var_c0_2 = 1;
                int128_t var_40;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_40, &var_d8);
                var_c0_2 = 1;
                var_d8 = var_40;
                int64_t var_30;
                int64_t var_c8_4 = var_30;
                rax_4 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_d8);
                goto label_49ee5d;
            }
            
            result = result_1;
            result_2 = var_98;
            rdx_2 = 0xa;
            
            if (rax)
                rdx_2 = 0;
        }
    }
    else
    {
        uu_tail::args::parse_num::h777295376e2c5b82(&var_a8, *(rax_1 + 8), *(rax_1 + 0x10));
        
        if (var_a8 != 4)
        {
            int128_t var_68_1 = var_98;
            var_78 = var_a8;
            var_88 = &var_78;
            int64_t (* var_80_1)(int64_t arg1, int64_t* arg2) = _$LT$uucore..features..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he618d31d336be9c1;
            var_d8 = &data_572ec8;
            int64_t var_d0_1 = 2;
            int64_t var_b8_1 = 0;
            int128_t** var_c8_1 = &var_88;
            int64_t var_c0_1 = 1;
            int128_t var_58;
            core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_58, &var_d8);
            var_c0_1 = 1;
            var_d8 = var_58;
            int64_t var_48;
            int64_t var_c8_2 = var_48;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_d8);
            label_49ee5d:
            arg1[1] = rax_4;
            arg1[2] = &data_572f18;
            *arg1 = 5;
            return core::ptr::drop_in_place$LT$uucore..features..parser..parse_size..ParseSizeError$GT$::hd5c1a77d921c35e8(&var_78);
        }
        
        result_2 = result_1;
        rdx_2 = var_98;
        result = 4;
    }
    *arg1 = result;
    arg1[1] = result_2;
    arg1[2] = rdx_2;
    return result;
}
