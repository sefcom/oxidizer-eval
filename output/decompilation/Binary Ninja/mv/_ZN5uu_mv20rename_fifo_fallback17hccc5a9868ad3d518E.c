
  int64_t uu_mv::rename_fifo_fallback::hccc5a9868ad3d518(int64_t arg1, int64_t arg2, char* arg3, int64_t arg4)

{
    char var_30;
    std::fs::exists::h687a541e0d003889(&var_30, arg3);
    
    if (var_30 == 1)
    {
        int64_t var_28;
        return var_28;
    }
    
    char var_2f;
    int64_t rax_1;
    
    if (var_2f != 1)
    {
        label_48d7a2:
        rax_1 = uucore::features::fs::make_fifo::hb14eabe17aca9891(arg3, arg4);
        
        if (!rax_1)
            /* tailcall */
            return std::fs::remove_file::hcda18fb70e9be9e2(arg1);
    }
    else
    {
        rax_1 = std::fs::remove_file::hcda18fb70e9be9e2(arg3);
        
        if (!rax_1)
            goto label_48d7a2;
    }
    
    return rax_1;
}
