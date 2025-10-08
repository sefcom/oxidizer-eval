long long just::lexer::Lexer::lex_line_start(struct_0 *a0, struct_2 *a1)
{
    char v0;  // [bp-0xe4]
    char v1;  // [bp-0xe3]
    char v2;  // [bp-0xe2]
    char v3;  // [bp-0xe1]
    struct_1 *v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned int v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    void* v8;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v9;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v11;  // [bp-0xa0]
    unsigned long v12;  // [bp-0x90]
    char v13;  // [bp-0x88]
    char v14;  // [bp-0x87]
    char v15;  // [bp-0x84]
    unsigned long long v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x38]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // r12
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rax
    void* v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // r13
    unsigned long long v35;  // rbp
    unsigned long long v36;  // rax
    struct_0 *v37;  // r15
    unsigned long v38;  // rax
    unsigned long v39;  // rbp
    unsigned long v40;  // r15
    unsigned long long v41;  // rbx
    unsigned long long v42;  // rax
    unsigned long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    unsigned int v47;  // edx
    unsigned long long v48;  // r13
    unsigned long long v49;  // r13
    unsigned long v50;  // rax
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    unsigned int v55;  // edx
    int v57;  // xmm0
    int v58;  // xmm1
    int v59;  // xmm2
    unsigned int v60;  // edx

    v5 = a1.rest();
    v7 = v22 + v5;
    v8 = 0;
    v9 = 0;
    v23 = v5.try_fold(&v9);
    if ((unsigned int)v22 == 0x110000)
    {
        a1.rest();
        v24 = v22;
    }
    else
    {
        v24 = v23;
    }
    v25 = a1.rest();
    v26 = v24.get(v25, v22);
    if (!v26)
        core::str::slice_error_fail(v25, v22, v24, v22, &g_830458); /* do not return */
    v18 = v26;
    v27 = a1.rest();
    v28 = v24.get(v27, v22);
    if (!v28)
        core::str::slice_error_fail(v27, v22, 0, v24, &g_830470); /* do not return */
    v29 = v28;
    v19 = v28;
    v20 = v22;
    v30 = v28 + v22;
    v31 = a1->field_8.indentation(a1->field_10);
    v5 = v29;
    v7 = v30;
    v8 = 0;
    v9 = v31.count(v22 + v31);
    if (v9)
    {
        v9 -= 1;
        v32 = v5.next();
        if ((unsigned int)v22 == 0x110000)
            v32 = 0;
    }
    else
    {
        v32 = 0;
    }
    v33 = v32.get(v29, v22);
    if (!v33)
        core::str::slice_error_fail(v29, v22, 0, v32, &g_830488); /* do not return */
    v34 = v33;
    v5 = v29;
    v7 = v30;
    v3 = v5.try_fold().eq(1);
    v5 = v29;
    v7 = v30;
    v2 = v5.try_fold().eq(1);
    v5 = v34;
    v7 = v34 + v22;
    v1 = v5.try_fold().eq(1);
    v5 = v34;
    v0 = v5.try_fold().eq(1);
    v6 = 0;
    v35 = v18;
    v36 = core::slice::<impl [T]>::starts_with(v35, v22, ::0x5fb200::core::char::methods::encode_utf8_raw(10, &v6), v22);
    if ((char)v36)
    {
LABEL_6713b0:
        v37 = a0;
        if (!v22)
        {
            v37->field_48 = 37;
            return v36;
        }
        else if (a1->field_c0.next_is_whitespace())
        {
            while (true)
            {
                v6.advance(a1);
                if (v13 != 37)
                    break;
                if (!a1->field_c0.next_is_whitespace())
                {
                    v36 = a1.token(36);
                    v37->field_48 = 37;
                    return v36;
                }
            }
        }
        else
        {
            v36 = a1.token(36);
            v37->field_48 = 37;
            return v36;
        }
        goto LABEL_6717ed;
    }
    v36 = core::slice::<impl [T]>::starts_with(v35, v22, "\r\nsrc/compilation.rsUnterminated stringUnterminated interpolationUnterminated backtickUnpaired carriage returnunterminated unicode escape sequenceunicode escape sequences must not be emptyThe `!include` directive has been stabilized as `import`Recipe line has extra leading whitespaceBackticks may not start with `#!`Attribute `` got  but takes at least ` depends on itself` has circular dependency `Variable `` is defined in terms of itself` depends on its own value: `Dependency `Recipe attribute `` first used on line  is duplicated on line ` has duplicate `[default]` attribute, which may only appear once per module` has duplicate parameter `Setting `` first set on line  is redefined on line ` has multiple definitions` is unexported multiple times` has both `[exit-message]` and `[no-exit-message]` attributes", 2);
    if (!v22 || (char)v36)
        goto LABEL_6713b0;
    v39 = a1->field_8;
    v40 = a1->field_10;
    if ((char)v29.equal(v22, v39.indentation(v40), v22))
    {
LABEL_671482:
        v42 = v39.indentation(v40);
        if (v22)
        {
            v16 = v39.indentation(v40);
            v17 = v22 + v16;
            if (((char)core::str::validations::next_code_point(&v16) & 1))
            {
                do
                {
                    v6.advance(a1);
                    v43 = v13;
                    if ((char)v43 != 37)
                    {
                        v4->field_40 = v12;
                        v44 = *((int128_t *)&v5);
                        v45 = *((int128_t *)&v8);
                        v46 = *((int128_t *)&v10);
                        *((void*)&v4->field_30) = v11;
                        *((void*)&v4->field_20) = v46;
                        *((void*)&v4->field_10) = v45;
                        *((void*)&v4->field_0) = v44;
                        v47 = *((int *)&v15);
                        *((int *)&v4->field_49[0]) = *((int *)&v14);
                        *((unsigned int *)&v4->field_49[3]) = v47;
                        v4->field_48 = v43;
                        return v43;
                    }
                } while (((char)core::str::validations::next_code_point(&v16) & 1));
            }
            v42 = a1.token(36);
        }
        v4->field_48 = 37;
        return v42;
    }
    if (v19.slice_contains(v39, v40))
    {
        v41 = v22;
        v36 = v39.indentation(v40).equal(v22, v29, v41);
        if (!(char)v36)
        {
            do
            {
                a1.lex_dedent();
                v36 = a1->field_8.indentation(a1->field_10).equal(v22, v29, v41);
            } while (!(char)v36);
        }
        v37 = a0;
        if (!v41)
        {
            v37->field_48 = 37;
            return v36;
        }
        else if (!a1->field_c0.next_is_whitespace())
        {
            v36 = a1.token(36);
            v37->field_48 = 37;
            return v36;
        }
        else
        {
            while (true)
            {
                v6.advance(a1);
                if (v13 != 37)
                    break;
                if (!a1->field_c0.next_is_whitespace())
                {
                    v36 = a1.token(36);
                    v37->field_48 = 37;
                    return v36;
                }
            }
        }
        goto LABEL_6717ed;
    }
    else
    {
        if (a1->field_c4)
        {
            if ((char)core::slice::<impl [T]>::starts_with(v29, v22, v39.indentation(v40), v22))
                goto LABEL_671482;
            if ((v0 & v1))
            {
                v48 = v34;
                goto LABEL_671650;
            }
            v39.indentation(v40);
            if (v22 >= v22)
            {
                v39.indentation(v40);
                if (v22 < v22 || (char)core::slice::<impl [T]>::starts_with(v34, v22, v39.indentation(v40), v22))
                {
LABEL_67172a:
                    v39.indentation(v40);
                    if (v22 < v22 || (char)core::slice::<impl [T]>::starts_with(v29, v22, v39.indentation(v40), v22))
                    {
                        v37 = a0;
                        if (a1->field_c0.next_is_whitespace())
                        {
                            while (true)
                            {
                                v6.advance(a1);
                                if (v13 != 37)
                                    break;
                                if (!a1->field_c0.next_is_whitespace())
                                    goto LABEL_6717a0;
                            }
                        }
                        else
                        {
LABEL_6717a0:
                            if (a1->field_40)
                            {
                                v36 = a1.token(36);
                                v37->field_48 = 37;
                                return v36;
                            }
                            a1.push(a1.lexeme(), v22, &g_8304a0);
                            v36 = a1.token(25);
                            if (a1->field_c5)
                            {
                                a1->field_c4 = 1;
                                v37->field_48 = 37;
                                return v36;
                            }
                            v37->field_48 = 37;
                            return v36;
                        }
LABEL_6717ed:
                        v37->field_40 = v12;
                        v52 = *((int128_t *)&v5);
                        v53 = *((int128_t *)&v8);
                        v54 = *((int128_t *)&v10);
                        *((void*)&v37->field_30) = v11;
                        *((void*)&v37->field_20) = v54;
                        *((void*)&v37->field_10) = v53;
                        *((void*)&v37->field_0) = v52;
                        v55 = *((int *)&v15);
                        *((int *)&v37->field_49[0]) = *((int *)&v14);
                        *((unsigned int *)&v37->field_49[3]) = v55;
                        v37->field_48 = v38;
                        return v38;
                    }
                }
            }
        }
        else if ((v2 & v3))
        {
            v48 = v29;
LABEL_671650:
            v16 = v48;
            v17 = v48 + v49;
            if (!((char)core::str::validations::next_code_point(&v16) & 1))
            {
                v7 = v48;
                v8 = v49;
                v5 = 9223372036854775852;
                return a0.error(a1, &v5);
            }
            while (true)
            {
                v6.advance(a1);
                if (v13 != 37)
                    break;
                if (!((char)core::str::validations::next_code_point(&v16) & 1))
                {
                    v7 = v48;
                    v8 = v49;
                    v5 = 9223372036854775852;
                    return a0.error(a1, &v5);
                }
            }
            goto LABEL_6718ec;
        }
        else
        {
            v39.indentation(v40);
            if (v22 >= v22)
                goto LABEL_67172a;
        }
        v16 = v29;
        v17 = v30;
        if (!((char)core::str::validations::next_code_point(&v16) & 1))
        {
            v7 = v39.indentation(v40);
            v8 = v22;
            v9 = v29;
            v10 = v22;
            v5 = 9223372036854775847;
            return a0.error(a1, &v5);
        }
        while (true)
        {
            v6.advance(a1);
            if (v13 != 37)
                break;
            if (!((char)core::str::validations::next_code_point(&v16) & 1))
            {
                v7 = a1->field_8.indentation(a1->field_10);
                v8 = v22;
                v9 = v29;
                v10 = v22;
                v5 = 9223372036854775847;
                return a0.error(a1, &v5);
            }
        }
LABEL_6718ec:
        v4->field_40 = v12;
        v57 = *((int128_t *)&v5);
        v58 = *((int128_t *)&v8);
        v59 = *((int128_t *)&v10);
        *((void*)&v4->field_30) = v11;
        *((void*)&v4->field_20) = v59;
        *((void*)&v4->field_10) = v58;
        *((void*)&v4->field_0) = v57;
        v60 = *((int *)&v15);
        *((int *)&v4->field_49[0]) = *((int *)&v14);
        *((unsigned int *)&v4->field_49[3]) = v60;
        v4->field_48 = v50;
        return v50;
    }
}
