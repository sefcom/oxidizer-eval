
  int64_t uu_cp::platform::linux::handle_reflink_auto_sparse_never::hd22b7d91bc1c3709(char* arg1, int64_t arg2)

{
    int64_t var_40;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_40);
    char var_38;
    int64_t result;
    
    if (var_38 != 2)
    {
        int64_t r12_1 = var_40;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_40, arg2);
        
        if (var_40 != 1)
        {
            char rax = *var_40[1];
            int64_t rcx_1;
            rcx_1 = var_38 & 1;
            char rdx_1 = 3;
            
            if (r12_1 >= 0x200)
                rdx_1 = rcx_1 * 3;
            
            arg1[1] = rdx_1;
            arg1[2] = 1;
            arg1[3] = rax * 2 + 1;
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
