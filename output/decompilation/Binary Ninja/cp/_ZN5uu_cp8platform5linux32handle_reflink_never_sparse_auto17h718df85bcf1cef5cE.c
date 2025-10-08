
  int64_t uu_cp::platform::linux::handle_reflink_never_sparse_auto::h718df85bcf1cef5c(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_50);
    char var_48;
    int64_t result;
    
    if (var_48 != 2)
    {
        int64_t r14_1 = var_50;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_50, arg2);
        
        if (var_50 != 1)
        {
            char __saved_rdx_1 = *var_50[1];
            char rbp;
            int64_t r13;
            
            if (r14_1 >= 0x200 & (var_48 ^ 1))
            {
                rbp = __saved_rdx_1 * 2 + 1;
                __saved_rdx_1 |= 2;
                r13 = 0;
            }
            else if (!__saved_rdx_1)
            {
                r13 = 3;
                __saved_rdx_1 = 2;
                rbp = 1;
            }
            else
            {
                int64_t var_40;
                __saved_rdx_1 = ((var_40 | ~var_48) & 1) * 2 + 1;
                rbp = 3;
                r13 = 3;
            }
            
            char __saved_rdx_2 = 1;
            
            if (!uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg4))
                __saved_rdx_2 = __saved_rdx_1;
            
            arg1[1] = r13;
            arg1[2] = 1;
            arg1[3] = rbp;
            arg1[4] = __saved_rdx_2;
            result = 0;
        }
        else
        {
            *(arg1 + 8) = var_48;
            result = 1;
        }
    }
    else
    {
        *(arg1 + 8) = var_50;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
