
  fn just::justfile::Justfile::get_recipe::h2487a07572812fbd(arg1: *mut c_void, arg2: i64, arg3: u64) -> i64

{
    let rax: *mut i64 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(
        *arg1.byte_offset(0x2b8), *arg1.byte_offset(0x2c0), arg2, arg3);
    let mut rdi_2: i64;
    
    if rax == 0
    {
        rdi_2 = 0;
    }
    else
    {
        rdi_2 = *rax + 0x10;
    }
    
    let mut var_30: *mut c_void = arg1;
    let var_28: i64 = arg2;
    let var_20: u64 = arg3;
    core::option::Option$LT$T$GT$::or_else::h9ab329f3c1d0b2c6(rdi_2, &var_30)
}
