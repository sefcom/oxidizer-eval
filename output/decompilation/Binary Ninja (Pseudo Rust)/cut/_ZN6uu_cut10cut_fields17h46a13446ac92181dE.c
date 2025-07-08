
  fn uu_cut::cut_fields::h46a13446ac92181d(arg1: i32, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i128

{
    let r13: i8 = arg4[4];
    
    if r13 == 2
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let rbp: i8 = arg4[5];
    let rdi: i64 = arg4[2];
    
    if rdi != 0
    {
        let mut rax: i64;
        let mut rdx: i64;
        rax = uu_cut::matcher::ExactMatcher::new::h393e805b97031375(rdi, arg4[3]);
        let mut var_40: i64 = rax;
        let var_38_1: i64 = rdx;
        let rax_1: i64 = *arg4;
        
        if rax_1 == 0
        {
            return uu_cut::cut_fields_implicit_out_delim::h3e4a03ff417ae94a(arg1, &var_40, arg2, 
                arg3, r13 != 0, rbp);
        }
        
        return uu_cut::cut_fields_explicit_out_delim::h5c816d4033f8d8fe(arg1, &var_40, arg2, arg3, 
            r13 != 0, rbp, rax_1, arg4[1]);
    }
    
    let rax_3: *mut i8 = *arg4;
    let mut r10_1: i64 = 1;
    
    if rax_3 != 0
    {
        r10_1 = arg4[1];
    }
    
    let mut r11_1: *const i8 = "\t-: \n: Is a directory\ndelimit…";
    
    if rax_3 != 0
    {
        r11_1 = rax_3;
    }
    
    let mut var_41: ();
    uu_cut::cut_fields_explicit_out_delim::h498d740af7877aa6(arg1, &var_41, arg2, arg3, r13 != 0, 
        rbp, r11_1, r10_1)
}
