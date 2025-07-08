
  int128_t* uu_cut::cut_fields::h46a13446ac92181d(int32_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    char r13 = arg4[4];
    
    if (r13 == 2)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    char rbp = arg4[5];
    int64_t rdi = arg4[2];
    
    if (rdi)
    {
        int64_t rax;
        int64_t rdx;
        rax = uu_cut::matcher::ExactMatcher::new::h393e805b97031375(rdi, arg4[3]);
        int64_t var_40 = rax;
        int64_t var_38_1 = rdx;
        int64_t rax_1 = *arg4;
        
        if (!rax_1)
            return uu_cut::cut_fields_implicit_out_delim::h3e4a03ff417ae94a(arg1, &var_40, arg2, 
                arg3, r13, rbp);
        
        return uu_cut::cut_fields_explicit_out_delim::h5c816d4033f8d8fe(arg1, &var_40, arg2, arg3, 
            r13, rbp, rax_1, arg4[1]);
    }
    
    char* rax_3 = *arg4;
    int64_t r10_1 = 1;
    
    if (rax_3)
        r10_1 = arg4[1];
    
    char const* const r11_1 = "\t-: \n: Is a directory\ndelimit…";
    
    if (rax_3)
        r11_1 = rax_3;
    
    void var_41;
    return uu_cut::cut_fields_explicit_out_delim::h498d740af7877aa6(arg1, &var_41, arg2, arg3, r13, 
        rbp, r11_1, r10_1);
}
