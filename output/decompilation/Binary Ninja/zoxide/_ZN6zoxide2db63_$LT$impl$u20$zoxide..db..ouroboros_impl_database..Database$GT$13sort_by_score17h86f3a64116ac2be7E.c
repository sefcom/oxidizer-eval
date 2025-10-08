
  int64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_score::h86f3a64116ac2be7(void* arg1, int64_t arg2)

{
    int64_t var_10 = arg2;
    int64_t result =
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_unstable_by::hced4d99b9425b473(
        *(arg1 + 8), *(arg1 + 0x10), &var_10);
    *(arg1 + 0x38) = 1;
    return result;
}
