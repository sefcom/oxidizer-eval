
  int64_t* uu_ptx::WordFilter::new::h834513af9e48d5ee(int64_t* arg1, void* arg2, void* arg3)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "only-filereferenceswidth", 9);
    char const (** const var_188)[0xc];
    char const (** var_148)[0xc];
    int64_t var_140;
    int64_t var_138;
    int128_t var_130;
    int64_t var_120;
    int128_t var_108;
    int64_t var_f8_1;
    int64_t rax_1;
    char const (** rcx)[0xc];
    int64_t rdx;
    
    if (!rax)
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&var_188);
        rcx = var_188;
        int64_t var_180;
        rax_1 = var_180;
        int64_t var_178;
        rdx = var_178;
        int128_t var_170;
        var_108 = var_170;
        int64_t var_160;
        var_f8_1 = var_160;
        label_5b5b7e:
        char const (** var_98)[0xc] = rcx;
        int64_t var_90_1 = rax_1;
        int128_t zmm0_1 = var_108;
        int64_t var_70_1 = var_f8_1;
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            arg2, "ignore-fileonly-filereferenceswi…", 0xb);
        int64_t var_f8_2;
        int64_t rax_4;
        char const (** rcx_1)[0xc];
        int64_t rdx_1;
        
        if (!rax_3)
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&var_188);
            rcx_1 = var_188;
            rax_4 = var_180;
            rdx_1 = var_178;
            var_108 = var_170;
            var_f8_2 = var_160;
            label_5b5c5a:
            char const (** var_68)[0xc] = rcx_1;
            int64_t var_60_1 = rax_4;
            int128_t zmm0_2 = var_108;
            int64_t var_40_1 = var_f8_2;
            char rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "break-fileignore-caseignore-file…", 0xa);
            char rax_7;
            
            if (rax_6)
                rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "word-regexpbreak-fileignore-case…", 0xb);
            
            char const (** var_c8)[0xc];
            int128_t var_c0;
            int128_t var_b0;
            
            if (rax_6 && !rax_7)
            {
                uu_ptx::read_char_filter_file::hb5c562555cafe5d8(&var_188, arg2);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd4e54632205870f7(&var_148, &var_188);
                char const (** rdx_3)[0xc] = var_148;
                
                if (rdx_3)
                {
                    int64_t var_e0_1 = var_120;
                    int128_t var_f0_1 = var_130;
                    var_108 = rdx_3;
                    *var_108[8] = var_140;
                    int64_t var_f8_3 = var_138;
                    
                    if (!*(arg3 + 0x58))
                        _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h72643febd655a837(&var_148);
                    else
                    {
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h78c5b7e8cc9844e2(&var_188);
                        var_130 = var_170;
                        var_138 = var_178;
                        var_148 = var_188;
                    }
                    
                    var_170 = var_f0_1;
                    var_178 = var_f8_3;
                    var_188 = var_108;
                    _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h5ce7b6f887806e63(&var_148, &var_188);
                    var_c8 = var_148;
                    var_c0 = var_138;
                    var_b0 = var_130;
                    goto label_5b5ce3;
                }
                
                arg1[1] = var_140;
                arg1[2] = var_138;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_68);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_98);
            }
            else
            {
                var_c8 = nullptr;
                label_5b5ce3:
                char rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "word-regexpbreak-fileignore-case…", 0xb);
                void* rax_9;
                
                if (rax_8)
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_188, arg2, "word-regexpbreak-fileignore-case…", 0xb);
                    rax_9 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
                        "word-regexpbreak-fileignore-case…", 0xb, &var_188);
                }
                
                int128_t var_d8_1;
                char const (** const rax_11)[0xc];
                char rcx_2;
                
                if (!rax_8 || !rax_9 || !*(rax_9 + 0x10))
                {
                    char const (** rax_10)[0xc] = var_c8;
                    
                    if (!rax_10)
                    {
                        if (!*(arg3 + 0x58))
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_188, "[^ \t\n]+", 7);
                        else
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_188, "\w+parsing options failed!src/uu…", 3);
                        
                        goto label_5b5f3b;
                    }
                    
                    int64_t var_a0;
                    int64_t var_120_1 = var_a0;
                    int128_t var_130_1 = var_b0;
                    var_140 = var_c0;
                    var_148 = rax_10;
                    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h288b3fee388f1b9b(&var_188, &var_148);
                    var_148 = var_188;
                    var_138 = var_178;
                    var_130_1 = var_170;
                    int128_t var_158;
                    int128_t var_118_1 = var_158;
                    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::hbea44346f7b7ebb1(&var_108, &var_148);
                    int128_t* var_38 = &var_108;
                    int64_t (* var_30_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_188 = &data_6edb98;
                    int64_t var_180_1 = 2;
                    *var_170[8] = 0;
                    int128_t** var_178_1 = &var_38;
                    var_170 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&var_148, 
                        &var_188);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                        &var_108);
                    rax_11 = var_148;
                    var_d8_1 = var_140;
                    rcx_2 = 0;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_188, rax_9);
                    label_5b5f3b:
                    rax_11 = var_188;
                    var_d8_1 = var_180;
                    rcx_2 = 1;
                }
                
                int128_t zmm0_4 = var_98;
                *(arg1 + 0x38) = zmm0_1;
                *(arg1 + 0x28) = rdx;
                *(arg1 + 0x18) = zmm0_4;
                *(arg1 + 0x48) = var_68;
                *(arg1 + 0x58) = rdx_1;
                *(arg1 + 0x68) = zmm0_2;
                *arg1 = rax_11;
                *(arg1 + 8) = var_d8_1;
                arg1[0xf] = rax;
                *(arg1 + 0x79) = rax_3;
                
                if (rcx_2)
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&var_c8);
            }
        }
        else
        {
            uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&var_188, arg2, 
                "ignore-fileonly-filereferenceswi…", 0xb);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&var_148, &var_188);
            rcx_1 = var_148;
            rax_4 = var_140;
            rdx_1 = var_138;
            
            if (rcx_1)
            {
                var_f8_2 = var_120;
                var_108 = var_130;
                goto label_5b5c5a;
            }
            
            arg1[1] = rax_4;
            arg1[2] = rdx_1;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_98);
        }
    }
    else
    {
        uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&var_188, arg2, 
            "only-filereferenceswidth", 9);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&var_148, &var_188);
        rcx = var_148;
        rax_1 = var_140;
        rdx = var_138;
        
        if (rcx)
        {
            var_f8_1 = var_120;
            var_108 = var_130;
            goto label_5b5b7e;
        }
        
        arg1[1] = rax_1;
        arg1[2] = rdx;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
