
  int64_t uu_cp::platform::linux::handle_reflink_never_sparse_always::heed2137fe7113b5a(char* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    int64_t var_48;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_48);
    char var_40;
    int64_t result;
    
    if (var_40 != 2)
    {
        int64_t r14_1 = var_48;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_48, arg2);
        
        if (var_48 != 1)
        {
            char rbp_1 = *var_48[1];
            uint64_t r12;
            int64_t r13;
            int64_t var_38;
            
            if (!(var_40 & 1))
            {
                int64_t rax_1;
                rax_1 = r14_1 < 0x200;
                r12 = rax_1 * 3;
                r13 = 0;
                
                if (!rbp_1)
                    rbp_1 = 2;
                else
                {
                    r12 = r12;
                    
                    if (var_38)
                        r12 = 0;
                    
                    rbp_1 = 3;
                }
            }
            else
            {
                r13 = !var_38;
                rbp_1 = rbp_1 * 2 + 2;
                r12 = 3;
            }
            char rax_2 =
                (uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg4) | r13) & 1;
            arg1[1] = r12;
            arg1[2] = 1;
            arg1[3] = rbp_1;
            arg1[4] = rax_2;
            result = 0;
        }
        else
        {
            *(arg1 + 8) = var_40;
            result = 1;
        }
    }
    else
    {
        *(arg1 + 8) = var_48;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
