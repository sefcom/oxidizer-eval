
  int64_t uu_paste::DelimiterState::remove_trailing_delimiter::h00dfcc6c7a63cba7(int64_t arg1, int64_t arg2, void* arg3)

{
    int64_t result;
    result = !arg1;
    
    if ((!arg2 | result) != 1)
    {
        result = *(arg3 + 0x10);
        int64_t result_1 = result;
        
        if (result >= arg2)
        {
            *(arg3 + 0x10) = result - arg2;
            return result;
        }
        
        if (result)
        {
            int64_t var_30 = 0;
            core::panicking::assert_failed::h449f2a7fe5426575(0, &result_1, &data_417478[8], 
                &var_30);
            /* no return */
        }
    }
    
    return result;
}
