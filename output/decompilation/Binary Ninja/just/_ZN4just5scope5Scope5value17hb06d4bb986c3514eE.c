
  int64_t just::scope::Scope::value::hb06d4bb986c3514e(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    void* rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h0d5be91b1068c8c2(
        *arg1, arg1[1], arg2, arg3);
    
    if (rax)
    {
        *(rax + 0x10);
        return *(rax + 8);
    }
    
    int64_t rdi_1 = arg1[3];
    
    if (!rdi_1)
        return 0;
    
    return just::scope::Scope::value::hb06d4bb986c3514e(rdi_1, arg2, arg3);
}
