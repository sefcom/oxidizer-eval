
  int64_t* uu_ptx::WordFilter::new::h59c276fe1fe77d78(int64_t* arg1, void* arg2, void* arg3)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "only-filereferenceswidthProduce …", 9);
    char const (** var_198)[0xc];
    int64_t var_190;
    int64_t var_188;
    int128_t var_180;
    int64_t var_170;
    char const (** const var_160)[0xc];
    int128_t var_118;
    int64_t var_108_1;
    int64_t rax_1;
    char const (** rcx)[0xc];
    int64_t rdx;
    
    if (!rax)
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_160);
        rcx = var_160;
        int64_t var_158;
        rax_1 = var_158;
        int64_t var_150;
        rdx = var_150;
        int128_t var_148;
        var_118 = var_148;
        int64_t var_138;
        var_108_1 = var_138;
        label_52ae05:
        char const (** var_98)[0xc] = rcx;
        int64_t var_90_1 = rax_1;
        int128_t zmm0_1 = var_118;
        int64_t var_70_1 = var_108_1;
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "ignore-fileonly-filereferenceswi…", 0xb);
        int128_t var_e8_1;
        int64_t var_d8_1;
        int64_t rax_4;
        char const (** const rcx_1)[0xc];
        int64_t rdx_1;
        
        if (!rax_3)
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_160);
            rcx_1 = var_160;
            rax_4 = var_158;
            rdx_1 = var_150;
            var_e8_1 = var_148;
            var_d8_1 = var_138;
            label_52aee8:
            var_118 = rcx_1;
            *var_118[8] = rax_4;
            int128_t var_100_1 = var_e8_1;
            int64_t var_f0_1 = var_d8_1;
            char rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "break-fileignore-caseignore-file…", 0xa);
            char rax_7;
            
            if (rax_6)
                rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "word-regexpbreak-fileignore-case…", 0xb);
            
            int64_t var_1a0;
            int128_t var_b8;
            char const (** r13_1)[0xc];
            
            if (rax_6 && !rax_7)
            {
                uu_ptx::read_char_filter_file::h30a1eb8166058cdf(&var_160, arg2);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0abb8a3182b98a1e(&var_198, &var_160);
                char const (** r15_1)[0xc] = var_198;
                int64_t r13_2 = var_188;
                
                if (r15_1)
                {
                    var_b8 = var_180;
                    
                    if (!*(arg3 + 0x58))
                        core::iter::traits::iterator::Iterator::collect::hd1811649b283122b(
                            &var_198);
                    else
                    {
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_160);
                        var_180 = var_148;
                        var_188 = var_150;
                        var_198 = var_160;
                    }
                    
                    var_160 = r15_1;
                    var_158 = var_190;
                    int64_t var_150_2 = r13_2;
                    var_148 = var_b8;
                    int64_t var_138_1 = var_170;
                    _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h63ed1ea3c5d8bb53(&var_198, &var_160);
                    r13_1 = var_198;
                    var_1a0 = var_190;
                    var_e8_1 = var_188;
                    var_d8_1 = var_180;
                    goto label_52af68;
                }
                
                arg1[1] = var_190;
                arg1[2] = r13_2;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_118);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_98);
            }
            else
            {
                r13_1 = nullptr;
                label_52af68:
                int128_t var_c8_1;
                char const (** const rax_10)[0xc];
                char rcx_4;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "word-regexpbreak-fileignore-case…", 0xb))
                {
                    label_52afd9:
                    
                    if (!r13_1)
                    {
                        if (!*(arg3 + 0x58))
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_160, "[^ \t\n]+", 7);
                        else
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_160, "\w+parsing options failed!src/uu…", 3);
                        
                        rax_10 = var_160;
                        var_c8_1 = var_158;
                        rcx_4 = 0;
                    }
                    else
                    {
                        var_180 = var_d8_1;
                        var_188 = var_e8_1;
                        var_198 = r13_1;
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h274845dfeb82bebf(&var_160, &var_198);
                        core::iter::traits::iterator::Iterator::collect::hb57575b27e9774e8(
                            &var_198, &var_160);
                        regex::escape::h01066032b9834fd0(&var_b8, var_1a0, var_188);
                        int128_t* var_68 = &var_b8;
                        int64_t (* var_60_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_160 = &data_651748;
                        int64_t var_158_1 = 2;
                        *var_148[8] = 0;
                        int128_t** var_150_1 = &var_68;
                        var_148 = 1;
                        char const (** var_48)[0xc];
                        core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(&var_48, 
                            &var_160);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                            &var_b8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                            &var_198);
                        rax_10 = var_48;
                        int128_t var_40;
                        var_c8_1 = var_40;
                        rcx_4 = 1;
                    }
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_160, arg2, "word-regexpbreak-fileignore-case…", 0xb);
                    void* rax_9 =
                        clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                        "word-regexpbreak-fileignore-case…", 0xb, &var_160);
                    
                    if (!rax_9 || !*(rax_9 + 0x10))
                        goto label_52afd9;
                    
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_160, rax_9);
                    rax_10 = var_160;
                    
                    if (-(rax_10) == -0x8000000000000000)
                        goto label_52afd9;
                    
                    var_c8_1 = var_158;
                    rcx_4 = 0;
                }
                
                int128_t zmm0_3 = var_98;
                *(arg1 + 0x38) = zmm0_1;
                *(arg1 + 0x28) = rdx;
                *(arg1 + 0x18) = zmm0_3;
                *(arg1 + 0x48) = var_118;
                *(arg1 + 0x58) = rdx_1;
                *(arg1 + 0x68) = var_100_1;
                *arg1 = rax_10;
                *(arg1 + 8) = var_c8_1;
                arg1[0xf] = rax;
                *(arg1 + 0x79) = rax_3;
                rax_10 = !r13_1;
                rax_10 |= rcx_4;
                
                if (!rax_10)
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$::h00e7b9e2310a38fd(r13_1, var_1a0);
            }
        }
        else
        {
            uu_ptx::read_word_filter_file::h6d54f7ff60ca3df7(&var_160, arg2, 
                "ignore-fileonly-filereferenceswi…", 0xb);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0abb8a3182b98a1e(&var_198, &var_160);
            rcx_1 = var_198;
            rax_4 = var_190;
            rdx_1 = var_188;
            
            if (rcx_1)
            {
                var_d8_1 = var_170;
                var_e8_1 = var_180;
                goto label_52aee8;
            }
            
            arg1[1] = rax_4;
            arg1[2] = rdx_1;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_98);
        }
    }
    else
    {
        uu_ptx::read_word_filter_file::h6d54f7ff60ca3df7(&var_160, arg2, 
            "only-filereferenceswidthProduce …", 9);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0abb8a3182b98a1e(&var_198, &var_160);
        rcx = var_198;
        rax_1 = var_190;
        rdx = var_188;
        
        if (rcx)
        {
            var_108_1 = var_170;
            var_118 = var_180;
            goto label_52ae05;
        }
        
        arg1[1] = rax_1;
        arg1[2] = rdx;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
