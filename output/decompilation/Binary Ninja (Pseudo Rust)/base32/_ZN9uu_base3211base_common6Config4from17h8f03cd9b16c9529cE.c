
  fn uu_base32::base_common::Config::from::h8f03cd9b16c9529c(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut r15: *const i8 = "filei128 as dyn ERANGEEDEADLKENA…";
    let mut var_158: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5f358a8c68c9a234(
        &var_158, arg2, "filei128 as dyn ERANGEEDEADLKENA…", 4);
    let mut var_68: i64;
    clap_builder::parser::error::MatchesError::unwrap::h49b6dd2a71fba2f5(&var_68, 
        "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_158);
    let mut var_1b0: size_t;
    let var_150: *mut i8;
    
    if var_68 == 0
    {
        'label_4c110c:
        var_1b0 = -0x8000000000000000;
        'label_4c1125:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h61f91ed1ea627239(
            &var_158, arg2, "wrapdumb\x1b[5m <= \x1b[9mtrueTE…", 4);
        let rax_5: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h0cc7fcf21fadb1ed(
            "wrapdumb\x1b[5m <= \x1b[9mtrueTE…", 4, &var_158);
        let mut r12_2: i64;
        
        if rax_5 == 0
        {
            r12_2 = 0;
            'label_4c119b:
            let rax_7: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "decodeignore-garbageassertion fa…", 6);
            let rax_8: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "ignore-garbageassertion failed: …", 0xe);
            let var_1a0: i64;
            arg1[4] = var_1a0;
            *arg1.byte_offset(0x10) = var_1b0;
            *arg1 = r12_2;
            arg1[1] = r15;
            arg1[5] = rax_7;
            *arg1.byte_offset(0x29) = rax_8;
        }
        else
        {
            uu_base32::base_common::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::ha2ccd14d5f7590b0(
                &var_158, *rax_5.byte_offset(8), *rax_5.byte_offset(0x10));
            let rax_6: *mut *mut c_void = var_158;
            r15 = var_150;
            
            if rax_6 == 0
            {
                r12_2 = 1;
                goto 'label_4c119b;
            }
            
            arg1[1] = rax_6;
            arg1[2] = r15;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hde4c27a62c966e98(&var_1b0);
        }
    }
    else
    {
        let var_38: i128;
        let var_78_1: i128 = var_38;
        let var_48: i128;
        let var_88_1: i128 = var_48;
        let var_58: i128;
        let var_98_1: i128 = var_58;
        let mut var_a8: i128 = var_68;
        let rax_1: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h87b3baa98003a4ff(&var_a8);
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let rax_2: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h87b3baa98003a4ff(&var_a8);
        let mut var_1c0: *mut i64;
        let mut var_198: i64;
        let mut var_178: ();
        let mut rax_3: u64;
        let mut rcx_1: *mut *mut c_void;
        
        if rax_2 == 0
        {
            let r12_1: i64 = *rax_1.byte_offset(8);
            r15 = *rax_1.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a5391263b8fe46e(r12_1, r15, "-invalid wrap size: wrap encoded…", 1) != 0
            {
                goto 'label_4c110c;
            }
            
            std::fs::metadata::h44d4a21c29bf25da(&var_158, r12_1);
            let rdi_13: *mut *mut c_void = var_158;
            
            if rdi_13 != 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbca8dbb0b453c058(rdi_13, var_150);
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_1b0, 
                    r12_1, r15);
                goto 'label_4c1125;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbca8dbb0b453c058(2, var_150);
            var_198 = 1;
            let mut var_190: i128;
            var_190 = r12_1;
            *var_190[8] = r15;
            let var_180_2: i8 = 0;
            var_1c0 = &var_198;
            let var_1b8_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_158 = &data_549580;
            let var_150_2: i64 = 2;
            let var_138_2: i64 = 0;
            let var_148_2: *mut *mut i64 = &var_1c0;
            let var_140_2: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(&var_178, &var_158);
            let var_160_2: i32 = 1;
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h89f85ffc87d48af0(&var_178);
            rcx_1 = &data_549698;
            goto 'label_4c10c7;
        }
        
        let zmm0_2: i128 = *rax_2.byte_offset(8);
        var_198 = 0;
        let var_190_1: i128 = zmm0_2;
        let var_180_1: i8 = 1;
        var_1c0 = &var_198;
        let var_1b8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_158 = &data_549570;
        let var_150_1: i64 = 1;
        let var_138_1: i64 = 0;
        let var_148_1: *mut *mut i64 = &var_1c0;
        let var_140_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hb37e8cc30801e00b(&var_178, &var_158);
        let var_160_1: i32 = 1;
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::ha198aac8b81d8d24(&var_178);
        rcx_1 = &data_5495f0;
        'label_4c10c7:
        arg1[1] = rax_3;
        arg1[2] = rcx_1;
        *arg1 = 2;
    }
    arg1
}
