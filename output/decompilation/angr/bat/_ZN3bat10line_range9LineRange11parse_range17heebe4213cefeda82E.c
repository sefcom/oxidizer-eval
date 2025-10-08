long long bat::line_range::LineRange::parse_range(void* a0, char a1[2], void* a2)
{
    void* v0;  // [bp-0x98], Other Possible Types: char [2], char
    int v1;  // [bp-0x97]
    void* v2;  // [bp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: char
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x68]
    unsigned short v6;  // [bp-0x58]
    char v7;  // [bp-0x48], Other Possible Types: unsigned long long
    struct_0 *v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    char v11;  // bpl
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax
    char *v15;  // rax
    unsigned long v16;  // r12
    unsigned long long v18;  // rax
    void* v19;  // rax
    unsigned long long v20;  // rax
    unsigned long v21;  // rax
    unsigned long long v22;  // rax
    struct_0 *v23;  // r14
    void* v24;  // rcx
    void* v25;  // rax
    void* v26;  // r15
    void* v27;  // rdx
    unsigned long long v28;  // cc_ndep
    int v29;  // xmm0
    void* v30;  // r13
    char *v31;  // r12
    unsigned long long v32;  // r15
    unsigned int v33;  // eax
    char *v34;  // rax
    unsigned long v35;  // rdx
    unsigned long long v36;  // rax
    unsigned long long v39;  // rax
    int v40;  // xmm0
    unsigned long v41;  // cc_ndep
    char v43;  // al

    if (!a2)
        return a0.from("Empty line range", 16);
    v11 = a1[0];
    if (v11 != 58)
    {
        *(&v0) = a1;
        v2 = a1 + a2;
        v15 = (char)v0.next_back();
        if (!v15)
            return a0.from("Empty line range", 16);
        if (*(v15) == 58)
        {
            v16 = a2 - 1;
            if (v11 == 45)
            {
                v18 = 1.get(v16, a1, a2);
                if (!v18)
                    core::str::slice_error_fail(a1, a2, 1, v16, &g_ace7b0); /* do not return */
                ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v18, a2);
                if (!(char)v0)
                {
                    *((unsigned long long *)&a0[8]) = 1;
                    *((void* *)&a0[16]) = v2;
                    *((unsigned long long *)&a0[24]) = 0;
                    *((unsigned long long *)&a0[32]) = 18446744073709551615;
                    *((char *)a0) = 13;
                    return v2;
                }
            }
            else
            {
                v20 = v16.get(a1, a2);
                if (!v20)
                    core::str::slice_error_fail(a1, a2, 0, v16, &g_ace7c8); /* do not return */
                ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v20, a2);
                if (!(char)v0)
                {
                    *((unsigned long long *)&a0[8]) = 0;
                    *((void* *)&a0[16]) = v19;
                    *((unsigned long long *)&a0[24]) = 0;
                    *((unsigned long long *)&a0[32]) = 18446744073709551615;
                    *((char *)a0) = 13;
                    return v19;
                }
            }
        }
        else
        {
            v3.into_searcher(58, a1, a2);
            v0 = 0;
            v2 = a2;
            v6 = 1;
            v7.collect(&(char)v0);
            v22 = *((long long *)&v9);
            if (v22 != 1)
            {
                if (v22 != 2)
                {
                    if (v22 == 3)
                    {
                        v23 = v8;
                        if (v23->field_18)
                        {
                            ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v23->field_0, v23->field_8);
                            if ((char)v0 == 1)
                            {
                                (char)v0.from("Invalid start line number in N:M:C formatInvalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn threadCould not parse pager command.-R-F-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 41);
                            }
                            else
                            {
                                ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v23->field_10, v23->field_18);
                                if ((char)v0 == 1)
                                {
                                    (char)v0.from("Invalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn threadCould not parse pager command.-R-F-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 39);
                                }
                                else
                                {
                                    ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v23->field_20, v23->field_28);
                                    if ((char)v0 == 1)
                                    {
                                        (char)v0.from("Invalid context number in N:M:C formatfailed to spawn threadCould not parse pager command.-R-F-S-K--no-initLESSCHARSETUTF-8Could not open stdin for pagersrc/output.rs", 38);
                                    }
                                    else
                                    {
                                        v24 = v2;
                                        if (v24 > v2)
                                        {
                                            v2 = v2;
                                            v24 = v24;
                                            *((unsigned long long *)&a0[8]) = 0;
                                            *((unsigned long long *)&a0[16]) = 0;
                                            *((unsigned long long *)&a0[24]) = 0;
                                            *((int *)&a0[32]) = ((char)_ccall(3, 4, v2, v24, v28) ? v2 + v24 : 18446744073709551615);
                                            *((char *)a0) = 13;
                                            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                                        }
                                        v2 = v2;
                                        v24 = v24;
                                        *((unsigned long long *)&a0[8]) = 0;
                                        *((unsigned long *)&a0[16]) = v2 - v24;
                                        *((unsigned long long *)&a0[24]) = 0;
                                        *((int *)&a0[32]) = ((char)_ccall(3, 4, v2, v24, v28) ? v2 + v24 : 18446744073709551615);
                                        *((char *)a0) = 13;
                                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                                    }
                                }
                            }
                        }
                        else
                        {
                            ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v23->field_0, v23->field_8);
                            if ((char)v0 == 1)
                            {
                                (char)v0.from("Invalid line number in N::C formatInvalid context number in N::C formatInvalid start line number in N:M:C formatInvalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn threadCould not parse pager command.-R-F-S-K--no-in", 34);
                            }
                            else
                            {
                                v26 = v2;
                                ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v23->field_20, v23->field_28);
                                if ((char)v0 == 1)
                                {
                                    (char)v0.from("Invalid context number in N::C formatInvalid start line number in N:M:C formatInvalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn threadCould not parse pager command.-R-F-S-K--no-initLESSCHARSETUTF-8Could not open s", 37);
                                }
                                else
                                {
                                    v24 = v2;
                                    v27 = v26;
                                    if (v24 <= v27)
                                        v25 = v27 - v24;
                                    else
                                        v25 = 0;
                                    v2 = v26;
                                    v24 = v24;
                                    *((unsigned long long *)&a0[8]) = 0;
                                    *((void* *)&a0[16]) = v25;
                                    *((unsigned long long *)&a0[24]) = 0;
                                    *((int *)&a0[32]) = ((char)_ccall(3, 4, v2, v24, v28) ? v2 + v24 : 18446744073709551615);
                                    *((char *)a0) = 13;
                                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                                }
                            }
                        }
                    }
                    else
                    {
                        (char)v0.from("Line range contained too many ':' characters. Expected format: 'N', 'N:M', 'N::C', or 'N:M:C'Invalid character after -Invalid character after +Invalid line number in N::C formatInvalid context number in N::C formatInvalid start line number in N:M:C formatI", 93);
                        *((int128_t *)&a0[64]) = *((int128_t *)&v6);
                        v29 = *((int128_t *)&v0);
                        a0[48] = v5;
                        a0[32] = v4;
                        a0[16] = v3;
                        *(a0) = v29;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v8);
                    }
                }
                else
                {
                    v23 = v8;
                    ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v23->field_0, v23->field_8);
                    if ((char)v0 == 1)
                    {
                        v43 = *((char *)&v0 + 1);
                        *((char *)a0) = 4;
                        *((char *)&a0[1]) = v43;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                    }
                    v30 = v2;
                    v31 = v23->field_10;
                    v32 = v23->field_18;
                    if (!v32)
                        goto LABEL_83c683;
                    switch (v33)
                    {
                    case 43:
                        v39 = 1.get(v31, v32);
                        if (!v39)
                            core::str::slice_error_fail(v31, v32, 1, v32, &g_ace810); /* do not return */
                        ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v39, a2);
                        if (!(char)v0)
                        {
                            *((unsigned long long *)&a0[8]) = 0;
                            *((void* *)&a0[16]) = v30;
                            *((unsigned long long *)&a0[24]) = 0;
                            *((int *)&a0[32]) = ((char)_ccall(3, 4, v2, v30, v41) ? v2 + v30 : 18446744073709551615);
                            *((char *)a0) = 13;
                            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                        }
                        (char)v0.from("Invalid character after +Invalid line number in N::C formatInvalid context number in N::C formatInvalid start line number in N:M:C formatInvalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn threadCould not parse page", 25);
                        break;
                    case 45:
                        v34 = 1.get(v31, v32);
                        if (!v34)
                            core::str::slice_error_fail(v31, v32, 1, v32, &g_ace7e0); /* do not return */
                        if (v35 && *(v34) == 43)
                        {
                            (char)v0.from("Invalid character after -Invalid character after +Invalid line number in N::C formatInvalid context number in N::C formatInvalid start line number in N:M:C formatInvalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn t", 25);
                            break;
                        }
                        else
                        {
                            v36 = 1.get(v31, v32);
                            if (!v36)
                                core::str::slice_error_fail(v31, v32, 1, v32, &g_ace7f8); /* do not return */
                            ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v36, a2);
                            if ((char)v0 != 1)
                            {
                                *((unsigned long long *)&a0[8]) = 0;
                                *((int *)&a0[16]) = (v2 <= v30 ? v30 - v2 : 0);
                                *((unsigned long long *)&a0[24]) = 0;
                                *((void* *)&a0[32]) = v30;
                                *((char *)a0) = 13;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                            }
                            (char)v0.from("Invalid character after -Invalid character after +Invalid line number in N::C formatInvalid context number in N::C formatInvalid start line number in N:M:C formatInvalid end line number in N:M:C formatInvalid context number in N:M:C formatfailed to spawn t", 25);
                        }
                    default:
