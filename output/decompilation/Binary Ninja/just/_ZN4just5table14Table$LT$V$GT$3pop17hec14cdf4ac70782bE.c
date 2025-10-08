
  int64_t* just::table::Table$LT$V$GT$::pop::hec14cdf4ac70782b(int64_t* arg1, int64_t* arg2)

{
    int64_t rax = *arg2;
    int64_t rcx = arg2[1];
    int64_t rsi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rsi = arg2[2];
    
    int64_t var_58 = rdx;
    int64_t var_50 = 0;
    int64_t var_48 = rax;
    int64_t var_40 = rcx;
    int64_t var_38 = rdx;
    int64_t var_30 = 0;
    int64_t var_28 = rax;
    int64_t var_20 = rcx;
    int64_t var_18 = rsi;
    int64_t* result = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14e1fe8b40fe0f41(&var_58);
    
    if (result)
        return alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hd5ced7b6bb659888(
            arg1, arg2, *result, result[1]);
    
    *arg1 = -0x8000000000000000;
    return result;
}
