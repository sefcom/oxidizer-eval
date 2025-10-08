long long just::lexer::Lexer::lex_string(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xac]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long long
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    int v7;  // [bp-0x68]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbp
    unsigned long v15;  // rcx
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx
    unsigned int v18;  // r15d
    unsigned long long v19;  // rsi
    unsigned int v20;  // eax
    char v21;  // cl
    unsigned long v22;  // r15
    char v23;  // cc_dep1
    char v24;  // r12b
    unsigned long long v25;  // r13
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    int v28;  // xmm0

    v12 = a1.rest().from_token_start(v11);
    if ((char)v12 == 2)
    {
        v13 = v4.advance(a1);
        if (v9 != 37)
        {
            *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v8);
            v28 = *((int128_t *)&v4);
            *((void*)&a0->field_30) = v7;
            *((void*)&a0->field_20) = v6;
            *((void*)&a0->field_10) = v5;
            *((void*)&a0->field_0) = v28;
            return v13;
        }
        return a0.internal_error(a1, "Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs", 39);
    }
    else
    {
        v14 = v11 & 4294967295;
        if (!(char)v11)
        {
            v15 = (v12 & 4294967295) * 2 + 1;
            v16 = "```\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `";
            v17 = "`src/assignment_resolver.rs()";
        }
        else if ((unsigned int)v14 == 1)
        {
            v15 = (v12 & 4294967295) * 2 + 1;
            v16 = "\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `";
            v17 = "\"false[{,:]capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/compact.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/patience.rs/home/34r7hm4";
        }
        else
        {
            v15 = (v12 & 4294967295) * 2 + 1;
            v16 = "'''Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `";
            v17 = "'\\\\``\\Mismatched closing delimiter ``. (Did you mean to close the `` on line ?)Found a mix of tabs and spaces in leading whitespace: ``\nLeading whitespace may consist of tabs or spaces, but not both` has both `[no-cd]` and `[working-directory]` attributesP";
        }
        v18 = v12;
        if (((char)v12 & 1))
            v19 = v16;
        else
            v19 = v17;
        v13 = v4.presume_str(a1, v19, v15);
        if (v9 != 37)
        {
            *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v8);
            v28 = *((int128_t *)&v4);
            *((void*)&a0->field_30) = v7;
            *((void*)&a0->field_20) = v6;
            *((void*)&a0->field_10) = v5;
            *((void*)&a0->field_0) = v28;
            return v13;
        }
        v20 = a1->field_c0;
        if (a1->field_c0 != 0x110000)
        {
            v21 = v18;
            v22 = v18 * 2 + 1;
            v23 = v21 & 1;
            *((int *)&v3) = ((v21 & 1) ? "'''Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `" : "'\\\\``\\Mismatched closing delimiter ``. (Did you mean to close the `` on line ?)Found a mix of tabs and spaces in leading whitespace: ``\nLeading whitespace may consist of tabs or spaces, but not both` has both `[no-cd]` and `[working-directory]` attributesP");
            *((int *)&v0) = (v23 ? "```\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `" : "`src/assignment_resolver.rs()");
            *((int *)&v2) = (v23 ? "\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `" : "\"false[{,:]capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/compact.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/patience.rs/home/34r7hm4");
            v1 = v14;
            if ((char)v1 == 1)
            {
                v24 = 0;
                do
                {
                    if (v20 == 92)
                    {
                        v25 = v25 & 0xffffffffffffff00 | 1;
                        if (!(v24 & 1))
                            continue;
                    }
                    if ((char)a1.rest_starts_with(v2, v22) && !(v24 & 1))
                        goto LABEL_672fab;
                    v25 = 0;
                    v13 = v4.advance(a1);
                    if (v9 != 37)
                    {
                        *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v8);
                        v28 = *((int128_t *)&v4);
                        *((void*)&a0->field_30) = v7;
                        *((void*)&a0->field_20) = v6;
                        *((void*)&a0->field_10) = v5;
                        *((void*)&a0->field_0) = v28;
                        return v13;
                    }
                    v20 = a1->field_c0;
                    v24 = v25;
                } while (a1->field_c0 != 0x110000);
LABEL_672fab:
                if ((char)v14)
                {
                    v0 = v2;
                    if (v1 == 2)
                        v0 = v3;
                }
                v13 = v4.presume_str(a1, v0, v22);
                if (v9 != 37)
                {
                    *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v8);
                    v28 = *((int128_t *)&v4);
                    *((void*)&a0->field_30) = v7;
                    *((void*)&a0->field_20) = v6;
                    *((void*)&a0->field_10) = v5;
                    *((void*)&a0->field_0) = v28;
                    return v13;
                }
                v27 = a1.token((!(v14 & 255) ? 3 : 33));
                a0->field_40[8] = 37;
                return v27;
            }
            else if (!v1)
            {
                while (!(char)a1.rest_starts_with(v0, v22))
                {
                    v13 = v4.advance(a1);
                    if (v9 != 37)
                    {
                        *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v8);
                        v28 = *((int128_t *)&v4);
                        *((void*)&a0->field_30) = v7;
                        *((void*)&a0->field_20) = v6;
                        *((void*)&a0->field_10) = v5;
                        *((void*)&a0->field_0) = v28;
                        return v13;
                    }
                    if (a1->field_c0 == 0x110000)
                        goto LABEL_672e8b;
                }
            }
            else
            {
                while (!(char)a1.rest_starts_with(v3, v22))
                {
                    v13 = v4.advance(a1);
                    if (v9 != 37)
                    {
                        *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v8);
                        v28 = *((int128_t *)&v4);
                        *((void*)&a0->field_30) = v7;
                        *((void*)&a0->field_20) = v6;
                        *((void*)&a0->field_10) = v5;
                        *((void*)&a0->field_0) = v28;
                        return v13;
                    }
                    if (a1->field_c0 == 0x110000)
                        goto LABEL_672e8b;
                }
            }
        }
LABEL_672e8b:
        v26 = 9223372036854775880;
        if (!(char)v14)
            v26 = 9223372036854775878;
        v4 = v26;
        return a0.error(a1, &v4);
    }
}
