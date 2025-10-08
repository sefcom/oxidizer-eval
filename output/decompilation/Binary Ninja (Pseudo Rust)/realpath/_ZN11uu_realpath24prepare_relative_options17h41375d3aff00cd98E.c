
  fn uu_realpath::prepare_relative_options::h41375d3aff00cd98(arg1: *mut i64, arg2: *mut c_void, arg3: i32, arg4: i8) -> *mut i64

{
    let mut r14: i64;
    let var_18: i64 = r14;
    let mut rbp: i64 = -0x8000000000000000;
    let mut r15: *const i8 = "relative-toDIRprint the resolved…";
    let mut var_88: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2d544eeeb6e4e28f(&var_88, 
        arg2, "relative-toDIRprint the resolved…", 0xb);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h69423c51579d2b37(
        "relative-toDIRprint the resolved…", 0xb, &var_88);
    let var_80: *mut i8;
    let var_78: i64;
    let mut r12: i64;
    
    if rax == 0
    {
        r12 = -0x8000000000000000;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h149df0134a5d305e(&var_88, *rax.byte_offset(8), *rax.byte_offset(0x10));
        r12 = var_88;
        r15 = var_80;
        r14 = var_78;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2d544eeeb6e4e28f(&var_88, 
        arg2, "relative-baseprint absolute path…", 0xd);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h69423c51579d2b37(
        "relative-baseprint absolute path…", 0xd, &var_88);
    let mut var_90: *mut i8;
    let mut var_38: i64;
    let mut rax_2: i8;
    
    if rax_1 == 0
    {
        rax_2 = arg4;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h149df0134a5d305e(&var_88, *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
        rax_2 = arg4;
        rbp = var_88;
        var_90 = var_80;
        var_38 = var_78;
    }
    
    var_88 = r12;
    let var_80_1: *const i8 = r15;
    let var_78_1: i64 = r14;
    let r14_1: i8 = arg3;
    let r12_1: u64 = rax_2;
    let mut var_50: i64;
    uu_realpath::canonicalize_relative_option::hbda6f1f43c1a9622(&var_50, &var_88, r14_1, r12_1, 
        rbp, r12_1);
    let r15_1: i64 = var_50;
    let var_48: i64;
    let var_40: i64;
    
    if r15_1 == -0x7fffffffffffffff
    {
        arg1[1] = var_48;
        arg1[2] = var_40;
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3f75f99dfce4f7da(rbp, var_90);
        return arg1;
    }
    
    let mut var_98: i32;
    var_98 = var_48;
    var_88 = rbp;
    let var_80_2: *mut i8 = var_90;
    let var_78_2: i64 = var_38;
    uu_realpath::canonicalize_relative_option::hbda6f1f43c1a9622(&var_50, &var_88, r14_1, r12_1, 
        rbp, r12_1);
    let rbp_1: i64 = var_50;
    
    if rbp_1 != -0x7fffffffffffffff
    {
        let mut rdi_8: *mut i8 = nullptr;
        let mut rdx_6: i64 = var_48;
        
        if rbp_1 == -0x8000000000000000
        {
            rdx_6 = 0;
        }
        
        if r15_1 != -0x8000000000000000
        {
            rdi_8 = var_98;
        }
        
        let mut cond:2_1: bool;
        
        if (rdi_8 == 0 | rdx_6 == 0) == 0
        {
            cond:2_1 = std::path::Path::starts_with::h5d2b2bc7a5c06590(rdi_8, var_40, rdx_6) == 0;
        }
        
        if (rdi_8 == 0 | rdx_6 == 0) == 0 && cond:2_1
        {
            *arg1 = -0x8000000000000000;
            arg1[3] = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3f75f99dfce4f7da(rbp_1, var_48);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3f75f99dfce4f7da(r15_1, var_98);
        }
        else
        {
            *arg1 = r15_1;
            arg1[1] = var_98;
            arg1[2] = var_40;
            arg1[3] = rbp_1;
            arg1[4] = var_48;
            arg1[5] = var_40;
        }
    }
    else
    {
        arg1[1] = var_48;
        arg1[2] = var_40;
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3f75f99dfce4f7da(r15_1, var_98);
    }
    
    arg1
}
