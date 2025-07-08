
  int64_t uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_58;
    uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(&var_58);
    char var_50;
    int64_t result;
    
    if (var_50 != 2)
    {
        int64_t r8;
        int64_t var_38_1 = r8;
        int64_t r14_1 = var_58;
        uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(&var_58);
        
        if (!var_58)
        {
            int64_t rcx;
            rcx = r14_1 < 0x200;
            int64_t var_48;
            char rbp_1 = 2 - 0;
            
            if (!var_50)
                rbp_1 = 2;
            
            char r14_2 = 3;
            
            if (!var_50)
                r14_2 = rcx * 3;
            
            char r15_2 = 4 - !var_50;
            
            if (!*var_58[1])
                r15_2 = 2;
            
            char rax_2 = 1;
            
            if (!uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(arg4))
                rax_2 = rbp_1;
            
            arg1[1] = r14_2;
            arg1[2] = 4;
            arg1[3] = r15_2;
            arg1[4] = rax_2;
            result = 0;
        }
        else
        {
            *(arg1 + 8) = var_50;
            result = 1;
        }
    }
    else
    {
        *(arg1 + 8) = var_58;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
