
  int64_t just::justfile::Justfile::get_recipe::h2487a07572812fbd(void* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t* rax =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(
        *(arg1 + 0x2b8), *(arg1 + 0x2c0), arg2, arg3);
    int64_t rdi_2;
    
    if (!rax)
        rdi_2 = 0;
    else
        rdi_2 = *rax + 0x10;
    
    void* var_30 = arg1;
    int64_t var_28 = arg2;
    uint64_t var_20 = arg3;
    return core::option::Option$LT$T$GT$::or_else::h9ab329f3c1d0b2c6(rdi_2, &var_30);
}
