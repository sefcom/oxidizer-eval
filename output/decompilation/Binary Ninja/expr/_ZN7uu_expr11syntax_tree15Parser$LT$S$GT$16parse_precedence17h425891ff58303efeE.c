
  int64_t* uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t* r15 = arg2;
    
    if (arg3 > 5)
        /* tailcall */
        return uu_expr::syntax_tree::Parser$LT$S$GT$::parse_simple_expression::h48250ee92a4d841b(
            arg1, r15);
    
    int64_t rbx = arg3;
    int64_t var_d8;
    uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(&var_d8, r15, 
        arg3 + 1);
    int64_t rax_1 = var_d8;
    int64_t* result;
    int128_t var_d0;
    int128_t var_c0;
    
    if (rax_1 != -0x7ffffffffffffffb)
    {
        int128_t var_e8_1 = var_c0;
        int128_t var_f8_1 = var_d0;
        int64_t var_100 = rax_1;
        int64_t var_50_1 = -0x7ffffffffffffffe;
        int64_t var_40_1 = rbx;
        int64_t* var_48_1 = r15;
        
        while (true)
        {
            var_d8 = rbx;
            char rax_2;
            char rdx_2;
            rax_2 = uu_expr::syntax_tree::Parser$LT$S$GT$::accept::h4b5ad55db2b3a3a4(r15, &var_d8);
            
            if (rax_2 == 3)
            {
                result = *var_e8_1[8];
                arg1[4] = result;
                int128_t zmm0_2 = var_100;
                *(arg1 + 0x10) = var_f8_1;
                *arg1 = zmm0_2;
                break;
            }
            
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(&var_d8, 
                r15, arg3 + 1);
            int64_t rax_3 = var_d8;
            
            if (rax_3 == -0x7ffffffffffffffb)
            {
                *(arg1 + 0x18) = var_c0;
                *(arg1 + 8) = var_d0;
                *arg1 = -0x7ffffffffffffffb;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(&var_100);
            }
            
            int128_t var_98 = var_c0;
            int128_t var_a8 = var_d0;
            var_a8 = rax_3;
            int32_t rax_4 = uu_expr::syntax_tree::get_next_id::hf082ef3e5b1b606f();
            *var_c0[8] = *var_e8_1[8];
            var_d0 = var_f8_1;
            var_d8 = var_100;
            uint64_t rax_6 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&var_d8);
            int128_t var_78_1;
            var_78_1 = rax_6;
            int64_t var_88;
            *var_c0[8] = var_88;
            var_d0 = var_98;
            var_d8 = var_a8;
            uint64_t rax_8 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&var_d8);
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
        *(result + 0x18) = var_c0;
        *(result + 8) = var_d0;
        *result = -0x7ffffffffffffffb;
    }
    return result;
}
