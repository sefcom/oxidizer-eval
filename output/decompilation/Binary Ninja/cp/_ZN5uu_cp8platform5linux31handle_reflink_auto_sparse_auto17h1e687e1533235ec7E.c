
  int64_t uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_50);
    char var_48;
    int64_t result;
    
    if (var_48 != 2)
    {
        int64_t rax = var_50;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_50);
        
        if (!var_50)
        {
            char rbp_1 = *var_50[1];
            int64_t rdi_2;
            int64_t r12;
            int64_t r13;
            
            if (!var_48)
            {
                r13 = !rbp_1;
                r12 = rax - 1 < 0x1ff;
                r12 *= 2;
                r13 ^= 3;
                rbp_1 = (rbp_1 * 2) | 1;
                rdi_2 = arg4;
            }
            else
            {
                if (!rax)
                    r12 = 4;
                else
                    r12 = 2;
                
                rdi_2 = arg4;
                
                if (!rbp_1)
                {
                    rbp_1 = 1;
                    r13 = 2;
                }
                else
                {
                    r13 = 3;
                    rbp_1 = 3;
                    int64_t var_40;
                    
                    if (!var_40)
                    {
                        r12 = 4;
                        r13 = 1;
                    }
                }
            }
            
            char rax_2 = 1;
            
            if (!uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(rdi_2))
                rax_2 = r13;
            
            arg1[1] = r12;
            arg1[2] = 4;
            arg1[3] = rbp_1;
            arg1[4] = rax_2;
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
