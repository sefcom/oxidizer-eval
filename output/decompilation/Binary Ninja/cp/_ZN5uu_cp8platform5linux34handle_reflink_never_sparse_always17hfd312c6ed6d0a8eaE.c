
  int64_t uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(char* arg1, uint64_t arg2, int64_t arg3, int64_t arg4)

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
            int64_t r12;
            uint64_t r13;
            int64_t var_40;
            
            if (!var_48)
            {
                int64_t rax_1;
                rax_1 = rax < 0x200;
                r12 = 0;
                r13 = rax_1 * 3;
                
                if (!rbp_1)
                    rbp_1 = 2;
                else
                {
                    r13 = r13;
                    
                    if (var_40)
                        r13 = 0;
                    
                    rbp_1 = 3;
                }
            }
            else
            {
                r12 = !var_40;
                rbp_1 = rbp_1 * 2 + 2;
                r13 = 3;
            }
            char rax_2 = uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg4) | r12;
            arg1[1] = r13;
            arg1[2] = 1;
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
