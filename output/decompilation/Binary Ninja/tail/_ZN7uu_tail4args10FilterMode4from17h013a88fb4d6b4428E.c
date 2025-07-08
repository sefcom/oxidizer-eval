
  int64_t uu_tail::args::FilterMode::from::h013a88fb4d6b4428(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "zero-terminatedcannot convert fl…", 0xf);
    char const (** const var_d8)[0x98];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&var_d8, 
        arg2, "bytesinvalid number of bytes: ''…", 5);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
        "bytesinvalid number of bytes: ''…", 5, &var_d8);
    int64_t result;
    int64_t result_2;
    int64_t rdx_2;
    int32_t var_a8;
    int64_t result_1;
    int128_t var_98;
    int128_t* var_88;
    int128_t var_78;
    int128_t* rax_4;
    
    if (!rax_1)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
            &var_d8, arg2, "linesinvalid number of lines: ze…", 5);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
            "linesinvalid number of lines: ze…", 5, &var_d8);
        
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
            uu_tail::args::parse_num::hf0843dd0db285fb1(&var_a8, *(rax_2 + 8), *(rax_2 + 0x10));
            
            if (var_a8 != 3)
            {
                int128_t var_68_2 = var_98;
                var_78 = var_a8;
                var_88 = &var_78;
                int64_t (* var_80_2)(int64_t arg1, void* arg2) = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
                var_d8 = &data_5bb380;
                int64_t var_d0_2 = 1;
                int64_t var_b8_2 = 0;
                int128_t** var_c8_3 = &var_88;
                int64_t var_c0_2 = 1;
                int128_t var_40;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_40, &var_d8);
                var_c0_2 = 1;
                var_d8 = var_40;
                int64_t var_30;
                int64_t var_c8_4 = var_30;
                rax_4 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_d8);
                goto label_4f8c6d;
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
        uu_tail::args::parse_num::hf0843dd0db285fb1(&var_a8, *(rax_1 + 8), *(rax_1 + 0x10));
        
        if (var_a8 != 3)
        {
            int128_t var_68_1 = var_98;
            var_78 = var_a8;
            var_88 = &var_78;
            int64_t (* var_80_1)(int64_t arg1, void* arg2) = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
            var_d8 = &data_5bb360;
            int64_t var_d0_1 = 2;
            int64_t var_b8_1 = 0;
            int128_t** var_c8_1 = &var_88;
            int64_t var_c0_1 = 1;
            int128_t var_58;
            core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_58, &var_d8);
            var_c0_1 = 1;
            var_d8 = var_58;
            int64_t var_48;
            int64_t var_c8_2 = var_48;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_d8);
            label_4f8c6d:
            arg1[1] = rax_4;
            arg1[2] = &data_5bb3c8;
            *arg1 = 5;
            return core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h26b9fa8eae44921d(&var_78);
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
