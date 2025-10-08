
  uint64_t ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_start_tag::hd02a107f2b758599(int64_t arg1, int64_t arg2)

{
    uint64_t result = (*(arg2 + 0x30))();
    uint32_t rcx = *(result + 0x20);
    
    if (rcx >= 2)
    {
        char var_28;
        
        if (rcx != 2)
        {
            char var_20_2 = 6;
            int32_t var_1c_2 = 0;
            char var_18_2 = 0;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
        
        result = *(result + 0x24);
        
        if (result)
        {
            char var_20_1 = 8;
            int32_t var_1c_1 = result;
            char var_18_1 = 1;
            char var_14_1 = 0;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
    }
    
    return result;
}
