
  fn forc_crypto::args::checked_read_stdin::hc53103be1c9a90d0(arg1: *mut i64, arg2: *mut i64, arg3: *mut i32, arg4: i8) -> i64

{
    let mut var_50: *mut i32 = arg3;
    let mut rax_1: i8;
    let mut r14_1: *mut i32;
    
    if !(0 + -(*arg2))
    {
        r14_1 = arg3;
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h09355c4e98f03c42(arg2[1], arg2[2], "-0xPublicKeyAddressforc-plugins/…", 1);
    }
    
    if !(0 + -(*arg2)) && rax_1 == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_40: i64 = 0;
        let var_38_1: i64 = 1;
        let var_30_1: i64 = 0;
        let mut rax_2: i64;
        let mut rdx: i64;
        rax_2 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read_to_end::h6849e76cba1f4991(&var_50, &var_40);
        let mut var_28: i64 = rax_2;
        let var_20_1: i64 = rdx;
        
        if rax_2 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h464439431eabac81(&var_28);
            arg1[2] = var_30_1;
            *arg1 = var_40;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h464439431eabac81(&var_28);
            *arg1 = 0;
            arg1[1] = 1;
            arg1[2] = 0;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1ce0757ff70a3f4f(&var_40);
        }
        
        r14_1 = var_50;
    }
    
    core::ptr::drop_in_place$LT$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$regex_automata..meta..regex..Cache$GT$$GT$$GT$$GT$$GT$::h0454c590a9fc4181(r14_1, arg4)
}
