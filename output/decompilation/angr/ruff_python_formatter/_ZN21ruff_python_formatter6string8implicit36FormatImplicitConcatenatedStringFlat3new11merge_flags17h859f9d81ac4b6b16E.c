long long ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0xe8]
    int v1;  // [bp-0xe8]
    unsigned int v2;  // [bp-0xe0]
    struct_1 *v3;  // [bp-0xe0]
    char v4;  // [bp-0xdc]
    unsigned short v5;  // [bp-0xdb]
    char v6;  // [bp-0xd9]
    char v7;  // [bp-0xd8], Other Possible Types: unsigned long
    char v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    unsigned int v11;  // [bp-0xbc]
    int v12;  // [bp-0xb8]
    unsigned int v13;  // [bp-0xb0]
    char v14;  // [bp-0xac]
    unsigned short v15;  // [bp-0xab]
    char v16;  // [bp-0xa9]
    unsigned long long v17;  // [bp-0xa8]
    char v18;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x90]
    char v20;  // [bp-0x8c]
    unsigned short v21;  // [bp-0x8b]
    char v22;  // [bp-0x89]
    int v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x70]
    unsigned long long v25;  // [bp-0x68]
    unsigned long long v26;  // [bp-0x60]
    int v27;  // [bp-0x58], Other Possible Types: char
    unsigned long long v28;  // [bp-0x48]
    char v29;  // [bp-0x40]
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rax
    char v34;  // bpl
    unsigned long v35;  // r13
    struct_1 *v36;  // rdx
    struct_1 *v37;  // r13
    char v38;  // al
    char v39;  // cl
    char v40;  // al
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx

    v9 = a0;
    v10 = a1;
    if (v9.is_multiline(a2))
        return 0;
    v18.parts(&v9);
    v31 = (unsigned long long)v18.next();
    if (v31 != 4)
    {
        v24 = v31;
        v25 = v31;
        v26 = v32;
        v27.parts(&v9);
        v17 = v28;
        v12 = v27;
        v34 = 2;
        if ((unsigned long long)(char)v12.next() == 4)
        {
LABEL_727241:
            v4 = 2;
            v39 = (char)v9 * 8;
            if (v34 != 2)
                return 33619971 >> (v39 & 31).new(2, v34 & 1, 1) & 0xffffffffffffff00 | 1;
            v40 = a2.preferred_quote_style(3, v24, v32);
            if (v40 == 2)
            {
                v25.flags();
                return 33619971 >> (v39 & 31).new(2, v34 & 1, 1) & 0xffffffffffffff00 | 1;
            }
            v7 = v40;
            v18.parts(&v9);
            if ((unsigned long long)v18.next() != 4)
            {
                while (true)
                {
                    v29.from_part(v41, v42, a2, v8);
                    if (v4 == 2)
                    {
                        *((int128_t *)&v1) = *((int128_t *)&v29);
                        v41 = (unsigned long long)v18.next();
                        if (v41 == 4)
                            break;
                    }
                    else
                    {
                        (char)v12.merge(&v29, &v0);
                        if (v14 == 2)
                            return 0;
                        v2 = v13;
                        v0 = (long long)v12;
                        v6 = v16;
                        v5 = v15;
                        v4 = v14;
                        v41 = (unsigned long long)v18.next();
                        if (v41 == 4)
                            break;
                    }
                }
            }
            if (v4 != 2)
            {
                v19 = v2;
                v18 = v0;
                v21 = v5;
                v22 = v6;
                v20 = v4;
                v18.choose(v8);
                return 33619971 >> (v39 & 31).new(2, v34 & 1, 1) & 0xffffffffffffff00 | 1;
            }
        }
        else
        {
            v35 = a2->field_10;
            v11 = (a2->field_2c == 3 ? 12 <= a2->field_2d : 3 <= a2->field_2c);
            v7 = a2->field_10;
            while (true)
            {
                v0 = v33;
                v3 = v36;
                if (((char)v0.flags() & 2) || (char)v0.flags() > 63)
                    break;
                v18.leading_trailing(v35, v0, v3);
                if (core::iter::adapters::chain::and_then_or_clear(&v18).or_else(&v23))
                    break;
                if (v0 < 2)
                {
LABEL_7272dc:
                    v33 = (unsigned long long)(char)v12.next();
                    if (v33 == 4)
                        goto LABEL_727241;
                }
                else
                {
                    if ((unsigned int)v0 == 2)
                    {
                        if ((int)v9 == 3)
                            break;
                        v37 = v3;
                        if ((char)v11)
                        {
                            v38 = v37->field_24.from();
                        }
                        else
                        {
                            if (ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(v37, a2) || (char)ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes(v37->field_8, v37->field_10, a2))
                            {
LABEL_7273e0:
                                v35 = v7;
                                if (v34 != 2 && (((char)v0.flags() ^ v34) & 1))
                                    break;
                                v34 = (char)(unsigned int)v0.flags() & 1;
                                goto LABEL_7272dc;
                            }
LABEL_7273a6:
                            v35 = v7;
                            goto LABEL_7272dc;
                        }
                    }
                    else
                    {
                        v37 = v3;
                        v38 = v37->field_24.from();
                    }
                    if (ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(v37->field_8, v37->field_10, v38, a2))
                        goto LABEL_7273e0;
                    goto LABEL_7273a6;
                }
            }
        }
    }
    return 0;
}
