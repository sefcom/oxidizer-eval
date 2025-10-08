
  fn uu_cut::cut_fields::hefd7750461942b3d(arg1: i64, arg2: *mut i64, arg3: *mut i128, arg4: i64, arg5: *mut i64) -> u64

{
    let rbx: i8 = arg5[4];
    
    if rbx == 2
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let rbp: i8 = arg5[5];
    let mut rax: *mut i8 = arg5[2];
    let mut result: u64;
    
    if rax == 0
    {
        let rax_3: *mut i8 = *arg5;
        let mut r10_3: i64 = 1;
        
        if rax_3 != 0
        {
            r10_3 = arg5[1];
        }
        
        let mut r11_1: *const i8 = "\t-: \n: Is a directory\ninvalid…";
        
        if rax_3 != 0
        {
            r11_1 = rax_3;
        }
        
        let var_68_2: i64 = r10_3;
        let var_70_2: *const i8 = r11_1;
        let mut var_49: ();
        result = uu_cut::cut_fields_explicit_out_delim::h01165510980ce6dc(arg1, arg2, &var_49, 
            arg3, arg4, rbx, rbp);
    }
    else
    {
        let rcx: i64 = arg5[3];
        
        if rcx == 1 && *rax == rbp
        {
            let rcx_1: *mut i8 = *arg5;
            let mut r10_1: i64 = 1;
            
            if rcx_1 != 0
            {
                r10_1 = arg5[1];
                rax = rcx_1;
            }
            
            return uu_cut::cut_fields_newline_char_delim::h70d6109e474d67d6(arg1, *arg2, arg2[1], 
                arg3, arg4, rbp, rax, r10_1);
        }
        
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = uu_cut::matcher::ExactMatcher::new::h2730585d9170e560(rax, rcx);
        let mut var_40: i64 = rax_1;
        let var_38_1: i64 = rdx_1;
        let rax_2: i64 = *arg5;
        
        if rax_2 == 0
        {
            let var_68_3: u64 = rbp;
            result = uu_cut::cut_fields_implicit_out_delim::hf56b39c99b8eafb6(arg1, arg2, &var_40, 
                arg3, arg4, rbx);
        }
        else
        {
            let var_68_1: i64 = arg5[1];
            let var_70_1: i64 = rax_2;
            result = uu_cut::cut_fields_explicit_out_delim::h718b4fa483b7739e(arg1, arg2, &var_40, 
                arg3, arg4, rbx, rbp);
        }
    }
    
    result
}
