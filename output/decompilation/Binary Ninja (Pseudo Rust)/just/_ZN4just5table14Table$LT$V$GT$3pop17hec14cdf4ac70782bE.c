
  fn just::table::Table$LT$V$GT$::pop::hec14cdf4ac70782b(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let rax: i64 = *arg2;
    let rcx: i64 = arg2[1];
    let mut rsi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rsi = arg2[2];
    }
    
    let mut var_58: i64 = rdx;
    let var_50: i64 = 0;
    let var_48: i64 = rax;
    let var_40: i64 = rcx;
    let var_38: i64 = rdx;
    let var_30: i64 = 0;
    let var_28: i64 = rax;
    let var_20: i64 = rcx;
    let var_18: i64 = rsi;
    let result: *mut i64 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14e1fe8b40fe0f41(&var_58);
    
    if result != 0
    {
        return alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hd5ced7b6bb659888(
            arg1, arg2, *result, result[1]);
    }
    
    *arg1 = -0x8000000000000000;
    result
}
