
  int64_t uu_cp::platform::linux::handle_reflink_auto_sparse_never::hbf2c8fb4c904c675(char* arg1)

{
    int64_t var_40;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_40);
    char var_38;
    int64_t result;
    
    if (var_38 != 2)
    {
        int64_t r12_1 = var_40;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_40);
        
        if (!var_40)
        {
            char rax = *var_40[1];
            int64_t rcx_1;
            rcx_1 = r12_1 < 0x200;
            char rdx_1 = 3;
            
            if (!var_38)
                rdx_1 = rcx_1 * 3;
            
            arg1[1] = rdx_1;
            arg1[2] = 1;
            arg1[3] = (rax * 2) | 1;
            result = 0;
        }
        else
        {
            *(arg1 + 8) = var_38;
            result = 1;
        }
    }
    else
    {
        *(arg1 + 8) = var_40;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
