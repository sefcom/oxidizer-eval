
  uint64_t uu_expr::syntax_tree::Parser$LT$S$GT$::parse_simple_expression::h48250ee92a4d841b(int64_t* arg1, int64_t* arg2)

{
    uint64_t result_1;
    uu_expr::syntax_tree::Parser$LT$S$GT$::next::hcbcc00427960fc28(&result_1, arg2);
    uint64_t result = result_1;
    int64_t var_170;
    uint64_t var_168;
    int64_t var_160;
    int64_t rcx_1;
    
    if (result != 0xd)
    {
        rcx_1 = var_160;
        arg1[1] = result;
        arg1[2] = var_170;
        arg1[3] = var_168;
        label_49b75d:
        arg1[4] = rcx_1;
        *arg1 = -0x7ffffffffffffffb;
        return result;
    }
    
    uint64_t result_2;
    int128_t var_148;
    int128_t var_138_1;
    int64_t var_128;
    int128_t var_f8;
    int128_t var_e8_1;
    int64_t var_c8;
    uint64_t var_c0;
    uint64_t var_b8;
    uint64_t rax_6;
    int64_t r13_1;
    uint64_t r14_1;
    int128_t zmm0_1;
    int128_t zmm0_2;
    int128_t zmm1_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, "matchsubstrindexlength+()/home/3…", 5))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, "substrindexlength+()/home/34r7hm…", 6))
        {
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, 
                arg2);
            result = result_1;
            var_148 = var_170;
            var_138_1 = var_160;
            
            if (result == -0x7ffffffffffffffb)
                goto label_49b980;
            
            var_f8 = var_148;
            var_f8 = result;
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, 
                arg2);
            uint64_t result_6 = result_1;
            var_148 = var_170;
            int128_t var_138_2 = var_160;
            int128_t zmm0_3;
            
            if (result_6 == -0x7ffffffffffffffb)
            {
                zmm0_3 = var_148;
                *(arg1 + 0x18) = var_138_2;
                *(arg1 + 8) = zmm0_3;
                *arg1 = -0x7ffffffffffffffb;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(&var_f8);
            }
            
            zmm0_3 = var_148;
            result_2 = result_6;
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, 
                arg2);
            uint64_t result_8 = result_1;
            int128_t var_a8_1 = var_170;
            int128_t var_98_1 = var_160;
            
            if (result_8 == -0x7ffffffffffffffb)
            {
                *(arg1 + 0x18) = var_98_1;
                *(arg1 + 8) = var_a8_1;
                *arg1 = -0x7ffffffffffffffb;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(
                    &result_2);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(&var_f8);
            }
            
            var_148 = var_a8_1;
            var_148 = result_8;
            int64_t var_d8;
            int64_t var_158_5 = var_d8;
            var_168 = var_138_1;
            result_1 = var_f8;
            uint64_t rax_15 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            uint64_t var_88_1 = rax_15;
            int64_t var_158_6 = *var_138_2[8];
            var_168 = zmm0_3;
            result_1 = result_2;
            uint64_t rax_17 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            var_a8_1 = rax_17;
            int64_t var_158_7 = var_128;
            var_168 = var_98_1;
            result_1 = var_148;
            uint64_t rax_19 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            var_c0 = rax_15;
            var_b8 = rax_17;
            int16_t var_b0;
            var_b0 = rax_19;
            r13_1 = -0x7ffffffffffffffd;
            goto label_49ba2c;
        }
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, "indexlength+()/home/34r7hm4n/dev…", 5))
        {
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, 
                arg2);
            result = result_1;
            var_148 = var_170;
            var_138_1 = var_160;
            
            if (result == -0x7ffffffffffffffb)
                goto label_49b980;
            
            zmm0_1 = var_148;
            result_2 = result;
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, 
                arg2);
            uint64_t result_7 = result_1;
            var_f8 = var_170;
            var_e8_1 = var_160;
            
            if (result_7 == -0x7ffffffffffffffb)
                goto label_49b727;
            
            var_148 = var_f8;
            var_148 = result_7;
            int64_t var_158_1 = *var_138_1[8];
            var_168 = zmm0_1;
            result_1 = result_2;
            uint64_t rax_4 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            r14_1 = rax_4;
            var_f8 = rax_4;
            int64_t var_158_2 = var_128;
            var_168 = var_e8_1;
            result_1 = var_148;
            rax_6 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            int16_t var_b0_1 = 0x102;
            goto label_49ba18;
        }
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, "length+()/home/34r7hm4n/dev/oxid…", 6))
        {
            uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, 
                arg2);
            result = result_1;
            var_148 = var_170;
            var_138_1 = var_160;
            
            if (result == -0x7ffffffffffffffb)
                goto label_49b980;
            
            uint64_t result_3 = result;
            int128_t var_78_1 = var_148;
            int128_t var_68_1 = var_138_1;
            var_c0 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_3);
            r13_1 = -0x7ffffffffffffffc;
            goto label_49ba2c;
        }
        
        uint64_t rdx_1;
        int64_t rsi_13;
        int64_t* rdi_19;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, "+()/home/34r7hm4n/dev/oxidizer/o…", 1))
        {
            uu_expr::syntax_tree::Parser$LT$S$GT$::next::hcbcc00427960fc28(&result_1, arg2);
            result = result_1;
            rsi_13 = var_170;
            rdx_1 = var_168;
            
            if (result == 0xd)
            {
                rdi_19 = &var_c0;
                goto label_49bcce;
            }
            
            rcx_1 = var_160;
            arg1[1] = result;
            arg1[2] = rsi_13;
            arg1[3] = rdx_1;
            goto label_49b75d;
        }
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, "()/home/34r7hm4n/dev/oxidizer/ox…", 1))
        {
            rdi_19 = &var_c0;
            rsi_13 = var_170;
            rdx_1 = var_168;
            label_49bcce:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha1ed10b7b3735d74(rdi_19, rsi_13, rdx_1);
            r13_1 = -0x7fffffffffffffff;
            goto label_49ba2c;
        }
        
        uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, arg2);
        result = result_1;
        var_f8 = var_170;
        int128_t var_e8_2 = var_160;
        
        if (result == -0x7ffffffffffffffb)
        {
            zmm0_1 = var_f8;
            zmm1_1 = var_e8_2;
            goto label_49b98a;
        }
        
        uint64_t result_4 = result;
        int128_t var_50_1 = var_f8;
        int128_t var_40_1 = var_e8_2;
        uu_expr::syntax_tree::AstNode::evaluated::h50cae09c54c1e370(&var_148, &result_4);
        result = var_148;
        int128_t var_a8_2 = var_148;
        int128_t var_138;
        
        if (result == -0x7ffffffffffffffb)
        {
            zmm0_1 = var_a8_2;
            zmm1_1 = var_138;
            goto label_49b98a;
        }
        
        int128_t var_108_4 = var_138;
        result_2 = result;
        uu_expr::syntax_tree::Parser$LT$S$GT$::next::hcbcc00427960fc28(&result_1, arg2);
        uint64_t result_9 = result_1;
        
        if (result_9 == 1)
        {
            int64_t rsi_20 = arg2[1];
            int64_t rdi_32 = arg2[2] - 1;
            
            if (rdi_32 >= rsi_20)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_32, rsi_20);
                /* no return */
            }
            
            int64_t rax_21 = *arg2;
            int64_t rcx_2 = rdi_32 * 3;
            *(rax_21 + (rcx_2 << 3) + 0x10);
            int64_t rax_22;
            uint64_t rdx_2;
            rax_22 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_21 + (rcx_2 << 3) + 8));
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha1ed10b7b3735d74(&var_148, rax_22, rdx_2);
            arg1[4] = var_138;
            *(arg1 + 0x10) = var_148;
            arg1[1] = 6;
            *arg1 = -0x7ffffffffffffffb;
            core::ptr::drop_in_place$LT$uu_expr..ExprError$GT$::hcc83ccc5ddfd1404(&result_1);
            return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(
                &result_2);
        }
        
        if (result_9 != 0xd)
        {
            zmm0_2 = result_1;
            *(arg1 + 0x18) = var_168;
            *(arg1 + 8) = zmm0_2;
        }
        else
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(var_170, var_168, ")/home/34r7hm4n/dev/oxidizer/oxi…", 1))
            {
                var_c8 = result_2;
                var_b8 = var_a8_2;
                goto label_49ba34;
            }
            
            int64_t rsi_23 = arg2[1];
            int64_t rdi_37 = arg2[2] - 1;
            
            if (rdi_37 >= rsi_23)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_37, rsi_23);
                /* no return */
            }
            
            int64_t rax_24 = *arg2;
            int64_t rcx_3 = rdi_37 * 3;
            *(rax_24 + (rcx_3 << 3) + 0x10);
            int64_t rax_25;
            uint64_t rdx_3;
            rax_25 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_24 + (rcx_3 << 3) + 8));
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha1ed10b7b3735d74(&var_148, rax_25, rdx_3);
            arg1[4] = var_138;
            *(arg1 + 0x10) = var_148;
            arg1[1] = 7;
        }
    }
    else
    {
        uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, arg2);
        result = result_1;
        var_148 = var_170;
        var_138_1 = var_160;
        
        if (result == -0x7ffffffffffffffb)
        {
            label_49b980:
            zmm0_1 = var_148;
            zmm1_1 = var_138_1;
            label_49b98a:
            *(arg1 + 0x18) = zmm1_1;
            *(arg1 + 8) = zmm0_1;
            *arg1 = -0x7ffffffffffffffb;
            return result;
        }
        
        zmm0_1 = var_148;
        result_2 = result;
        uu_expr::syntax_tree::Parser$LT$S$GT$::parse_expression::hd5f39d703e318a8f(&result_1, arg2);
        uint64_t result_5 = result_1;
        var_f8 = var_170;
        var_e8_1 = var_160;
        
        if (result_5 != -0x7ffffffffffffffb)
        {
            var_148 = var_f8;
            var_148 = result_5;
            int64_t var_158_3 = *var_138_1[8];
            var_168 = zmm0_1;
            result_1 = result_2;
            uint64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            r14_1 = rax_9;
            var_f8 = rax_9;
            int64_t var_158_4 = var_128;
            var_168 = var_e8_1;
            result_1 = var_148;
            rax_6 = alloc::boxed::Box$LT$T$GT$::new::h112af27c2373377f(&result_1);
            int16_t var_b0_2 = 2;
            label_49ba18:
            var_c0 = r14_1;
            var_b8 = rax_6;
            r13_1 = -0x7ffffffffffffffe;
            label_49ba2c:
            var_c8 = r13_1;
            label_49ba34:
            result = uu_expr::syntax_tree::get_next_id::hf082ef3e5b1b606f();
            *(arg1 + 0x10) = var_b8;
            *arg1 = var_c8;
            arg1[4] = result;
            return result;
        }
        
        label_49b727:
        zmm0_2 = var_f8;
        *(arg1 + 0x18) = var_e8_1;
        *(arg1 + 8) = zmm0_2;
    }
    *arg1 = -0x7ffffffffffffffb;
    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(
        &result_2);
}
