
  int64_t* just::function::path_exists::h36f930aac5fe45b9(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    void* rax = *arg2;
    void var_e0;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_e0, 
        *(rax + 0x10), *(rax + 0x18));
    void var_f8;
    int64_t var_d8;
    uint64_t var_d0;
    std::path::Path::join::h1eac0ae5e7efa361(&var_f8, var_d8, var_d0, arg3);
    int64_t var_f0;
    int64_t var_c8;
    std::fs::metadata::h5a72efc395e817ee(&var_c8, var_f0);
    int64_t r14_1 = var_c8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6c53bee5a1770485(&var_c8);
    int64_t rdx_3;
    rdx_3 = r14_1 == 2;
    char const* const rsi_3 = "truePATH ... => M";
    
    if (r14_1 == 2)
        rsi_3 = "false[{,:]capacity overflow/home…";
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_c8, rsi_3, rdx_3 | 4);
    int64_t var_b8;
    arg1[3] = var_b8;
    *(arg1 + 8) = var_c8;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_f8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_e0);
    return arg1;
}
