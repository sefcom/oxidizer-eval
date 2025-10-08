
  void forc_crypto::args::checked_read_file::h22b9faaf715a9a45(int64_t* arg1, int64_t* arg2)

{
    if (0 + -(*arg2))
    {
        *arg1 = -0x8000000000000000;
        return;
    }
    
    int64_t var_28;
    std::fs::read::h189bbd3caa41506c(&var_28, arg2);
    int64_t rax = var_28;
    int64_t var_40 = rax;
    
    if (rax == -0x8000000000000000)
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$::haaf19f7680e2ce25(&var_40);
        return;
    }
    
    int128_t var_20;
    arg1[2] = *var_20[8];
    *arg1 = var_40;
    arg1[1] = var_20;
}
