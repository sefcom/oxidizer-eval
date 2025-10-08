
  fn just::scope::Scope::value::hb06d4bb986c3514e(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let rax: *mut c_void =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h0d5be91b1068c8c2(*arg1, 
        arg1[1], arg2, arg3);
    
    if rax != 0
    {
        *rax.byte_offset(0x10);
        return *rax.byte_offset(8);
    }
    
    let rdi_1: i64 = arg1[3];
    
    if rdi_1 == 0
    {
        return 0;
    }
    
    just::scope::Scope::value::hb06d4bb986c3514e(rdi_1, arg2, arg3)
}