LABEL_83c683:
                        ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v31, v32);
                        if ((char)v0 != 1)
                        {
                            *((unsigned long long *)&a0[8]) = 0;
                            *((void* *)&a0[16]) = v30;
                            *((unsigned long long *)&a0[24]) = 0;
                            *((void* *)&a0[32]) = v2;
                            *((char *)a0) = 13;
                            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                        }
                        v43 = *((char *)&v0 + 1);
                        *((char *)a0) = 4;
                        *((char *)&a0[1]) = v43;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
                    }
                }
                *((int128_t *)&a0[64]) = *((int128_t *)&v6);
                v40 = *((int128_t *)&v0);
                a0[48] = v5;
                a0[32] = v4;
                a0[16] = v3;
                *(a0) = v40;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v23);
            }
            else
            {
                ::0x805c00::core::num::<impl usize>::from_ascii_radix(&(char)v0, v8->field_0, v8->field_8);
                if ((char)v0)
                {
                    v43 = *((char *)&v0 + 1);
                    *((char *)a0) = 4;
                    *((char *)&a0[1]) = v43;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v8);
                }
                *((unsigned long long *)&a0[8]) = 0;
                *((void* *)&a0[16]) = v2;
                *((unsigned long long *)&a0[24]) = 0;
                *((void* *)&a0[32]) = v2;
                *((char *)a0) = 13;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v7, v8);
            }
        }
    }
    else if (a2 != 1 && a1[1] == 45)
    {
        v12 = 2.get(a1, a2);
        if (!v12)
            core::str::slice_error_fail(a1, a2, 2, a2, &g_ace798); /* do not return */
        ::0x805c00::core::num::<impl usize>::from_ascii_radix(&v0, v12, a2);
        if (!v0)
        {
            *((uint128_t *)&a0[8]) = 0;
            *((unsigned long long *)&a0[24]) = 1;
            *((void* *)&a0[32]) = v2;
            *((char *)a0) = 13;
            return v2;
        }
    }
    else
    {
        v14 = 1.get(a1, a2);
        if (!v14)
            core::str::slice_error_fail(a1, a2, 1, a2, &g_ace780); /* do not return */
        ::0x805c00::core::num::<impl usize>::from_ascii_radix(&v0, v14, a2);
        if (!v0)
        {
            *((uint128_t *)&a0[8]) = 0;
            *((unsigned long long *)&a0[24]) = 0;
            *((void* *)&a0[32]) = v2;
            *((char *)a0) = 13;
            return v2;
        }
    }
    v21 = (char)v1;
    *((char *)a0) = 4;
    *((char *)&a0[1]) = v21;
    return v21;
}
