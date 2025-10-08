
  uint64_t uu_cut::cut_fields::hefd7750461942b3d(int64_t arg1, int64_t* arg2, int128_t* arg3, int64_t arg4, int64_t* arg5)

{
    char rbx = arg5[4];
    
    if (rbx == 2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    char rbp = arg5[5];
    char* rax = arg5[2];
    uint64_t result;
    
    if (!rax)
    {
        char* rax_3 = *arg5;
        int64_t r10_3 = 1;
        
        if (rax_3)
            r10_3 = arg5[1];
        
        char const* const r11_1 = "\t-: \n: Is a directory\ninvalid…";
        
        if (rax_3)
            r11_1 = rax_3;
        
        int64_t var_68_2 = r10_3;
        char const* const var_70_2 = r11_1;
        void var_49;
        result = uu_cut::cut_fields_explicit_out_delim::h01165510980ce6dc(arg1, arg2, &var_49, 
            arg3, arg4, rbx, rbp);
    }
    else
    {
        int64_t rcx = arg5[3];
        
        if (rcx == 1 && *rax == rbp)
        {
            char* rcx_1 = *arg5;
            int64_t r10_1 = 1;
            
            if (rcx_1)
            {
                r10_1 = arg5[1];
                rax = rcx_1;
            }
            
            return uu_cut::cut_fields_newline_char_delim::h70d6109e474d67d6(arg1, *arg2, arg2[1], 
                arg3, arg4, rbp, rax, r10_1);
        }
        
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uu_cut::matcher::ExactMatcher::new::h2730585d9170e560(rax, rcx);
        int64_t var_40 = rax_1;
        int64_t var_38_1 = rdx_1;
        int64_t rax_2 = *arg5;
        
        if (!rax_2)
        {
            uint64_t var_68_3 = rbp;
            result = uu_cut::cut_fields_implicit_out_delim::hf56b39c99b8eafb6(arg1, arg2, &var_40, 
                arg3, arg4, rbx);
        }
        else
        {
            int64_t var_68_1 = arg5[1];
            int64_t var_70_1 = rax_2;
            result = uu_cut::cut_fields_explicit_out_delim::h718b4fa483b7739e(arg1, arg2, &var_40, 
                arg3, arg4, rbx, rbp);
        }
    }
    
    return result;
}
