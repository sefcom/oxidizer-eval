
  void* ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_end_tag::h88590f5dc2923e24(int64_t arg1, int64_t arg2)

{
    void* result = (*(arg2 + 0x30))();
    uint32_t rcx = *(result + 0x20);
    
    if (rcx >= 2)
    {
        char var_28;
        
        if (rcx != 2)
        {
            char var_20_2 = 7;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
        
        if (*(result + 0x24))
        {
            char var_20_1 = 9;
            var_28 = 0xa;
            return (*(arg2 + 0x18))(arg1, &var_28);
        }
    }
    
    return result;
}
