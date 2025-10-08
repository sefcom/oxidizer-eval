
  fn ruff_python_formatter::statement::clause::ClauseHeader::visit::ha21c76b62b7c1677(arg1: i64, arg2: *mut c_void, arg3: *mut i32) -> *mut c_void

{
    let mut rax: i64 = 0xc;
    
    if arg1 - 3 < 0xc
    {
        rax = arg1 - 3;
    }
    
    let mut result: *mut c_void = jump_table_4879ac[rax] + &jump_table_4879ac;
    let mut rdi_1: *mut i32;
    
    match result
    {
        0x7180b9 =>
        {
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg2.byte_offset(0x30)))
        }
        0x7180c2 =>
        {
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg2.byte_offset(0x30)));
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg2.byte_offset(0x38)))
        }
        0x7180ea =>
        {
            result = *arg2.byte_offset(0x10);
            
            if result != 0
            {
                let mut rdx: i64 = *arg2.byte_offset(8);
                let mut i_1: i64 = result * 0x68;
                let mut i: i64;
                
                do
                {
                    result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x54);
                    rdx += 0x68;
                    i = i_1;
                    i_1 -= 0x68;
                } while i != 0x68;
            }
            
            result
        }
        0x71811f =>
        {
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg2.byte_offset(0x18)))
        }
        0x718128 =>
        {
            if *arg2.byte_offset(0x68) != 0
            {
                ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x58);
            }
            
            *arg2.byte_offset(0x58);
            result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x4f);
            rdi_1 = *arg2.byte_offset(0x70);
            
            if rdi_1 == 0
            {
                return result;
            }
            
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_1))
        }
        0x71816a =>
        {
            if *arg2.byte_offset(0x18) == 0x21
            {
                return result;
            }
            
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(arg2.byte_offset(0x18)))
        }
        0x718180 =>
        {
            if *arg2.byte_offset(0x60) != 0
            {
                result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x58);
            }
            
            if *arg2.byte_offset(0x68) != 0
            {
                /* tailcall */
                return ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 0x4e);
            }
            
            result
        }
        0x7181b7 =>
        {
            let rax_5: i64 = -0x8000000000000000 ^ *arg2.byte_offset(0x18);
            let mut rcx_2: i64 = 3;
            
            if rax_5 < 8
            {
                rcx_2 = rax_5;
            }
            
            let mut rsi_3: i64;
            let mut r14_4: *mut c_void;
            
            match rcx_2
            {
                0 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x3f;
                }
                1 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x40;
                }
                2 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x41;
                }
                3 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x42;
                }
                4 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x43;
                }
                5 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x44;
                }
                6 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x45;
                }
                7 =>
                {
                    r14_4 = arg2;
                    rsi_3 = 0x46;
                }
            }
            
            result = ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, rsi_3);
            rdi_1 = *r14_4.byte_offset(0x88);
            
            if rdi_1 == 0
            {
                return result;
            }
            
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_1))
        }
        0x7181f0 =>
        {
            rdi_1 = *arg2.byte_offset(0x48);
            
            if rdi_1 == 0
            {
                return result;
            }
            
            /* tailcall */
            ruff_python_formatter::statement::clause::ClauseHeader::range::_$u7b$$u7b$closure$u7d$$u7d$::h457312b2172e5951(arg3, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_1))
        }
        0x7181f9 =>
        {
            result
        }
    }
}
