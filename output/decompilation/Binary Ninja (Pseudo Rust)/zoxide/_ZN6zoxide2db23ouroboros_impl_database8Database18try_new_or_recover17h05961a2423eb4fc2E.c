
  fn zoxide::db::ouroboros_impl_database::Database::try_new_or_recover::h05961a2423eb4fc2(arg1: *mut i64, arg2: *mut i128, arg3: *mut i128) -> i64

{
    let rax: u64 = alloc::boxed::Box$LT$T$GT$::new::ha23b455cb50264e0(arg3);
    let mut r14: u64 = rax;
    let mut var_80: i64;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::_$u7b$$u7b$closure$u7d$$u7d$::he9f52b07fb200152(&var_80, *(rax + 8), *(rax + 0x10));
    let mut result: i64;
    let mut zmm0: i128;
    
    if !(0 + -(var_80))
    {
        zmm0 = var_80;
        let var_68_1: i128 = zmm0;
        let rax_2: i64 = arg2[1];
        let zmm1_1: i128 = *arg2;
        *arg1.byte_offset(8) = zmm0;
        let var_70: i64;
        arg1[3] = var_70;
        arg1[4] = zmm1_1;
        arg1[5] = *zmm1_1[8];
        arg1[6] = rax_2;
        result = 0;
    }
    else
    {
        zmm0 = *arg2;
        let r15_1: u64 = arg2[1];
        ouroboros::macro_help::unbox::h9bdf8fb819a80eaa(&arg1[2], r14);
        let var_78: i64;
        arg1[1] = var_78;
        *arg1.byte_offset(0x28) = zmm0;
        result = 1;
        r14 = r15_1;
    }
    arg1[7] = r14;
    arg1[8] = 0;
    *arg1 = result;
    result
}
