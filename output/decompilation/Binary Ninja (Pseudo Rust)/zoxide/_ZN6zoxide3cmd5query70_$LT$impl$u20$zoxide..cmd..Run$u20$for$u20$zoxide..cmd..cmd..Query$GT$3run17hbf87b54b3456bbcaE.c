
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Query$GT$::run::hbf87b54b3456bbca(arg1: *mut c_void) -> i64

{
    let mut var_50: i32;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_50);
    let var_48: i64;
    
    if var_50 == 1
    {
        return var_48;
    }
    
    let var_10: i64;
    let var_58_1: i64 = var_10;
    let var_20: i128;
    let var_68_1: i128 = var_20;
    let var_30: i128;
    let var_78_1: i128 = var_30;
    let var_40: i128;
    let var_88_1: i128 = var_40;
    let mut var_90: i64 = var_48;
    let rax_1: u64 =
        zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query::hb4cde70ad6f18db1(
        arg1, &var_90);
    var_50 = rax_1;
    let rax_3: i64 = core::result::Result$LT$T$C$E$GT$::and::hf4b2c15c697878c9(rax_1, 
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_90));
    core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_90);
    rax_3
}
