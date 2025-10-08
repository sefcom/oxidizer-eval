
  fn uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let mut r15: *mut i64 = arg2;
    
    if arg3 > 5
    {
        /* tailcall */
        return uu_expr::syntax_tree::Parser$LT$S$GT$::parse_simple_expression::h48250ee92a4d841b(
            arg1, r15);
    }
    
    let mut rbx: i64 = arg3;
    let mut var_d8: i64;
    uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(&var_d8, r15, 
        arg3 + 1);
    let rax_1: i64 = var_d8;
    let mut result: *mut i64;
    let mut var_d0: i128;
    let mut var_c0: i128;
    
    if rax_1 != -0x7ffffffffffffffb
    {
        let mut var_e8_1: i128 = var_c0;
        let mut var_f8_1: i128 = var_d0;
        let mut var_100: i64 = rax_1;
        let var_50_1: i64 = -0x7ffffffffffffffe;
        let var_40_1: i64 = rbx;
        let var_48_1: *mut i64 = r15;
        
        loop
        {
            var_d8 = rbx;
            let mut rax_2: i8;
            let mut rdx_2: i8;
            rax_2 = uu_expr::syntax_tree::Parser$LT$S$GT$::accept::h4b5ad55db2b3a3a4(r15, &var_d8);
            
            if rax_2 == 3
            {
                result = *var_e8_1[8];
                arg1[4] = result;
                let zmm0_2: i128 = var_100;
                *arg1.byte_offset(0x10) = var_f8_1;
                *arg1 = zmm0_2;
                break;
            }
            
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(&var_d8, 
                r15, arg3 + 1);
            let rax_3: i64 = var_d8;
            
            if rax_3 == -0x7ffffffffffffffb
            {
                *arg1.byte_offset(0x18) = var_c0;
                *arg1.byte_offset(8) = var_d0;
                *arg1 = -0x7ffffffffffffffb;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(&var_100);
            }
            
            let var_98: i128 = var_c0;
            let mut var_a8: i128 = var_d0;
            var_a8 = rax_3;
            let rax_4: i32 = uu_expr::syntax_tree::get_next_id::hf082ef3e5b1b606f();
            *var_c0[8] = *var_e8_1[8];
            var_d0 = var_f8_1;
            var_d8 = var_100;
            let rax_6: u64 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&var_d8);
            let mut var_78_1: i128;
            var_78_1 = rax_6;
            let var_88: i64;
            *var_c0[8] = var_88;
            var_d0 = var_98;
            var_d8 = var_a8;
            let rax_8: u64 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&var_d8);
            var_100 = var_50_1;
            var_f8_1 = rax_6;
            *var_f8_1[8] = rax_8;
            var_e8_1 = rax_2;
            *var_e8_1[1] = rdx_2;
            *var_e8_1[8] = rax_4;
            r15 = var_48_1;
            rbx = var_40_1;
        }
    }
    else
    {
        result = arg1;
        *result.byte_offset(0x18) = var_c0;
        *result.byte_offset(8) = var_d0;
        *result = -0x7ffffffffffffffb;
    }
    result
}
