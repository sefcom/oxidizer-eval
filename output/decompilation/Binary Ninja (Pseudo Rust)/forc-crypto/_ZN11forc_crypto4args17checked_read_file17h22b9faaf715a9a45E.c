
  fn forc_crypto::args::checked_read_file::h22b9faaf715a9a45(arg1: *mut i64, arg2: *mut i64)

{
    if 0 + -(*arg2)
    {
        *arg1 = -0x8000000000000000;
        return;
    }
    
    let mut var_28: i64;
    std::fs::read::h189bbd3caa41506c(&var_28, arg2);
    let rax: i64 = var_28;
    let mut var_40: i64 = rax;
    
    if rax == -0x8000000000000000
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$::haaf19f7680e2ce25(&var_40);
        return;
    }
    
    let var_20: i128;
    arg1[2] = *var_20[8];
    *arg1 = var_40;
    arg1[1] = var_20;
}
