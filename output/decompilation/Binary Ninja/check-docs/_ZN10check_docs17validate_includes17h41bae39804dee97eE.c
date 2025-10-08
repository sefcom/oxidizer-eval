
  int128_t* check_docs::validate_includes::h41bae39804dee97e(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int128_t var_58;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3e37f3294573936e(&var_58, arg2);
    int64_t* var_38 = arg3;
    int128_t var_88;
    itertools::Itertools::partition_map::hc6a0bca4affa4f4d(&var_88, &var_58);
    int64_t var_78;
    int64_t var_98 = var_78;
    int128_t var_a8 = var_88;
    int128_t var_70;
    var_58 = var_70;
    int64_t rax_2 = arg3[1];
    var_88 = rax_2;
    *var_88[8] = arg3[2] * 0x38 + rax_2;
    int128_t* var_78_1 = &var_a8;
    int128_t var_30;
    core::iter::traits::iterator::Iterator::collect::h57163fbc07130889(&var_30, &var_88);
    int64_t var_60;
    arg1[1] = var_60;
    *arg1 = var_58;
    *(arg1 + 0x18) = var_30;
    int64_t var_20;
    *(arg1 + 0x28) = var_20;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(
        &var_a8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(
        arg3);
    return arg1;
}
