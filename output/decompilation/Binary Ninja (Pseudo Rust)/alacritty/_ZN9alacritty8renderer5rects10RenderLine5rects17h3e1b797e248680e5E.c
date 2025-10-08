
  fn alacritty::renderer::rects::RenderLine::rects::h3e1b797e248680e5(arg1: *mut i128, arg2: *mut i64, arg3: i16, arg4: *mut c_void, arg5: *mut c_void) -> i64

{
    let mut var_58: i64 = 0;
    let var_50: i64 = 4;
    let result: i64 = 0;
    let mut r13: i64 = *arg2;
    let mut r9: i64 = arg2[1];
    let rax: i64 = arg2[2];
    let mut rax_3: *mut i64;
    let mut r14_2: u32;
    
    if r13 >= rax
    {
        r14_2 = *arg2.byte_offset(0x22) << 0x10 | arg2[4];
        rax_3 = arg2;
    }
    else
    {
        let r12_2: i64 = *arg5.byte_offset(8) - 1;
        r14_2 = *arg2.byte_offset(0x22) << 0x10 | arg2[4];
        let r15_1: *mut c_void = arg4;
        let rbp_1: *mut c_void = arg5;
        alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(&var_58, arg4, arg5, 
            arg3, r13, r9, r12_2, r14_2);
        let mut r13_1: i64 = r13 + 1;
        
        if r13_1 != rax
        {
            arg4 = r15_1;
            arg5 = rbp_1;
            
            do
            {
                alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(&var_58, 
                    arg4, arg5, arg3, r13_1, 0, r12_2, r14_2);
                r13_1 += 1;
                arg4 = r15_1;
                arg5 = rbp_1;
            } while rax != r13_1;
            
            r13 = rax;
            rax_3 = arg2;
            r9 = 0;
        }
        else
        {
            r9 = 0;
            r13 = rax;
            rax_3 = arg2;
            arg4 = r15_1;
            arg5 = rbp_1;
        }
    }
    
    alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(&var_58, arg4, arg5, 
        arg3, r13, r9, rax_3[3], r14_2);
    arg1[1] = result;
    *arg1 = var_58;
    result
}
