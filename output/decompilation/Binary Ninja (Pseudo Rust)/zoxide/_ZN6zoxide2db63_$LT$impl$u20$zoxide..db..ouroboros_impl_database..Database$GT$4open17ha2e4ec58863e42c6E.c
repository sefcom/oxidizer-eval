
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(arg1: *mut i64) -> i64

{
    let mut var_38: i64;
    zoxide::config::data_dir::h0bdb5e5582d5bd1e(&var_38);
    let rcx: i64 = var_38;
    let result: i64;
    
    if -(rcx) == -0x8000000000000000
    {
        arg1[1] = result;
        *arg1 = 1;
        return result;
    }
    
    let mut var_20: i64 = rcx;
    let result_1: i64 = result;
    let var_28: i64;
    let var_10: i64 = var_28;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::h38db3139cee3edf2(arg1, &var_20)
}
