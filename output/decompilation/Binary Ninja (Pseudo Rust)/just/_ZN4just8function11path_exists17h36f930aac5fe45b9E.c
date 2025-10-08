
  fn just::function::path_exists::h36f930aac5fe45b9(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let rax: *mut c_void = *arg2;
    let mut var_e0: ();
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_e0, 
        *rax.byte_offset(0x10), *rax.byte_offset(0x18));
    let mut var_f8: ();
    let var_d8: i64;
    let var_d0: u64;
    std::path::Path::join::h1eac0ae5e7efa361(&var_f8, var_d8, var_d0, arg3);
    let var_f0: i64;
    let mut var_c8: i64;
    std::fs::metadata::h5a72efc395e817ee(&var_c8, var_f0);
    let r14_1: i64 = var_c8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6c53bee5a1770485(&var_c8);
    let mut rdx_3: i64;
    rdx_3 = r14_1 == 2;
    let mut rsi_3: *const i8 = "truePATH ... => M";
    
    if r14_1 == 2
    {
        rsi_3 = "false[{,:]capacity overflow/home…";
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_c8, rsi_3, rdx_3 | 4);
    let var_b8: i64;
    arg1[3] = var_b8;
    *arg1.byte_offset(8) = var_c8;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_f8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_e0);
    arg1
}
