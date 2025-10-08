
  int128_t* check_docs::filter_valid_anchors::h39bbb345caf4f14f(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t* var_140 = arg3;
    void var_b0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9b6edf7ebf686b8c(&var_b0, arg2);
    int64_t* var_90 = &var_140;
    int128_t var_138;
    itertools::Itertools::partition_map::h4f90cde821cd7ae4(&var_138, &var_b0);
    int128_t var_108 = var_138;
    int64_t var_128;
    int64_t var_f8 = var_128;
    int128_t var_120;
    int128_t var_e8 = var_120;
    int64_t var_110;
    int64_t var_d8 = var_110;
    check_docs::filter_unused_ends::h49a7d1140d6f97f2(&var_b0, arg3[1], arg3[2]);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62ec4cff24ca745e(&var_138, &var_b0);
    void var_88;
    core::iter::traits::iterator::Iterator::collect::h5d93aa8de2da2383(&var_88, &var_138);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h419e594be0ef00e6(&var_138, &var_108);
    int128_t var_c8;
    core::iter::traits::iterator::Iterator::collect::h6a36610d4b6dfad3(&var_c8, &var_138);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62ec4cff24ca745e(&var_b0, &var_e8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62ec4cff24ca745e(&var_138, &var_88);
    void var_70;
    core::iter::traits::iterator::Iterator::chain::hd23e1eb5f431e694(&var_70, &var_b0, &var_138);
    core::iter::traits::iterator::Iterator::collect::h26c983c3baf6385c(&var_138, &var_70);
    int64_t var_b8;
    arg1[1] = var_b8;
    *arg1 = var_c8;
    *(arg1 + 0x18) = var_138;
    *(arg1 + 0x28) = var_128;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(
        arg3);
    return arg1;
}
