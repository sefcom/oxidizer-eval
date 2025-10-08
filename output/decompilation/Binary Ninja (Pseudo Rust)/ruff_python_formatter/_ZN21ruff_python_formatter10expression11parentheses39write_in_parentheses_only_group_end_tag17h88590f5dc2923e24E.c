
  fn ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_end_tag::h88590f5dc2923e24(arg1: i64, arg2: i64) -> *mut c_void

{
    let result: *mut c_void = (*(arg2 + 0x30))();
    let rcx: u32 = *result.byte_offset(0x20);
    
    if rcx >= 2
    {
        let mut var_28: i8;
        
        if rcx != 2
        {
            let var_20_2: i8 = 7;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
        
        if *result.byte_offset(0x24) != 0
        {
            let var_20_1: i8 = 9;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
    }
    
    result
}
