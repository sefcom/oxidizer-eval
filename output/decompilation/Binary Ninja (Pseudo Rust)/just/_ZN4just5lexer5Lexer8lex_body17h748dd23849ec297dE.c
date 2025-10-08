
  fn just::lexer::Lexer::lex_body::h748dd23849ec297d(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    loop
    {
        let mut var_88: i128;
        let var_40: i8;
        
        if just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, "{{{{Q", 4) != 0
        {
            just::lexer::Lexer::skip::h5c5c7013f42a4f08(&var_88, arg2);
            
            if var_40 == 0x25
            {
                continue;
            }
            
            goto 'label_671f87;
        }
        
        if just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, &data_46e198, 1) != 0
        {
            break;
        }
        
        if just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, 
            "\r\nsrc/compilation.rsUnterminat…", 2) != 0
        {
            if *arg2.byte_offset(0xa0) != *arg2.byte_offset(0xb8)
            {
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            }
            
            /* tailcall */
            return just::lexer::Lexer::lex_double::hb969a7d085e88ace(arg1, arg2, 0x14);
        }
        
        let mut result: *mut i128;
        
        if just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, 
            "{{missing parameter without defa…", 2) != 0
        {
            if *arg2.byte_offset(0xa0) != *arg2.byte_offset(0xb8)
            {
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            }
            
            just::lexer::Lexer::lex_double::hb969a7d085e88ace(&var_88, arg2, 0x1b);
            let mut var_48: i128;
            
            if var_40 != 0x25
            {
                'label_671f87:
                result = arg1;
                result[4] = var_48;
                let zmm0_1: i128 = var_88;
                let var_58: i128;
                result[3] = var_58;
                let var_68: i128;
                result[2] = var_68;
                let var_78: i128;
                result[1] = var_78;
                *result = zmm0_1;
            }
            else
            {
                let rdi_15: i64 = *arg2.byte_offset(0x58);
                
                if rdi_15 < 1
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_15 - 1, 0);
                    /* no return */
                }
                
                let rax_11: i64 = *arg2.byte_offset(0x50);
                let rcx_3: i64 = (rdi_15 - 1) * 9;
                var_48 = *(rax_11 + (rcx_3 << 3) + 0x40);
                let var_58_1: i128 = *(rax_11 + (rcx_3 << 3) + 0x30);
                let var_68_1: i128 = *(rax_11 + (rcx_3 << 3) + 0x20);
                let var_78_1: i128 = *(rax_11 + (rcx_3 << 3) + 0x10);
                var_88 = *(rax_11 + (rcx_3 << 3));
                alloc::vec::Vec$LT$T$C$A$GT$::push::h613e59c6bb8d58d5(arg2.byte_offset(0x18), 
                    &var_88);
                result = arg1;
                *result.byte_offset(0x48) = 0x25;
            }
        }
        else
        {
            if just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg2) == 0
            {
                just::lexer::Lexer::advance::hab928493b22c646a(&var_88, arg2);
                
                if var_40 == 0x25
                {
                    continue;
                }
                
                goto 'label_671f87;
            }
            
            if *arg2.byte_offset(0xa0) != *arg2.byte_offset(0xb8)
            {
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            }
            
            result = arg1;
            *result.byte_offset(0x48) = 0x25;
        }
        
        return result;
    }
    
    if *arg2.byte_offset(0xa0) != *arg2.byte_offset(0xb8)
    {
        just::lexer::Lexer::token::h8b86862a20389d16(arg2);
    }
    
    /* tailcall */
    just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x14)
}
