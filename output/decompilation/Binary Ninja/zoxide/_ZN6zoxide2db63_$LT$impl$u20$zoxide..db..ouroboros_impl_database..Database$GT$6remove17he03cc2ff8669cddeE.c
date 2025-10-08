
  uint64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he03cc2ff8669cdde(void* arg1, int64_t arg2)

{
    int64_t var_28 = arg2;
    int64_t rax = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    int64_t var_20 = rax;
    int64_t var_18 = rax + rcx * 0x28;
    int32_t rax_1;
    int64_t rdx;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::ha749ffca44ad2cd2(&var_20, &var_28);
    
    if (rax_1 & 1)
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(arg1, rdx);
    
    int32_t r14;
    r14 = rax_1 & 1;
    return r14;
}
