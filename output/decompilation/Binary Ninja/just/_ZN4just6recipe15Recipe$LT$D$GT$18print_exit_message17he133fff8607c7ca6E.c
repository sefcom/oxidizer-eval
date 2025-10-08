
  int64_t just::recipe::Recipe$LT$D$GT$::print_exit_message::he133fff8607c7ca6(void* arg1, char arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg1 + 0xd8, 3))
        return 1;
    
    if (!(arg2 & 1))
        return just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg1 + 0xd8, 0xa) ^ 1;
    
    return 0;
}
