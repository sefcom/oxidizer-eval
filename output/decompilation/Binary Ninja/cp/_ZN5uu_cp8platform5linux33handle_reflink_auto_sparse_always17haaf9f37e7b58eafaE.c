
  int64_t uu_cp::platform::linux::handle_reflink_auto_sparse_always::haaf9f37e7b58eafa(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50;
    uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(&var_50);
    char var_48;
    int64_t result;
    
    if (var_48 != 2)
    {
        int64_t r8;
        int64_t var_38_1 = r8;
        int64_t rbp_1 = var_50;
        uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(&var_50, arg2);
        
        if (var_50 != 1)
        {
            int64_t rax_1;
            rax_1 = var_48 & 1;
            char rbp_2 = 3;
            
            if (rbp_1 >= 0x200)
                rbp_2 = rax_1 * 3;
            
            int64_t r12;
            char r14;
            int64_t var_40;
            
            if (!*var_50[1])
            {
                r14 = 2;
                r12 = 2;
                r12 = 2 - (!var_40 & var_48);
            }
            else if (!(var_48 & 1))
            {
                r14 = 3;
                r12 = 2;
            }
            else
            {
                r12 = 2;
                r12 = 2 - 0;
                r14 = 4;
            }
            char rax_4 = 1;
            
            if (!uu_cp::platform::linux::check_dest_is_fifo::h6561bbf78e4b4973(arg4))
                rax_4 = r12;
            
            arg1[1] = rbp_2;
            arg1[2] = 4;
            arg1[3] = r14;
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
