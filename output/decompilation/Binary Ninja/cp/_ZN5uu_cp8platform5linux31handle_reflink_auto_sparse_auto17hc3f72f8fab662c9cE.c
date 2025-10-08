
  uint64_t uu_cp::platform::linux::handle_reflink_auto_sparse_auto::hc3f72f8fab662c9c(char* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    uint64_t var_48;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_48);
    char var_40;
    uint64_t result;
    
    if (var_40 != 2)
    {
        uint64_t rbp_1 = var_48;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_48, arg2);
        
        if (var_48 != 1)
        {
            uint32_t rax_1 = *var_48[1];
            int64_t rdi_2;
            uint64_t r12;
            int64_t r13;
            
            if (!(var_40 & 1))
            {
                r13 = rbp_1 - 1 < 0x1ff;
                r13 *= 2;
                rbp_1 = rax_1 + 2;
                rax_1 *= 2;
                rax_1 += 1;
                r12 = rax_1;
                rdi_2 = arg4;
            }
            else if (!rbp_1)
            {
                r13 = 4;
                
                if (!rax_1)
                {
                    r12 = 1;
                    rbp_1 = 2;
                    rdi_2 = arg4;
                }
                else
                {
                    label_49c261:
                    rbp_1 = 3;
                    r12 = 3;
                    rdi_2 = arg4;
                    int64_t var_38;
                    
                    if (!var_38)
                    {
                        r13 = 4;
                        rbp_1 = 1;
                    }
                }
            }
            else
            {
                r12 = 1;
                r13 = 2;
                
                if (rax_1)
                    goto label_49c261;
                
                rbp_1 = 2;
                rdi_2 = arg4;
            }
            
            char rax_3 = 1;
            
            if (!uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(rdi_2))
                rax_3 = rbp_1;
            
            arg1[1] = r13;
            arg1[2] = 4;
            arg1[3] = r12;
            arg1[4] = rax_3;
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
