
  int64_t zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Query$GT$::run::hbf87b54b3456bbca(void* arg1)

{
    int32_t var_50;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_50);
    int64_t var_48;
    
    if (var_50 == 1)
        return var_48;
    
    int64_t var_10;
    int64_t var_58_1 = var_10;
    int128_t var_20;
    int128_t var_68_1 = var_20;
    int128_t var_30;
    int128_t var_78_1 = var_30;
    int128_t var_40;
    int128_t var_88_1 = var_40;
    int64_t var_90 = var_48;
    uint64_t rax_1 =
        zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query::hb4cde70ad6f18db1(
        arg1, &var_90);
    var_50 = rax_1;
    int64_t rax_3 = core::result::Result$LT$T$C$E$GT$::and::hf4b2c15c697878c9(rax_1, 
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&var_90));
    core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&var_90);
    return rax_3;
}
