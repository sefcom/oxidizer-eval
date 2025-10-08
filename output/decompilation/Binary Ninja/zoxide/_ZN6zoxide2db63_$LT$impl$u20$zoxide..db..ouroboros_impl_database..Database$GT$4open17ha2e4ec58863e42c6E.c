
  int64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(int64_t* arg1)

{
    int64_t var_38;
    zoxide::config::data_dir::h0bdb5e5582d5bd1e(&var_38);
    int64_t rcx = var_38;
    int64_t result;
    
    if (-(rcx) == -0x8000000000000000)
    {
        arg1[1] = result;
        *arg1 = 1;
        return result;
    }
    
    int64_t var_20 = rcx;
    int64_t result_1 = result;
    int64_t var_28;
    int64_t var_10 = var_28;
    return zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::h38db3139cee3edf2(arg1, &var_20);
}
