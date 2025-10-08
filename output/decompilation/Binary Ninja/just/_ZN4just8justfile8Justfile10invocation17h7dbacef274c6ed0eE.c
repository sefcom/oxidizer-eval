
  int64_t just::justfile::Justfile::invocation::h7dbacef274c6ed0e(char* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    int64_t rax;
    int64_t var_38 = rax;
    void* rax_1 = arg2;
    int64_t i = arg7;
    void* rbp_1 = arg5 + i * 0x18 + 0x10;
    
    while (arg6 - 1 != i)
    {
        if (i >= arg6)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(i, arg6);
            /* no return */
        }
        
        rax_1 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
            *(rax_1 + 0x2a0), *(rax_1 + 0x2a8), *(rbp_1 - 8), *rbp_1);
        rbp_1 += 0x18;
        i += 1;
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    
    if (i >= arg6)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(i, arg6);
        /* no return */
    }
    
    int64_t rax_2 =
        just::justfile::Justfile::get_recipe::h2487a07572812fbd(rax_1, *(rbp_1 - 8), *rbp_1);
    
    if (!rax_2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb39d7af186885eb1(&arg1[8], arg3, arg4);
    *(arg1 + 0x20) = rax_2;
    *arg1 = 0x38;
    return result;
}
