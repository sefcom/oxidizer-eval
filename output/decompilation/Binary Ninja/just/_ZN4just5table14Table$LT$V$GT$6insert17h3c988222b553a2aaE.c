
  int64_t just::table::Table$LT$V$GT$::insert::h3c988222b553a2aa(int64_t* arg1, void* arg2)

{
    int64_t rax;
    uint64_t rdx;
    rax = _$LT$just..set..Set$u20$as$u20$just..keyed..Keyed$GT$::key::hded57a836a19343e(arg2);
    void var_b0;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h80c0a734d02c1192(&var_b0, 
        arg1, rax, rdx, arg2);
    return core::ptr::drop_in_place$LT$core..option..Option$LT$just..set..Set$GT$$GT$::hecc443bf5b384169(&var_b0);
}
