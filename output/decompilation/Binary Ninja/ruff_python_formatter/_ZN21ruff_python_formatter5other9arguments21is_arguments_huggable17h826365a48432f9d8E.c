
  void ruff_python_formatter::expression::is_splittable_expression::h3a87ae32553a879a(int64_t* arg1, int64_t* arg2, char* arg3, int64_t arg4, char* arg5, long double arg6 @ st0, int64_t arg7, int64_t arg8, int64_t arg9, int64_t arg10, int64_t arg11)

{
    int32_t* rbp;
    int32_t* var_8 = rbp;
    char* r12;
    char* var_28 = r12;
    int32_t* rbx;
    int32_t* var_30 = rbx;
    int64_t rax;
    int64_t var_38 = rax;
    int64_t* rsp = &var_38;
    int64_t* rbx_1 = arg1;
    void* r12_1 = arg2[2];
    int64_t* r14 = *arg2;
    char* r15 = arg2[1];
    int64_t* rax_1 = 8;
    rbp = 1;
    int64_t rcx_1 = *(&jump_table_487720 + (*arg1 << 2));
    void* rcx_2 = rcx_1 + &jump_table_487720;
    bool c = rcx_1 + &jump_table_487720 < rcx_1;
    void* rbx_2;
    char* r9;
    
    switch (rcx_2)
    {
        case 0x710554:
        {
            label_710554:
            rbx_2 = &rbx_1[1];
            goto label_710558;
        }
        case 0x71056c:
        {
            goto label_71056c;
        }
        case 0x710571:
        {
            char* __saved_r13;
            
            while (true)
            {
                rbx_2 = rbx_1 + rax_1;
                int64_t rax_3;
                int64_t rdx;
                rax_3 = ruff_python_ast::expression::_$LT$impl$u20$core..convert..From$LT$$RF$alloc..boxed..Box$LT$ruff_python_ast..generated..Expr$GT$$GT$$u20$for$u20$ruff_python_ast..generated..ExprRef$GT$::from::h473989b5e34cd5c1(rbx_2);
                void* rcx_4 = *(r12_1 + 0x60);
                char rax_4;
                rax_4 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_3, rdx, *(rcx_4 + 8), *(rcx_4 + 0x10), r14, r15);
                
                if (rax_4)
                    return;
                
                label_710558:
                rbx_1 = *rbx_2;
                int64_t rcx_3 = *(&jump_table_487720 + (*rbx_1 << 2));
                rcx_2 = rcx_3 + &jump_table_487720;
                c = rcx_3 + &jump_table_487720 < rcx_3;
                bool z_1 = rcx_3 == -0x487720;
                rax_1 = 8;
                uint64_t rsi_5;
                
                switch (rcx_2)
                {
                    case 0x710554:
                    {
                        goto label_710554;
                    }
                    case 0x71056c:
                    {
                        label_71056c:
                        rax_1 = 0x30;
                        continue;
                    }
                    case 0x710571:
                    {
                        continue;
                    }
                    case 0x7105a4:
                    {
                        return;
                        break;
                    }
                    case 0x7105a8:
                    {
                        goto label_7105a8;
                    }
                    case 0x7105c2:
                    {
                        goto label_7105c8;
                    }
                    case 0x7105ce:
                    {
                        goto label_7105df;
                    }
                    case 0x7105e5:
                    {
                        goto label_7105ea;
                    }
                    case 0x7105f0:
                    {
                        goto label_7105f6;
                    }
                    case 0x7105fc:
                    {
                        goto label_710600;
                    }
                    case 0x71060b:
                    {
                        goto label_71060b;
                    }
                    case 0x710612:
                    {
                        goto label_710612;
                    }
                    case 0x710619:
                    {
                        goto label_710619;
                    }
                    case 0x710624:
                    {
                        goto label_710624;
                    }
                    case 0x71062b:
                    {
                        goto label_710637;
                    }
                    case 0x710639:
                    {
                        goto label_710639;
                    }
                    case 0x71063f:
                    {
                        goto label_71063f;
                    }
                    case 0x710647:
                    {
                        goto label_710647;
                    }
                    case 0x710676:
                    {
                        goto label_71068d;
                    }
                    case 0x710f8a:
                    {
                        if (z_1 || c)
                        {
                            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(
                                &__saved_r13, r15, r14, arg3, rbp);
                            break;
                        }
                        
                        core::panicking::panic::h85d6dd562679980c(
                            "assertion failed: start.raw <= e…");
                        /* no return */
                    }
                    case 0x710fd8:
                    {
                        goto label_710fe6;
                    }
                    case 0x710feb:
                    {
                        goto label_710feb;
                    }
                    case 0x7110ad:
                    {
                        if (!z_1 && rcx_3 + &jump_table_487720 < 0 == rcx_3 + &jump_table_487720)
                            goto label_71111e;
                        
                        *arg1;
                        *(rcx_2 + 0x49000000);
                        goto label_7110b9;
                    }
                    case 0x7110b6:
                    {
                        r14 = arg1;
                        label_7110b9:
                        void* rdi_9 = rbx_1[2];
                        var_30 = 0x52;
                        var_28 = r15;
                        arg1 = rdi_9 + 0x40;
                        arg2 = &var_30;
                        goto label_7110d4;
                    }
                    case 0x7110ca:
                    {
                        *-0xffffffffffffff8b = *-0xffffffffffffff8b + rcx_2;
                        *0x50 = 0x824748d;
                        label_7110d4:
                        
                        if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(arg1, arg2))
                            return;
                        
                        rsi_5 = *(rbx_1 + 0x3a);
                        char rax_15;
                        rax_15 = ruff_python_formatter::expression::is_expression_huggable::h5ffd1dce1549d9d3(r15, rsi_5);
                        
                        if (!rax_15)
                        {
                            rax_1 = *r15 - 0x11;
                            int64_t rdi_8;
                            
                            if (rax_1 > 3)
                            {
                                rdi_8 = 4;
                                label_711109:
                                
                                if (!core::result::Result$LT$T$C$E$GT$::is_ok_and::h7f3cfb37151e3ad4(rdi_8, rsi_5, r14, rbx_1))
                                    return;
                                
                                goto label_711112;
                            }
                            
                            label_71108d:
                            void* rax_18 =
                                *(&jump_table_487828 + (rax_1 << 2)) + &jump_table_487828;
                            bool cond:1_1;
                            
                            switch (rax_18)
                            {
                                case 0x711092:
                                {
                                    rsi_5 = &r15[8];
                                    rdi_8 = 2;
                                    break;
                                }
                                case 0x7110e0:
                                {
                                    rsi_5 = &r15[8];
                                    rdi_8 = 0;
                                    break;
                                }
                                case 0x7110e8:
                                {
                                    rsi_5 = &r15[8];
                                    rdi_8 = 1;
                                    break;
                                }
                                case 0x7110f3:
                                {
                                    rsi_5 = &r15[8];
                                    rdi_8 = 3;
                                    break;
                                }
                                case 0x7111b5:
                                {
                                    switch (arg1)
                                    {
                                        case nullptr:
                                        {
                                            if (!(0 + -(*rsi_5)))
                                                return;
                                            
                                            label_711200:
                                            
                                            if (_$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_38, &jump_table_487828))
                                            {
                                                int64_t __saved_r14;
                                                ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&__saved_r14, &var_38);
                                                char* rax_26;
                                                int64_t __saved_r13_2;
                                                rax_26 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba4549c63691e541(&__saved_r14);
                                                
                                                if (rax_26 != 4)
                                                {
                                                    var_28 = rax_26;
                                                    int64_t __saved_r13_1 = __saved_r13_2;
                                                    
                                                    if (ruff_python_ast::expression::StringLikePart::flags::h96befe9c7d415d6d(&var_28) & 2)
                                                    {
                                                        int32_t rdi_17 = *(arg3 + 0x20) + 1;
                                                        int32_t rsi_9 = *(var_30
                                                            + *(&data_488f20 + (arg1 << 3)));
                                                        
                                                        if (rdi_17 > rsi_9)
                                                        {
                                                            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                                                            /* no return */
                                                        }
                                                        
                                                        uint64_t rax_30;
                                                        int64_t rdx_7;
                                                        rax_30 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rdi_17, rsi_9);
                                                        void* rax_31;
                                                        int64_t rdx_8;
                                                        rax_31 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_30, rdx_7, 0x2898cb0028986a, 
                                                            0x2898c0002898b8);
                                                        
                                                        if (!rax_31)
                                                        {
                                                            core::str::slice_error_fail::h1a2885084e28d077(0x2898cb0028986a, 0x2898c0002898b8, 
                                                                rax_30, rdx_7);
                                                            /* no return */
                                                        }
                                                        
                                                        int64_t rax_32;
                                                        int64_t rdx_9;
                                                        rax_32 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace_end::h00cfedb6aec28166(rax_31, rdx_8);
                                                        core::str::pattern::Pattern::is_suffix_of::had5512fe1fd6436b(rax_32, rdx_9);
                                                    }
                                                }
                                            }
                                            
                                            return;
                                            break;
                                        }
                                        case 1:
                                        {
                                            if (!*rsi_5)
                                                return;
                                            
                                            goto label_711200;
                                        }
                                        case 2:
                                        {
                                            rax_18 = -0x8000000000000001;
                                            label_7111db:
                                            cond:1_1 = *rsi_5 != rax_18;
                                            goto label_7111de;
                                        }
                                        case 3:
                                        {
                                            if (!(0 + -(*rsi_5)))
                                                goto label_711200;
                                            
                                            return;
                                            break;
                                        }
                                    }
                                    break;
                                }
                                case 0x7111be:
                                {
                                    /* jump -> 0x41c00149 */
                                }
                                case 0x7111d2:
                                {
                                    *rax_18 += rax_18;
                                    *rax_18 += rax_18;
                                    *(rax_18 + 0x48c0ff48) += rax_18;
                                    cond:1_1 = *rsi_5 != rax_18;
                                    label_7111de:
                                    
                                    if (cond:1_1)
                                        goto label_711200;
                                    
                                    return;
                                    break;
                                }
                                case 0x7111db:
                                {
                                    goto label_7111db;
                                }
                            }
                            
                            goto label_711109;
                        }
                        
                        label_711112:
                        arg2 = rbx_1[2];
                        arg1 = &var_30;
                        arg3 = r15;
                        label_71111e:
                        ruff_python_formatter::comments::Comments::leading_dangling_trailing::hef34da7d88b7bda1(arg1, arg2, arg3);
                        
                        if (!(var_8 | var_28))
                        {
                            rbp = 1;
                            
                            if (!*(rbx_1 + 0x37))
                            {
                                int32_t rdx_5 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(r15);
                                int32_t rsi_7 = *(r14 + 0x24);
                                
                                if (rdx_5 > rsi_7)
                                {
                                    core::panicking::panic::h85d6dd562679980c(
                                        "assertion failed: start.raw <= e…");
                                    /* no return */
                                }
                                
                                ruff_python_formatter::other::commas::has_magic_trailing_comma::h260365a92ddcfcb5(rdx_5, rsi_7, rbx_1);
                            }
                        }
                        
                        return;
                        break;
                    }
                    case 0x7110d3:
                    {
                        rax_1 = 8 | *rcx_2[1];
                        
                        if (rax_1 <= 0)
                            /* undefined */
                        
                        rsi_5 = arg2 + *(arg1 + 0x7c);
                        goto label_71108d;
                    }
                }
            }
            
            label_710fb6:
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&*var_30[4], 
                &__saved_r13);
            
            if (*var_28[4] == 6)
            {
                rbx_1 = &*var_30[4];
                r14 = &__saved_r13;
                label_710fe6:
                core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(rbx_1, r14);
                label_710feb:
                uint32_t rax_13 = *var_28[4];
                
                if (rax_13 != 0xb && rax_13 == 6)
                    rax_13 = 1;
            }
            
            return;
            break;
        }
        case 0x7105a4:
        {
            return;
            break;
        }
        case 0x7105a8:
        {
            label_7105a8:
            rbp = rbx_1[3];
            return;
            break;
        }
        case 0x7105c2:
        {
            label_7105c8:
            rbp = !(0 + -(rbx_1[1]));
            return;
            break;
        }
        case 0x7105ce:
        {
            label_7105df:
            rbp = rbx_1[1] == -0x7fffffffffffffff;
            return;
            break;
        }
        case 0x7105e5:
        {
            label_7105ea:
            rbp = !rbx_1[1];
            return;
            break;
        }
        case 0x7105f0:
        {
            label_7105f6:
            rbp = 0 + -(rbx_1[1]);
            return;
            break;
        }
        case 0x7105fc:
        {
            label_710600:
            rbx_1[5];
            
            if (rbx_1[3] != -(rbx_1[5]))
                return;
            
            rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(rbx_1[1]);
            rcx_2 = *(r12_1 + 0x60);
            goto label_710615;
        }
        case 0x71060b:
        {
            label_71060b:
            rax_1 = 8 + 0x2ad6a0;
            rcx_2 = *(r12_1 + 0x60);
            goto label_710615;
        }
        case 0x710612:
        {
            label_710612:
            rax_1 = 0;
            label_710615:
            arg5 = *(rcx_2 + 8);
            label_710619:
            rcx_2 = *(rcx_2 + 0x10);
            arg1 = rax_1;
            arg2 = arg3;
            arg3 = arg5;
            label_710626:
            arg5 = r14;
            r9 = r15;
            label_710637:
            rsp = &var_8;
            label_710639:
            *rsp;
            /* tailcall */
            return ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(arg1, arg2, arg3, rcx_2, arg5, r9);
        }
        case 0x710619:
        {
            goto label_710619;
        }
        case 0x710624:
        {
            label_710624:
            arg3 = 8;
            goto label_710626;
        }
        case 0x71062b:
        {
            goto label_710637;
        }
        case 0x710639:
        {
            goto label_710639;
        }
        case 0x71063f:
        {
            label_71063f:
            rbp = rbx_1[2];
            return;
            break;
        }
        case 0x710647:
        {
            label_710647:
            /* undefined */
            break;
        }
        case 0x710676:
        {
            label_71068d:
            /* jump -> *(rbx_1 + (*rbp << 2)) + rbx_1 */
        }
    }
}
