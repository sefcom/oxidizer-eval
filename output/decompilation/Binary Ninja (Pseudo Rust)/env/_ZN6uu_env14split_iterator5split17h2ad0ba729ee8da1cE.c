
  fn uu_env::split_iterator::split::h2ad0ba729ee8da1c(arg1: *mut i32, arg2: i64) -> *mut i32

{
    let mut var_68: ();
    uu_env::split_iterator::SplitIterator::new::hd02f70765700e24e(&var_68, arg2);
    let mut var_90: i32;
    uu_env::split_iterator::SplitIterator::split::hbd91db14676a9a59(&var_90, &var_68);
    let rax: i32 = var_90;
    let var_8c: i128;
    
    if rax != 8
    {
        *arg1.byte_offset(0x10) = var_8c;
        *arg1.byte_offset(4) = var_8c;
        let var_70: i64;
        *arg1.byte_offset(0x20) = var_70;
    }
    else
    {
        let mut var_ac: i128;
        let var_78: i64;
        *var_ac[8] = var_78;
        let var_b8: i128 = var_8c;
        *arg1.byte_offset(0x18) = var_78;
        *arg1.byte_offset(8) = var_8c;
    }
    *arg1 = rax;
    arg1
}
