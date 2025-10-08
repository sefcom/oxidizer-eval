
  int64_t* uu_realpath::prepare_relative_options::h41375d3aff00cd98(int64_t* arg1, void* arg2, int32_t arg3, char arg4)

{
    int64_t r14;
    int64_t var_18 = r14;
    int64_t rbp = -0x8000000000000000;
    char const* const r15 = "relative-toDIRprint the resolved…";
    int64_t var_88;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2d544eeeb6e4e28f(&var_88, 
        arg2, "relative-toDIRprint the resolved…", 0xb);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h69423c51579d2b37(
        "relative-toDIRprint the resolved…", 0xb, &var_88);
    char* var_80;
    int64_t var_78;
    int64_t r12;
    
    if (!rax)
        r12 = -0x8000000000000000;
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h149df0134a5d305e(&var_88, *(rax + 8), *(rax + 0x10));
        r12 = var_88;
        r15 = var_80;
        r14 = var_78;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2d544eeeb6e4e28f(&var_88, 
        arg2, "relative-baseprint absolute path…", 0xd);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h69423c51579d2b37(
        "relative-baseprint absolute path…", 0xd, &var_88);
    char* var_90;
    int64_t var_38;
    char rax_2;
    
    if (!rax_1)
        rax_2 = arg4;
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h149df0134a5d305e(&var_88, *(rax_1 + 8), *(rax_1 + 0x10));
        rax_2 = arg4;
        rbp = var_88;
        var_90 = var_80;
        var_38 = var_78;
    }
    
    var_88 = r12;
    char const* const var_80_1 = r15;
    int64_t var_78_1 = r14;
    char r14_1 = arg3;
    uint64_t r12_1 = rax_2;
    int64_t var_50;
    uu_realpath::canonicalize_relative_option::hbda6f1f43c1a9622(&var_50, &var_88, r14_1, r12_1, 
        rbp, r12_1);
    int64_t r15_1 = var_50;
    int64_t var_48;
    int64_t var_40;
    
    if (r15_1 == -0x7fffffffffffffff)
    {
        arg1[1] = var_48;
        arg1[2] = var_40;
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3f75f99dfce4f7da(rbp, var_90);
        return arg1;
    }
    
    int32_t var_98;
    var_98 = var_48;
    var_88 = rbp;
    char* var_80_2 = var_90;
    int64_t var_78_2 = var_38;
    uu_realpath::canonicalize_relative_option::hbda6f1f43c1a9622(&var_50, &var_88, r14_1, r12_1, 
        rbp, r12_1);
    int64_t rbp_1 = var_50;
    
    if (rbp_1 != -0x7fffffffffffffff)
    {
        char* rdi_8 = nullptr;
        int64_t rdx_6 = var_48;
        
        if (rbp_1 == -0x8000000000000000)
            rdx_6 = 0;
        
        if (r15_1 != -0x8000000000000000)
            rdi_8 = var_98;
        
        bool cond:2_1;
        
        if (!(!rdi_8 | !rdx_6))
            cond:2_1 = !std::path::Path::starts_with::h5d2b2bc7a5c06590(rdi_8, var_40, rdx_6);
        
        if (!(!rdi_8 | !rdx_6) && cond:2_1)
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
    
    return arg1;
}
