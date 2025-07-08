
  int64_t uu_ls::cached_uid2usr::hb0febf40876d4691(size_t* arg1, int32_t arg2)

{
    int32_t var_64 = arg2;
    int64_t var_60;
    std::sync::mutex::Mutex$LT$T$GT$::lock::h3ee9ddaa26b95c7d(&var_60, 
        once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::h1af99f8cda9de5cb(
            &uu_ls::cached_uid2usr::UID_CACHE::h8e092248b51c5bca, 
            &uu_ls::cached_uid2usr::UID_CACHE::h8e092248b51c5bca));
    int32_t* rax_1;
    char rdx;
    rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::h8c461f759fd4cb4a(&var_60);
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hcc68de885ffbc6fa(&var_60, &rax_1[2], arg2);
    int128_t var_58;
    int128_t var_38 = var_58;
    int64_t var_48;
    int64_t var_28 = var_48;
    int64_t var_40 = var_60;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(arg1, 
        std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert_with::hbeacd1093d2ecb2c(&var_40, 
            &var_64));
    return core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$std..collections..hash..map..HashMap$LT$u32$C$alloc..string..String$GT$$GT$$GT$::h81b279b482634f7e(rax_1, rdx & 1);
}
