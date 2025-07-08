
  fn uu_ls::parse_time_style::h637c81bfc8530b0a(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let rax: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x78);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    let mut var_f0: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f0, 
        "full-isoBorrowedENOTSOCKclassify…", 8);
    let zmm0: i128 = var_f0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f0, 
        "long-isoDateTi", 8);
    let zmm0_1: i128 = var_f0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f0, 
        "isolocale+FORMAT (e.g., +%H:%M) …", 3);
    let mut var_88: i128 = var_f0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f0, 
        "locale+FORMAT (e.g., +%H:%M) for…", 6);
    let mut var_a8: i128 = var_f0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f0, 
        "+FORMAT (e.g., +%H:%M) for a 'da…", 0x30);
    let var_e0: i64;
    let mut var_b8: i64 = var_e0;
    let mut var_c8: i128 = var_f0;
    rax[1] = var_e0;
    *rax = zmm0;
    *rax.byte_offset(0x28) = var_e0;
    *rax.byte_offset(0x18) = zmm0_1;
    rax[4] = var_e0;
    rax[3] = var_88;
    *rax.byte_offset(0x48) = var_a8;
    *rax.byte_offset(0x58) = var_e0;
    rax[6] = var_c8;
    rax[7] = var_b8;
    alloc::slice::hack::into_vec::h6d59ee658acb7704(&var_a8, rax, 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_f0, 
        arg2, "time-stylefull-timeignorecontext…", 0xa);
    let rax_11: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "time-stylefull-timeignorecontext…", 0xa, &var_f0);
    let mut rax_19: i64;
    
    if rax_11 == 0
    {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "full-timeignorecontextgroup-dire…", 9) != 0
        {
            'label_51ea78:
            rax_19 = -0x8000000000000000;
            goto 'label_51ead8;
        }
        
        'label_51ead4:
        rax_19 = -0x7ffffffffffffffd;
        'label_51ead8:
        *arg1.byte_offset(8) = rax_19;
        *arg1 = 7;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&var_a8);
    }
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "full-timeignorecontextgroup-dire…", 9) != 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(
            &var_f0, arg2, "full-timeignorecontextgroup-dire…", 9);
        
        if var_f0 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let var_b8_1: i64 = var_e0;
        var_c8 = var_f0;
        let mut rax_14: i64;
        let mut rdx_1: i64;
        rax_14 = core::iter::traits::iterator::Iterator::fold::hedf7a65ebd7287e8(&var_c8);
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(
            &var_f0, arg2, "time-stylefull-timeignorecontext…", 0xa);
        
        if var_f0 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        var_b8 = var_e0;
        var_c8 = var_f0;
        let mut rax_16: i64;
        let mut rdx_2: i64;
        rax_16 = core::iter::traits::iterator::Iterator::fold::hedf7a65ebd7287e8(&var_c8);
        
        if rax_14 != 0 && (rax_16 == 0 || rdx_1 > rdx_2)
        {
            goto 'label_51ea78;
        }
    }
    
    let r12_2: *mut i8 = *rax_11.byte_offset(8);
    let r14_1: u64 = *rax_11.byte_offset(0x10);
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r12_2, r14_1, "full-isoBorrowedENOTSOCKclassify…", 8) != 0
    {
        goto 'label_51ea78;
    }
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r12_2, r14_1, "long-isoDateTi", 8) != 0
    {
        rax_19 = -0x7fffffffffffffff;
        goto 'label_51ead8;
    }
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r12_2, r14_1, "isolocale+FORMAT (e.g., +%H:%M) …", 3) != 0
    {
        rax_19 = -0x7ffffffffffffffe;
        goto 'label_51ead8;
    }
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(r12_2, r14_1, "locale+FORMAT (e.g., +%H:%M) for…", 6) != 0
    {
        goto 'label_51ead4;
    }
    
    var_88 = r12_2;
    *var_88[8] = &r12_2[r14_1];
    let mut rax_24: i32;
    let mut rdx_3: i32;
    rax_24 = core::str::validations::next_code_point::haf8c055704158b90(&var_88, arg1);
    let mut rax_25: i32 = 0x110000;
    
    if rax_24 != 0
    {
        rax_25 = rdx_3;
    }
    
    if rax_25 == 0x2b
    {
        let mut rax_28: *mut c_void;
        let mut rdx_5: u64;
        rax_28 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, r12_2, r14_1);
        
        if rax_28 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(r12_2, r14_1, 1, r14_1);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f0, 
            rax_28, rdx_5);
        *arg1.byte_offset(0x18) = var_e0;
        *arg1.byte_offset(8) = var_f0;
        *arg1 = 7;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&var_a8);
    }
    
    if rax_25 == 0x110000
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_c8, 
        rax_11);
    *arg1.byte_offset(0x30) = var_e0;
    *arg1.byte_offset(0x20) = var_a8;
    var_f0 = var_c8;
    *arg1 = 6;
    let result: i64 = *var_f0[0xf];
    *arg1.byte_offset(1) = var_f0;
    *arg1.byte_offset(0x10) = result;
    *arg1.byte_offset(0x18) = var_b8;
    result
}
