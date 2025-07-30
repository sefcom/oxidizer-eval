
  fn flealib::fileencrypter::FileEncrypter::new::h1bba59f4d3416534(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let rax: *mut i128 = arg2[1];
    let rcx: i64 = arg2[2];
    let mut var_48: i64 = rcx;
    
    if rcx != 0x20
    {
        let mut var_40: i64 = 0;
        core::panicking::assert_failed::h7c645b2ace17315c(0, &var_48, " ", &var_40);
        /* no return */
    }
    
    let zmm0: i128 = *rax;
    arg1[1] = rax[1];
    *arg1 = zmm0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
    arg1
}
