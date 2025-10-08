
  fn just::justfile::Justfile::invocation::h7dbacef274c6ed0e(arg1: *mut i8, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rax_1: *mut c_void = arg2;
    let mut i: i64 = arg7;
    let mut rbp_1: *mut c_void = (arg5 + i * 0x18).byte_offset(0x10);
    
    while arg6 - 1 != i
    {
        if i >= arg6
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(i, arg6);
            /* no return */
        }
        
        rax_1 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
            *rax_1.byte_offset(0x2a0), *rax_1.byte_offset(0x2a8), *rbp_1.byte_offset(-8), *rbp_1);
        rbp_1 += 0x18;
        i += 1;
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    
    if i >= arg6
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(i, arg6);
        /* no return */
    }
    
    let rax_2: i64 = just::justfile::Justfile::get_recipe::h2487a07572812fbd(rax_1, 
        *rbp_1.byte_offset(-8), *rbp_1);
    
    if rax_2 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let result: i64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb39d7af186885eb1(&arg1[8], arg3, arg4);
    *arg1.byte_offset(0x20) = rax_2;
    *arg1 = 0x38;
    result
}
