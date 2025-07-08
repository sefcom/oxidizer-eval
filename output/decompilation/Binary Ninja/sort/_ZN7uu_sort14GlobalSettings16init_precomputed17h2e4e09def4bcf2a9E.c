
  int64_t uu_sort::GlobalSettings::init_precomputed::h2e4e09def4bcf2a9(void* arg1)

{
    void* r15 = *(arg1 + 8);
    void* r14_1 = *(arg1 + 0x10) * 0x38 + r15;
    void* var_28 = r15;
    void* var_20 = r14_1;
    *(arg1 + 0x60) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfd9cbea3530c9fd0(&var_28);
    *(arg1 + 0x58) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha92c83caa8027c63(r15, r14_1);
    *(arg1 + 0x48) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hefb188d1a39a24e8(r15, r14_1);
    int64_t result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha576350b6c5181b6(r15, r14_1);
    *(arg1 + 0x50) = result;
    return result;
}
