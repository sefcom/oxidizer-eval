
  fn alacritty::renderer::text::atlas::Atlas::load_glyph::hc84a3ea245fb6fcb(arg1: *mut i32, arg2: *mut i32, arg3: *mut i64, arg4: *mut i64, arg5: *mut i64) -> u64

{
    let mut rbp_1: i64;
    let mut r14_1: i64;
    
    loop
    {
        rbp_1 = *arg4;
        r14_1 = arg3[2];
        
        if rbp_1 >= r14_1
        {
            break;
        }
        
        let r15_1: *mut c_void = arg3[1];
        let rbx_1: i64 = rbp_1 * 0x1b;
        let r13_2: *mut i32 = r15_1.byte_offset(rbp_1).byte_offset(rbx_1);
        let mut var_6c: i128;
        alacritty::renderer::text::atlas::Atlas::insert::h8c37d2eea1fa4b0a(&var_6c, r13_2, arg5, 
            arg2);
        let var_50: i8;
        let mut result: u64;
        
        if var_50 != 2
        {
            let zmm0_1: i128 = var_6c;
            result = arg1;
            let var_5c: i128;
            *(result + 0x10) = var_5c;
            *result = zmm0_1;
            return result;
        }
        
        if var_6c != 0
        {
            result = *r13_2;
            *arg1 = result;
            __builtin_memset(&arg1[1], 0, 0x19);
            return result;
        }
        
        let rax_3: i8 = *r15_1.byte_offset(rbx_1 + rbp_1).byte_offset(0x18);
        *arg4 = rbp_1 + 1;
        
        if rbp_1 + 1 == r14_1
        {
            let mut var_4c: ();
            alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(&var_4c, rax_3);
            *arg2 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6493a9a40798fa41(arg3, &var_4c);
        }
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, r14_1);
    /* no return */
}
