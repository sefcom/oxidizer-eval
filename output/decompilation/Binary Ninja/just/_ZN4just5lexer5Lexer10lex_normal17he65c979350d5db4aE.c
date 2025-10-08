
  int64_t just::lexer::Lexer::lex_normal::he65c979350d5db4a(char* arg1, void* arg2, int32_t arg3)

{
    uint64_t rax = arg3 - 9;
    uint64_t var_80;
    
    if (rax > 0x74)
    {
        if (arg3 == 0xfeff)
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0xb);
        
        label_671a65:
        int32_t rax_15;
        
        if (arg3 - 0x61 >= 0x1a && arg3 >= 0x41)
            rax_15 = arg3 < 0x5b;
        
        if (arg3 - 0x61 < 0x1a || (arg3 >= 0x41 && arg3 == 0x5f | rax_15))
            /* tailcall */
            return just::lexer::Lexer::lex_identifier::hf1dac9d9d56230f3(arg1, arg2);
        
        uint64_t* r14_2 = arg1;
        int64_t result = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
        char var_38;
        
        if (var_38 == 0x25)
        {
            int32_t var_78_1 = arg3;
            var_80 = -0x7fffffffffffffbc;
            return just::lexer::Lexer::error::h92eb8a4dd6b17c78(r14_2, arg2, &var_80);
        }
        
        int128_t var_40;
        *(r14_2 + 0x40) = var_40;
        int128_t zmm0_11 = var_80;
        int128_t var_50;
        *(r14_2 + 0x30) = var_50;
        int128_t var_60;
        *(r14_2 + 0x20) = var_60;
        int128_t var_70;
        *(r14_2 + 0x10) = var_70;
        *r14_2 = zmm0_11;
        return result;
    }
    
    switch (rax)
    {
        case 0:
        case 0x17:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_whitespace::h8e907693bc02b7bb(arg1, arg2);
        }
        case 1:
        case 4:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_eol::h7f8dde0d41698e62(arg1, arg2);
        }
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xa:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x1c:
        case 0x24:
        case 0x25:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x32:
        case 0x33:
        case 0x35:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x55:
        case 0x56:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        {
            goto label_671a65;
        }
        case 0x18:
        {
            void* rax_9;
            int64_t rdx_10;
            rax_9 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_9, 
                    rdx_10, "!includeS", 8))
                /* tailcall */
                return just::lexer::Lexer::lex_choices::h87db0effb4b54026(arg1, arg2, 0x21, "=", 
                    0x25);
            
            var_80 = -0x7fffffffffffffda;
            return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_80);
            break;
        }
        case 0x19:
        case 0x1e:
        case 0x57:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_string::hf16a7b23cc25ab92(arg1, arg2);
        }
        case 0x1a:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_comment::h56d1597af2c2fc00(arg1, arg2);
        }
        case 0x1b:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x12);
        }
        case 0x1d:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_digraph::h7eb8b1388d0dddbe(arg1, arg2, 0x26, 0x26, 0);
        }
        case 0x1f:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 0x1c);
        }
        case 0x20:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 0x1d);
        }
        case 0x21:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 1);
        }
        case 0x22:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x1e);
        }
        case 0x23:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0xf);
        }
        case 0x26:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x20);
        }
        case 0x31:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_colon::he29ae39e0cf2f603(arg1, arg2);
        }
        case 0x34:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_choices::h87db0effb4b54026(arg1, arg2, 0x3d, 
                &data_465d30, 0x15);
        }
        case 0x36:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x1f);
        }
        case 0x37:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 2);
        }
        case 0x52:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 9);
        }
        case 0x53:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_escape::hfa0aaf6f8bea1e9a(arg1, arg2);
        }
        case 0x54:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 0xa);
        }
        case 0x72:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 7);
        }
        case 0x73:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_digraph::h7eb8b1388d0dddbe(arg1, arg2, 0x7c, 0x7c, 6);
        }
        case 0x74:
        {
            /* tailcall */
            return just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 8);
        }
    }
}
