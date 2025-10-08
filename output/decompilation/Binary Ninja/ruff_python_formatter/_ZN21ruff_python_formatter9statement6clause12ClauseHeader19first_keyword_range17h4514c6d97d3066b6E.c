
  int64_t ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range::h4514c6d97d3066b6(int32_t* arg1, int64_t arg2, void* arg3, char* arg4, int64_t arg5)

{
    int64_t r9 = 0xc;
    
    if (arg2 - 3 < 0xc)
        r9 = arg2 - 3;
    
    int64_t var_30;
    char rdx;
    int32_t rsi;
    bool cond:1_1;
    
    switch (r9)
    {
        case 0:
        {
            int64_t rax_1 = *(arg3 + 0x10);
            void* rdi_1;
            
            if (!rax_1)
                rdi_1 = nullptr;
            else
                rdi_1 = *(arg3 + 8) + rax_1 * 0x60 - 0x60;
            
            rsi = core::option::Option$LT$T$GT$::map_or_else::hcc3bd99a00a996a7(rdi_1, arg3);
            rdx = 0x3a;
            arg4 = arg4;
            arg5 = arg5;
            break;
        }
        case 1:
        {
            int64_t rax_4 = *(arg3 + 0x10);
            void* rdi_7;
            
            if (!rax_4)
                rdi_7 = nullptr;
            else
                rdi_7 = *(arg3 + 8) + rax_4 * 0x60 - 0x60;
            
            int32_t rax_12 =
                core::option::Option$LT$T$GT$::map_or_else::hb5eba6f535daaed7(rdi_7, arg3);
            
            if (!*(arg3 + 0x7c))
            {
                rsi = rax_12;
                rdx = 0x3c;
            }
            else
            {
                rsi = rax_12;
                rdx = 0x37;
            }
            
            arg4 = arg4;
            arg5 = arg5;
            break;
        }
        case 2:
        {
            rsi = *(arg3 + 0x38);
            rdx = 0x45;
            break;
        }
        case 3:
        {
            rsi = *(arg3 + 0x68);
            
            if (*(arg3 + 0x18) != 0x21)
                rdx = 0x3e;
            else
                rdx = 0x3f;
            break;
        }
        case 4:
        {
            rsi = *(arg3 + 0x60);
            rdx = 0x50;
            break;
        }
        case 5:
        {
            rsi = *(arg3 + 0x40);
            rdx = 0x40;
            break;
        }
        case 6:
        {
            int64_t* rsi_1 = *(arg3 + 0x40);
            int64_t rax_7 = 0x5e;
            
            if (rsi_1)
            {
                void* rsi_3 = (rsi_1 << 7) + *(arg3 + 0x38);
                rsi_1 = rsi_3 - 0x80;
                
                if (rsi_3 != 0x80)
                {
                    int64_t* rdx_2;
                    rax_7 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(rsi_1);
                    rsi_1 = rdx_2;
                }
            }
            
            int64_t rax_8;
            int64_t rdx_3;
            rax_8 = core::option::Option$LT$T$GT$::or_else::h0df08007ad1612a3(rax_7, rsi_1, arg3);
            int64_t rax_9;
            int64_t rdx_5;
            rax_9 = core::option::Option$LT$T$GT$::or_else::hb8dee52d58e0f51f(rax_8, rdx_3, arg3);
            
            if (rax_9 == 0x5e)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_30 = rax_9;
            int64_t var_28 = rdx_5;
            return ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(arg1, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_30), 
                0x41, arg4, arg5);
            break;
        }
        case 7:
        {
            rsi = *(arg3 + 0x20);
            rdx = 0x52;
            break;
        }
        case 8:
        {
            rsi = *(arg3 + 0x80);
            rdx = 0x54;
            break;
        }
        case 9:
        {
            rsi = *(arg3 + 0x40);
            cond:1_1 = *(arg3 + 0x4c);
            rdx = 0x42;
            goto label_718563;
        }
        case 0xa:
        {
            rsi = *(arg3 + 0x38);
            rdx = 0x51;
            break;
        }
        case 0xb:
        {
            rsi = *(arg3 + 0x30);
            cond:1_1 = *(arg3 + 0x3c);
            rdx = 0x55;
            label_718563:
            
            if (cond:1_1)
                rdx = 0x37;
            break;
        }
        case 0xc:
        {
            if (!arg2)
            {
                int64_t rax_10 = *(arg3 + 0x28);
                int64_t rsi_7;
                
                if (rax_10)
                {
                    rsi_7 = rax_10 * 0x58 + *(arg3 + 0x20);
                    arg2 = rsi_7 - 0x58;
                }
                
                int64_t rdi_13;
                
                if (!rax_10 || rsi_7 == 0x58)
                    rdi_13 = 0x5e;
                else
                    rdi_13 = 0x3c;
                
                int64_t rax_14;
                int64_t rdx_9;
                rax_14 =
                    core::option::Option$LT$T$GT$::or_else::h3ec7daf219502128(rdi_13, arg2, arg3);
                
                if (rax_14 == 0x5e)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                var_30 = rax_14;
                int64_t var_28_1 = rdx_9;
                return ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(
                    arg1, 
                    _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_30), 
                    0x3f, arg4, arg5);
            }
            
            int64_t rdi_2 = *(arg3 + 0x10);
            void* rdi_4;
            
            if (rdi_2)
                rdi_4 = (rdi_2 << 7) + *(arg3 + 8);
            
            if (!rdi_2 || rdi_4 == 0x80)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            rsi = _$LT$ruff_python_ast..generated..Stmt$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h6da43eeee2e8d007(rdi_4 - 0x80);
            rdx = 0x3f;
            arg4 = arg4;
            arg5 = arg5;
            break;
        }
    }
    
    /* tailcall */
    return ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(arg1, rsi, 
        rdx, arg4, arg5);
}
