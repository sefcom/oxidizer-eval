
  fn uu_df::Options::from::h9a68833b14202507(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_138: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(
        &var_138, arg2, &data_40be9c[8], 4);
    let mut var_c8: i64;
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&var_c8, &data_40be9c[8], 
        4, &var_138);
    let mut var_170: i64;
    let mut var_128: i128;
    let mut var_118: i128;
    let mut var_b8: i128;
    let var_a8: i128;
    let var_98: i128;
    
    if var_c8 == 0
    {
        var_170 = -0x8000000000000000;
    }
    else
    {
        let var_108_1: i128 = var_98;
        var_118 = var_a8;
        var_128 = var_b8;
        var_138 = var_c8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7ac0ca4ae1fc3b40(&var_170, &var_138);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(
        &var_138, arg2, "exclude-typesourcefstypeitotaliu…", 0xc);
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&var_c8, 
        "exclude-typesourcefstypeitotaliu…", 0xc, &var_138);
    let mut var_188: i64;
    let mut var_178: i64;
    let var_160: i64;
    let mut var_e8: i128;
    let var_d8: i64;
    
    if var_c8 == 0
    {
        var_188 = -0x8000000000000000;
        'label_4c6073:
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "localno-syncoutputpathsportabili…", 5);
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "allblocksizetotalhuman-readable-…", 3);
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "synctypeSizeCyanTYPE"`$\EADVlofs…", 4);
        let mut var_158: i32;
        uu_df::blocks::read_block_size::h03278a4ead33fd1d(&var_158, arg2);
        let mut var_148: i128;
        let mut var_f0_1: i64;
        
        if var_158 != 3
        {
            var_b8 = var_148;
            var_c8 = var_158;
            uu_df::Options::from::_$u7b$$u7b$closure$u7d$$u7d$::h9de0386ab5ed2208(&var_e8, arg2, 
                &var_c8);
            let rax_6: i64 = var_e8;
            let rcx_3: i64 = *var_e8[8];
            
            if rax_6 == 5
            {
                var_f0_1 = rcx_3;
                goto 'label_4c6141;
            }
            
            *arg1.byte_offset(0x18) = var_d8;
            arg1[1] = rax_6;
            arg1[2] = rcx_3;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_188);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_170);
        }
        else
        {
            let var_150: i64;
            var_f0_1 = var_150;
            'label_4c6141:
            let mut var_18c_1: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "human-readable-binaryhuman-reada…", 0x15) == 0 &&
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "human-readable-decimalinodesloca…", 0x16) == 0
            {
                var_18c_1 = 2;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "portabilityprint-typeexclude-typ…", 0xb) == 0
                {
                    let mut rcx_6: i64;
                    rcx_6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, "outputpathsportabilityprint-type…", 6) == 2;
                    var_18c_1 = rcx_6 * 3;
                }
            }
            
            let mut r13_1: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "human-readable-binaryhuman-reada…", 0x15) == 0
            {
                r13_1 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "human-readable-decimalinodesloca…", 0x16) ^ 1) * 2;
            }
            
            let mut var_88: i128 = var_170;
            let mut var_68: i128 = var_188;
            let rax_16: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "totalhuman-readable-binaryhuman-…", 5);
            uu_df::columns::Column::from_matches::h15f1a0d2790b5397(&var_e8, arg2);
            let mut zmm0_8: i128;
            
            if var_e8 == 0
            {
                let var_d0: i64;
                var_148 = var_d0;
                var_158 = var_e8;
                'label_4c62f7:
                let rax_19: i64 = var_148;
                let var_38_2: i64 = rax_19;
                zmm0_8 = var_158;
                let var_48_3: i128 = zmm0_8;
                var_138 = zmm0_8;
                var_128 = rax_19;
                var_128 = var_88;
                *var_118[8] = var_160;
                let zmm1_4: i128 = var_68;
                let var_108_3: i128 = zmm1_4;
                let var_f8_1: i64 = var_178;
                arg1[8] = var_178;
                *arg1.byte_offset(0x30) = zmm1_4;
                arg1[4] = var_118;
                arg1[5] = *var_118[8];
                arg1[2] = var_128;
                arg1[3] = *var_128[8];
                *arg1 = zmm0_8;
                arg1[9] = var_f0_1;
                arg1[0xa] = rax_2;
                *arg1.byte_offset(0x51) = rax_3;
                *arg1.byte_offset(0x52) = rax_4;
                *arg1.byte_offset(0x53) = rax_16;
                *arg1.byte_offset(0x54) = r13_1;
                *arg1.byte_offset(0x55) = var_18c_1;
            }
            else
            {
                core::ops::function::FnOnce::call_once::hd7cb1b151e127991(&var_c8, &*var_e8[8]);
                let rax_17: i64 = var_c8;
                let var_c0: i128;
                var_158 = var_c0;
                var_148 = *var_b8[8];
                
                if rax_17 == 5
                {
                    goto 'label_4c62f7;
                }
                
                let rcx_8: i64 = var_148;
                let var_38_1: i64 = rcx_8;
                zmm0_8 = var_158;
                let var_48_2: i128 = zmm0_8;
                arg1[4] = rcx_8;
                *arg1.byte_offset(0x10) = zmm0_8;
                arg1[1] = rax_17;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_68);
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_88);
            }
        }
    }
    else
    {
        let var_108_2: i128 = var_98;
        var_118 = var_a8;
        var_138 = var_c8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h88abd33993a73e4c(&var_e8, &var_138);
        var_188 = var_e8;
        var_178 = var_d8;
        
        if var_170 == -0x8000000000000000 || var_188 == -0x8000000000000000
        {
            goto 'label_4c6073;
        }
        
        let var_180: i64;
        let var_168: i64;
        uu_df::Options::get_intersected_types::haafdf2c96660658e(&var_138, var_168, var_160, 
            var_180, var_178);
        
        if var_138 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_138);
            goto 'label_4c6073;
        }
        
        arg1[4] = var_b8;
        *arg1.byte_offset(0x10) = var_138;
        arg1[1] = 4;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_188);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&var_170);
    }
    arg1
}
