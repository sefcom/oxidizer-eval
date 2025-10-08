
  fn uu_env::split_iterator::split::hb91d0c6281405deb(arg1: *mut i32, arg2: i64) -> *mut i32

{
    let mut var_68: i128;
    uu_env::split_iterator::SplitIterator::new::h95a2d9123d89c82e(&var_68, arg2);
    let mut var_90: i32;
    uu_env::split_iterator::SplitIterator::split::hfc15653a1cb24dc8(&var_90, &var_68);
    let rax: i32 = var_90;
    let var_8c: i128;
    
    if rax != 0xc
    {
        var_68 = var_8c;
        *arg1.byte_offset(0x10) = var_8c;
        *arg1.byte_offset(4) = var_68;
        let var_70: i64;
        *arg1.byte_offset(0x20) = var_70;
    }
    else
    {
        let var_78: i64;
        let mut var_5c: i128;
        *var_5c[8] = var_78;
        var_68 = var_8c;
        *arg1.byte_offset(0x18) = var_78;
        *arg1.byte_offset(8) = var_8c;
    }
    *arg1 = rax;
    arg1
}
