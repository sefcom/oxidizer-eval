
  fn just::recipe::Recipe$LT$D$GT$::print_exit_message::he133fff8607c7ca6(arg1: *mut c_void, arg2: i8) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    
    if just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg1.byte_offset(0xd8), 3)
        != 0
    {
        return 1;
    }
    
    if (arg2 & 1) == 0
    {
        return just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(
            arg1.byte_offset(0xd8), 0xa) ^ 1;
    }
    
    0
}
