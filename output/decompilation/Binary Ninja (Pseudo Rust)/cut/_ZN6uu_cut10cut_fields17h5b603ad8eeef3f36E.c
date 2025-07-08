
  fn uu_cut::cut_fields::h5b603ad8eeef3f36(arg1: i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i128

{
    let r13: i8 = arg4[4];
    
    if r13 == 2
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let rbp: i8 = arg4[5];
    let rax: i64 = arg4[2];
    
    if rax != 0
    {
        let mut rax_1: i64;
        let mut rdx: i64;
        rax_1 = uu_cut::matcher::ExactMatcher::new::h393e805b97031375(rax, arg4[3]);
        let mut var_40: i64 = rax_1;
        let var_38_1: i64 = rdx;
        let rax_2: i64 = *arg4;
        
        if rax_2 == 0
        {
            return uu_cut::cut_fields_implicit_out_delim::hc1fc3b9aa7195642(arg1, &var_40, arg2, 
                arg3, r13 != 0, rbp);
        }
        
        return uu_cut::cut_fields_explicit_out_delim::hf1ac07e2d7452ebc(arg1, &var_40, arg2, arg3, 
            r13 != 0, rbp, rax_2, arg4[1]);
    }
    
    let rax_4: *mut i8 = *arg4;
    let mut r10_1: i64 = 1;
    
    if rax_4 != 0
    {
        r10_1 = arg4[1];
    }
    
    let mut r11_1: *const i8 = "\t-: \n: Is a directory\ndelimit…";
    
    if rax_4 != 0
    {
        r11_1 = rax_4;
    }
    
    let mut var_41: ();
    uu_cut::cut_fields_explicit_out_delim::h0a90ca972983d44e(arg1, &var_41, arg2, arg3, r13 != 0, 
        rbp, r11_1, r10_1)
}
