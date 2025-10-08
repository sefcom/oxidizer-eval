
  fn ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_start_tag::hd02a107f2b758599(arg1: i64, arg2: i64) -> u64

{
    let mut result: u64 = (*(arg2 + 0x30))();
    let rcx: u32 = *(result + 0x20);
    
    if rcx >= 2
    {
        let mut var_28: i8;
        
        if rcx != 2
        {
            let var_20_2: i8 = 6;
            let var_1c_2: i32 = 0;
            let var_18_2: i8 = 0;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
        
        result = *(result + 0x24);
        
        if result != 0
        {
            let var_20_1: i8 = 8;
            let var_1c_1: i32 = result;
            let var_18_1: i8 = 1;
            let var_14_1: i8 = 0;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
    }
    
    result
}
