
  int64_t* uu_df::Options::from::h9a68833b14202507(int64_t* arg1, void* arg2)

{
    int128_t var_138;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(
        &var_138, arg2, &data_40be9c[8], 4);
    int64_t var_c8;
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&var_c8, &data_40be9c[8], 
        4, &var_138);
    int64_t var_170;
    int128_t var_128;
    int128_t var_118;
    int128_t var_b8;
    int128_t var_a8;
    int128_t var_98;
    
    if (!var_c8)
        var_170 = -0x8000000000000000;
    else
    {
        int128_t var_108_1 = var_98;
        var_118 = var_a8;
        var_128 = var_b8;
        var_138 = var_c8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7ac0ca4ae1fc3b40(&var_170, &var_138);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(
        &var_138, arg2, "exclude-typesourcefstypeitotaliu…", 0xc);
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&var_c8, 
        "exclude-typesourcefstypeitotaliu…", 0xc, &var_138);
    int64_t var_188;
    int64_t var_178;
    int64_t var_160;
    int128_t var_e8;
    int64_t var_d8;
    
    if (!var_c8)
    {
        var_188 = -0x8000000000000000;
        label_4c6073:
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "localno-syncoutputpathsportabili…", 5);
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "allblocksizetotalhuman-readable-…", 3);
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "synctypeSizeCyanTYPE"`$\EADVlofs…", 4);
        int32_t var_158;
        uu_df::blocks::read_block_size::h03278a4ead33fd1d(&var_158, arg2);
        int128_t var_148;
        int64_t var_f0_1;
        
        if (var_158 != 3)
        {
            var_b8 = var_148;
            var_c8 = var_158;
            uu_df::Options::from::_$u7b$$u7b$closure$u7d$$u7d$::h9de0386ab5ed2208(&var_e8, arg2, 
                &var_c8);
            int64_t rax_6 = var_e8;
            int64_t rcx_3 = *var_e8[8];
            
            if (rax_6 == 5)
            {
                var_f0_1 = rcx_3;
                goto label_4c6141;
            }
            
            *(arg1 + 0x18) = var_d8;
            arg1[1] = rax_6;
            arg1[2] = rcx_3;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_188);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_170);
        }
        else
        {
            int64_t var_150;
            var_f0_1 = var_150;
            label_4c6141:
            char var_18c_1 = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "human-readable-binaryhuman-reada…", 0x15) && !
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "human-readable-decimalinodesloca…", 0x16))
            {
                var_18c_1 = 2;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "portabilityprint-typeexclude-typ…", 0xb))
                {
                    int64_t rcx_6;
                    rcx_6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, "outputpathsportabilityprint-type…", 6) == 2;
                    var_18c_1 = rcx_6 * 3;
                }
            }
            
            char r13_1 = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "human-readable-binaryhuman-reada…", 0x15))
                r13_1 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "human-readable-decimalinodesloca…", 0x16) ^ 1) * 2;
            
            int128_t var_88 = var_170;
            int128_t var_68 = var_188;
            char rax_16 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "totalhuman-readable-binaryhuman-…", 5);
            uu_df::columns::Column::from_matches::h15f1a0d2790b5397(&var_e8, arg2);
            int128_t zmm0_8;
            
            if (!var_e8)
            {
                int64_t var_d0;
                var_148 = var_d0;
                var_158 = var_e8;
                label_4c62f7:
                int64_t rax_19 = var_148;
                int64_t var_38_2 = rax_19;
                zmm0_8 = var_158;
                int128_t var_48_3 = zmm0_8;
                var_138 = zmm0_8;
                var_128 = rax_19;
                var_128 = var_88;
                *var_118[8] = var_160;
                int128_t zmm1_4 = var_68;
                int128_t var_108_3 = zmm1_4;
                int64_t var_f8_1 = var_178;
                arg1[8] = var_178;
                *(arg1 + 0x30) = zmm1_4;
                arg1[4] = var_118;
                arg1[5] = *var_118[8];
                arg1[2] = var_128;
                arg1[3] = *var_128[8];
                *arg1 = zmm0_8;
                arg1[9] = var_f0_1;
                arg1[0xa] = rax_2;
                *(arg1 + 0x51) = rax_3;
                *(arg1 + 0x52) = rax_4;
                *(arg1 + 0x53) = rax_16;
                *(arg1 + 0x54) = r13_1;
                *(arg1 + 0x55) = var_18c_1;
            }
            else
            {
                core::ops::function::FnOnce::call_once::hd7cb1b151e127991(&var_c8, &*var_e8[8]);
                int64_t rax_17 = var_c8;
                int128_t var_c0;
                var_158 = var_c0;
                var_148 = *var_b8[8];
                
                if (rax_17 == 5)
                    goto label_4c62f7;
                
                int64_t rcx_8 = var_148;
                int64_t var_38_1 = rcx_8;
                zmm0_8 = var_158;
                int128_t var_48_2 = zmm0_8;
                arg1[4] = rcx_8;
                *(arg1 + 0x10) = zmm0_8;
                arg1[1] = rax_17;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_68);
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_88);
            }
        }
    }
    else
    {
        int128_t var_108_2 = var_98;
        var_118 = var_a8;
        var_138 = var_c8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h88abd33993a73e4c(&var_e8, &var_138);
        var_188 = var_e8;
        var_178 = var_d8;
        
        if (var_170 == -0x8000000000000000 || var_188 == -0x8000000000000000)
            goto label_4c6073;
        
        int64_t var_180;
        int64_t var_168;
        uu_df::Options::get_intersected_types::haafdf2c96660658e(&var_138, var_168, var_160, 
            var_180, var_178);
        
        if (var_138 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_138);
            goto label_4c6073;
        }
        
        arg1[4] = var_b8;
        *(arg1 + 0x10) = var_138;
        arg1[1] = 4;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_188);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_170);
    }
    return arg1;
}
