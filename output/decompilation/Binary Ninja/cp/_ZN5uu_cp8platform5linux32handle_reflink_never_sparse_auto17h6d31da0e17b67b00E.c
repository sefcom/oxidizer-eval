
  int64_t uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_50);
    bool var_48;
    int64_t result;
    
    if (var_48 != 2)
    {
        int64_t rax = var_50;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_50);
        
        if (!var_50)
        {
            char rbp_1 = *var_50[1];
            int64_t r12;
            bool r14;
            
            if (!var_48 && rax >= 0x200)
            {
                r14 = !rbp_1;
                rbp_1 = (rbp_1 * 2) | 1;
                r14 ^= 3;
                r12 = 0;
            }
            else if (!rbp_1)
            {
                r12 = 3;
                r14 = true;
                rbp_1 = 1;
            }
            else
            {
                r14 = true;
                int64_t var_40;
                
                if (var_48)
                    r14 = (var_40 * 2) | 1;
                rbp_1 = 3;
                r12 = 3;
            }
            
            bool rax_4 = true;
            
            if (!uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg4))
                rax_4 = r14;
            
            arg1[1] = r12;
            arg1[2] = 1;
            arg1[3] = rbp_1;
            arg1[4] = rax_4;
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
