
  fn zoxide::db::ouroboros_impl_database::Database::new::hea6bb27ef095d44c(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128) -> i64

{
    let rax: u64 = alloc::boxed::Box$LT$T$GT$::new::ha23b455cb50264e0(arg3);
    let mut var_48: i128;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::_$u7b$$u7b$closure$u7d$$u7d$::h112864392c34b041(&var_48);
    let result: i64 = arg2[1];
    let var_30: i128 = *arg2;
    *arg1 = var_48;
    arg1[2] = *var_30[8];
    *arg1.byte_offset(0x28) = result;
    let var_38: i128;
    arg1[1] = var_38;
    arg1[3] = rax;
    *arg1.byte_offset(0x38) = 0;
    result
}
