
  int128_t* uu_cut::cut_fields::h5b603ad8eeef3f36(int64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    char r13 = arg4[4];
    
    if (r13 == 2)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    char rbp = arg4[5];
    int64_t rax = arg4[2];
    
    if (rax)
    {
        int64_t rax_1;
        int64_t rdx;
        rax_1 = uu_cut::matcher::ExactMatcher::new::h393e805b97031375(rax, arg4[3]);
        int64_t var_40 = rax_1;
        int64_t var_38_1 = rdx;
        int64_t rax_2 = *arg4;
        
        if (!rax_2)
            return uu_cut::cut_fields_implicit_out_delim::hc1fc3b9aa7195642(arg1, &var_40, arg2, 
                arg3, r13, rbp);
        
        return uu_cut::cut_fields_explicit_out_delim::hf1ac07e2d7452ebc(arg1, &var_40, arg2, arg3, 
            r13, rbp, rax_2, arg4[1]);
    }
    
    char* rax_4 = *arg4;
    int64_t r10_1 = 1;
    
    if (rax_4)
        r10_1 = arg4[1];
    
    char const* const r11_1 = "\t-: \n: Is a directory\ndelimit…";
    
    if (rax_4)
        r11_1 = rax_4;
    
    void var_41;
    return uu_cut::cut_fields_explicit_out_delim::h0a90ca972983d44e(arg1, &var_41, arg2, arg3, r13, 
        rbp, r11_1, r10_1);
}
