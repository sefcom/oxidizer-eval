
  fn uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x78, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: u64 = arg3;
    let var_38: i16 = 1;
    let mut var_d0: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h96366f3336c0a79d(&var_d0, &var_78);
    let var_c0: i64;
    
    if var_c0 == 1
    {
        let var_c8: *mut i64;
        uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(arg1, arg2, arg3, *var_c8, var_c8[1]);
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hf4edae12fbccf23e(
            &var_d0);
    }
    
    let mut var_98: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h532aa9ace314f175(&var_98, &var_d0);
    let mut i_2: *mut i8;
    let mut rdx_2: *mut c_void;
    i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1fb4a3ee92f93d48(&var_98);
    let mut r12_1: i64;
    
    if i_2 == 0
    {
        r12_1 = 1;
    }
    else
    {
        let mut i_1: *mut i8 = i_2;
        let mut r13_1: *mut c_void = rdx_2;
        r12_1 = 1;
        let mut i: *mut i8;
        
        do
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "0", 1) != 0
            {
                uu_dd::parseargs::show_zero_multiplier_warning::hbe4ec55817d90dd4();
            }
            
            let mut var_b8: i64;
            uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(&var_b8, arg2, arg3, i_1, r13_1);
            let mut rax_3: i64 = var_b8;
            let var_b0: i64;
            let mut rcx_3: i64 = var_b0;
            let mut rdx_5: *mut i64;
            
            if rax_3 != 0xe
            {
                rdx_5 = arg1;
                let var_a8: i128;
                *rdx_5.byte_offset(0x10) = var_a8;
                'label_4d49bd:
                *rdx_5 = rax_3;
                rdx_5[1] = rcx_3;
                return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&var_98);
            }
            
            if (r12_1 * rcx_3) >> 0x40 != {0}
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                    &var_b8, arg2, arg3);
                rcx_3 = var_b8;
                rdx_5 = arg1;
                *rdx_5.byte_offset(0x10) = var_b0;
                rax_3 = 0xd;
                goto 'label_4d49bd;
            }
            
            r12_1 *= rcx_3;
            let mut rdx_4: *mut c_void;
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1fb4a3ee92f93d48(&var_98);
            i_1 = i;
            r13_1 = rdx_4;
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h09ad4d2f7ce83910(&var_98);
    arg1[1] = r12_1;
    *arg1 = 0xe;
    arg1
}
