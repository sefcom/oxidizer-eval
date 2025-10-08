
  void* ruff_python_formatter::statement::clause::ClauseHeader::visit::ha21c76b62b7c1677(int64_t arg1, void* arg2, int32_t* arg3)

{
    int64_t rax = 0xc;
    
    if (arg1 - 3 < 0xc)
        rax = arg1 - 3;
    
    void* result = jump_table_4879ac[rax] + &jump_table_4879ac;
    int32_t* rdi_1;
    
    switch (result)
    {
        case 0x7180b9:
        {
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg2 + 0x30)));
        }
        case 0x7180c2:
        {
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg2 + 0x30)));
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg2 + 0x38)));
        }
        case 0x7180ea:
        {
            result = *(arg2 + 0x10);
            
            if (result)
            {
                int64_t rdx = *(arg2 + 8);
                int64_t i_1 = result * 0x68;
                int64_t i;
                
                do
                {
                    result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x54);
                    rdx += 0x68;
                    i = i_1;
                    i_1 -= 0x68;
                } while (i != 0x68);
            }
            
            return result;
            break;
        }
        case 0x71811f:
        {
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg2 + 0x18)));
        }
        case 0x718128:
        {
            if (*(arg2 + 0x68))
                ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x58);
            
            *(arg2 + 0x58);
            result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x4f);
            rdi_1 = *(arg2 + 0x70);
            
            if (!rdi_1)
                return result;
            
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_1));
        }
        case 0x71816a:
        {
            if (*(arg2 + 0x18) == 0x21)
                return result;
            
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(arg2 + 0x18));
        }
        case 0x718180:
        {
            if (*(arg2 + 0x60))
                result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x58);
            
            if (*(arg2 + 0x68))
                /* tailcall */
                return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x4e);
            
            return result;
            break;
        }
        case 0x7181b7:
        {
            int64_t rax_5 = -0x8000000000000000 ^ *(arg2 + 0x18);
            int64_t rcx_2 = 3;
            
            if (rax_5 < 8)
                rcx_2 = rax_5;
            
            int64_t rsi_3;
            void* r14_4;
            
            switch (rcx_2)
            {
                case 0:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x3f;
                    break;
                }
                case 1:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x40;
                    break;
                }
                case 2:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x41;
                    break;
                }
                case 3:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x42;
                    break;
                }
                case 4:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x43;
                    break;
                }
                case 5:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x44;
                    break;
                }
                case 6:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x45;
                    break;
                }
                case 7:
                {
                    r14_4 = arg2;
                    rsi_3 = 0x46;
                    break;
                }
            }
            
            result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, rsi_3);
            rdi_1 = *(r14_4 + 0x88);
            
            if (!rdi_1)
                return result;
            
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_1));
        }
        case 0x7181f0:
        {
            rdi_1 = *(arg2 + 0x48);
            
            if (!rdi_1)
                return result;
            
            /* tailcall */
            return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_1));
        }
        case 0x7181f9:
        {
            return result;
            break;
        }
    }
}
