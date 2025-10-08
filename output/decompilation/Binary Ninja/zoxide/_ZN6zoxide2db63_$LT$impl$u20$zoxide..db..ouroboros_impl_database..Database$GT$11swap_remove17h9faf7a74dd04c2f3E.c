
  int64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(void* arg1, int64_t arg2)

{
    void var_38;
    alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hbd9d1074fb85a0a1(&var_38, arg1, arg2);
    int64_t result =
        core::ptr::drop_in_place$LT$zoxide..db..dir..Dir$GT$::h491f1d2213b1aa6c(&var_38);
    *(arg1 + 0x38) = 1;
    return result;
}
