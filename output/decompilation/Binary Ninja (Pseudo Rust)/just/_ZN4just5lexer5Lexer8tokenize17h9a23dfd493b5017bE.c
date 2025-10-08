
  fn just::lexer::Lexer::tokenize::h9a23dfd493b5017b(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut var_118: i128;
    let i: i8;
    
    do
    {
        if arg2[0x15] == 0
        {
            just::lexer::Lexer::lex_line_start::hecba8e7aed370233(&var_118, arg2);
            
            if i != 0x25
            {
                break;
            }
        }
        
        let rcx_1: i32 = arg2[0x18];
        
        if rcx_1 == 0x110000
        {
            let rax_3: i64 = arg2[5];
            
            if rax_3 != 0
            {
                let rcx_2: i64 = arg2[4];
                let rax_4: i64 = rax_3 * 9;
                let var_28_1: i64 = *(rcx_2 + (rax_4 << 3) - 8);
                let var_38_1: i128 = *(rcx_2 + (rax_4 << 3) - 0x18);
                let var_48_1: i128 = *(rcx_2 + (rax_4 << 3) - 0x28);
                let var_58_1: i128 = *(rcx_2 + (rax_4 << 3) - 0x38);
                let mut var_68: i128 = *(rcx_2 + (rax_4 << 3) - 0x48);
                just::lexer::Lexer::unterminated_interpolation_error::h2170ba94c271abf2(&var_118, 
                    &var_68);
                break;
            }
            
            while just::lexer::Lexer::indented::haaa2823febf7562c(arg2[1], arg2[2]) != 0
            {
                just::lexer::Lexer::lex_dedent::hd3d59812e389acd6(arg2);
            }
            
            just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            let mut rsi_9: *mut c_void = &arg2[0x17];
            let rax_7: i64 = arg2[0x17];
            let mut rdx_7: *mut c_void;
            
            if rax_7 != arg2[0x14]
            {
                rdx_7 = &arg2[0x14];
            }
            else
            {
                let rcx_4: i64 = arg2[0x11];
                let mut var_c8: i64 = rcx_4;
                
                if rax_7 != rcx_4
                {
                    rdx_7 = &var_c8;
                }
                else
                {
                    let rax_8: i64 = arg2[2];
                    let mut var_c0: i64 = rax_8;
                    
                    if rax_8 == 1
                    {
                        arg1[1] = arg2[0xb];
                        *arg1 = *arg2.byte_offset(0x48);
                        *arg1.byte_offset(0x48) = 0x25;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(*arg2, arg2[1]);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..name..Name$GT$$GT$::h3abfcfc45501c2a2(arg2[3], arg2[4]);
                        /* tailcall */
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(arg2[6], arg2[7]);
                    }
                    
                    rdx_7 = &data_469270;
                    rsi_9 = &var_c0;
                }
            }
            
            var_118 = 0;
            core::panicking::assert_failed::h449f2a7fe5426575(0, rsi_9, rdx_7, &var_118);
            /* no return */
        }
        
        let rax_2: i64 = arg2[5];
        
        if rax_2 != 0
        {
            let rdx_1: i64 = arg2[4];
            let rax_1: i64 = rax_2 * 9;
            let var_78_1: i64 = *(rdx_1 + (rax_1 << 3) - 8);
            let var_88_1: i128 = *(rdx_1 + (rax_1 << 3) - 0x18);
            let var_98_1: i128 = *(rdx_1 + (rax_1 << 3) - 0x28);
            let var_a8_1: i128 = *(rdx_1 + (rax_1 << 3) - 0x38);
            let mut var_b8: i128 = *(rdx_1 + (rax_1 << 3) - 0x48);
            just::lexer::Lexer::lex_interpolation::h29248a24ec5712d3(&var_118, arg2, &var_b8, 
                rcx_1);
        }
        else if *arg2.byte_offset(0xc4) == 0
        {
            just::lexer::Lexer::lex_normal::he65c979350d5db4a(&var_118, arg2, rcx_1);
        }
        else
        {
            just::lexer::Lexer::lex_body::h748dd23849ec297d(&var_118, arg2);
        }
    } while i == 0x25;
    let var_d8: i128;
    arg1[4] = var_d8;
    let zmm0: i128 = var_118;
    let var_e8: i128;
    arg1[3] = var_e8;
    let var_f8: i128;
    arg1[2] = var_f8;
    let var_108: i128;
    arg1[1] = var_108;
    *arg1 = zmm0;
    /* tailcall */
    core::ptr::drop_in_place$LT$just..lexer..Lexer$GT$::hbcbb29f641172e5c(arg2)
}
