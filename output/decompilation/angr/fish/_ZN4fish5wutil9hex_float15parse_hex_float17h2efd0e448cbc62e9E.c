long long fish::wutil::hex_float::parse_hex_float(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x99]
    char v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x88]
    char v3;  // [sp-0x88], Other Possible Types: unsigned int
    void* v4;  // [bp-0x80], Other Possible Types: unsigned long long
    uint128_t v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x78]
    unsigned int v9;  // [bp-0x58]
    unsigned int v10;  // [bp-0x54]
    char *v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    char *v13;  // [bp-0x38]
    unsigned int v15;  // ebp
    unsigned long long v16;  // r13
    unsigned long long v17;  // rbx
    int v18;  // xmm0
    unsigned long long v19;  // rax
    unsigned int v20;  // eax
    void* v21;  // cc_ndep
    unsigned long long v22;  // r13
    unsigned long long v23;  // r13
    unsigned long long v24;  // rbp
    char v25;  // al
    unsigned long long v26;  // r15
    unsigned long long v27;  // r15
    unsigned int v28;  // edx
    unsigned long long v30;  // r15
    unsigned long long v31;  // r15
    unsigned long long v32;  // rax
    void* v33;  // rax
    unsigned int v34;  // cc_dep1
    unsigned long long v35;  // r15
    unsigned long long v36;  // cc_ndep
    unsigned long long v37;  // r15
    unsigned long long v38;  // cc_ndep
    unsigned long long v39;  // r15
    unsigned long v40;  // cc_dep1
    unsigned long long v41;  // cc_ndep
    unsigned long long v42;  // r15
    unsigned long long v43;  // r12
    unsigned long v59;  // xmm0lq, Other Possible Types: unsigned long long
    void* v60;  // r13
    unsigned long v62;  // rcx
    unsigned long v63;  // rcx
    unsigned long v64;  // rax
    unsigned long long v65;  // rdx
    unsigned long v66;  // cc_ndep
    unsigned int v67;  // edi
    unsigned long v68;  // rbp
    unsigned long v69;  // rbp
    unsigned long v70;  // rcx
    unsigned int v71;  // ebp
    unsigned long long v72;  // xmm0lq
    struct_0 *v73;  // r12
    unsigned int v74;  // r14d
    unsigned long v75;  // r14
    unsigned int v76;  // ebp
    unsigned long long v77;  // xmm0lq
    unsigned long long v78;  // rax

    v9 = a3;
    v1.peekable(a1, a2);
    v3.get_or_insert_with(&v1);
    v15 = v3;
    if (v15 != 43)
    {
        v16 = 2;
        v17 = 0;
        if (v15 != 0x110000)
        {
            if (v15 != 45)
                goto LABEL_12e9b90;
            goto LABEL_12e9b65;
        }
        else
        {
            v5 = 0x3ff0000000000000;
LABEL_12e9bd8:
            v2 = 1114113;
        }
    }
    else
    {
LABEL_12e9b65:
        v3 = 1114113;
        v17 = (v15 == 45) * 0x8000000000000000;
        v16 = 3;
        v15 = 1114113;
LABEL_12e9b90:
        v3 = 1114113;
        *((void*)&v5) = v18;
        if (v15 != 1114113)
            goto LABEL_12e9bd8;
        v15 = v1.next();
        v19 = 1114113;
        v2 = 1114113;
    }
    v19 = v1.next();
    if (v15 != 0x110000)
    {
        if (((unsigned int)v19 != 0x110000 & v15 == 48))
        {
            v19 = (unsigned int)v19 | 32;
            if ((unsigned int)v19 == 120)
            {
                v0 = 0;
                if ((int)v1.next_if("0") != 0x110000)
                {
                    do
                    {
                        v21 = v20 < 0x110000;
                        v16 += 1;
                        if ((char)_ccall(4, 24, v16 + 1, 0, (unsigned long long)(v20 < 0x110000)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14c11e0); /* do not return */
                        v0 = 1;
                        v20 = v1.next_if("0");
                        v16 = v16;
                    } while (v20 != 0x110000);
                }
                v4 = 0;
                v10 = 64;
                v11 = &v0;
                v12 = &v10;
                v13 = &v4;
                v2.get_or_insert_with(&v1);
                v22 = v16;
                v23 = v16;
                do
                {
                    v24 = v23;
                    v25 = ::0x128b6d0::core::char::methods::<impl char>::to_digit(1114113, 16);
                    if (!(v25 & 1))
                    {
                        v30 = v24;
                        break;
                    }
                    v26 = v24;
                    v27 = v26 + 1;
                    if ((char)_ccall(4, 24, v26 + 1, 0, _ccall(17, (unsigned long long)(v25 & 1), 0, v21)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c11f8); /* do not return */
                    fish::wutil::hex_float::parse_hex_float::{{closure}}(&v11, v28);
                    v2 = 1114113;
                    if (true)
                        v1.next();
                    v2.get_or_insert_with(&v1);
                    v21 = 0;
                    v30 = v27;
                    v23 = v24 + 1;
                } while (true);
                v22 = v30;
                if (v22 < v16)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c1210); /* do not return */
                v31 = v22;
                v32 = v31 - v16;
                if (v32 >= 2147483647)
                    v32 = 2147483647;
                v33 = v1.next_if(&v9);
                v34 = (unsigned int)v33;
                v35 = v31;
                if ((unsigned int)v33 != 0x110000)
                {
                    v36 = v34 < 0x110000;
                    v37 = v31 + 1;
                    if ((char)_ccall(4, 24, v31 + 1, 0, (unsigned long long)(char)(v34 < 0x110000)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c1228); /* do not return */
                    v33 = v2.get_or_insert_with(&v1);
                    v35 = v37;
                    v16 = &v1;
                    while (true)
                    {
                        v38 = v36;
                        v39 = v37;
                        v33 = ::0x128b6d0::core::char::methods::<impl char>::to_digit(1114113, 16);
                        v40 = (char)v33 & 1;
                        v35 = v39;
                        if (!((char)v33 & 1))
                            break;
                        v41 = _ccall(17, v40, 0, v38);
                        v42 = v39 + 1;
                        if ((char)_ccall(4, 24, v39 + 1, 0, _ccall(17, v40, 0, v38)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14c1240); /* do not return */
                        fish::wutil::hex_float::parse_hex_float::{{closure}}(&v11, v28);
                        v2 = 1114113;
                        if (true)
                            v1.next();
                        v33 = v2.get_or_insert_with(&v1);
                        v35 = v42;
                        v37 = v42;
                        v36 = v41;
                        if (false)
                            break;
                    }
                }
                v43 = 1;
                if (v0 == 1)
                {
                    v2.get_or_insert_with(&v1);
                    v60 = 0;
                    v59 = v5;
                    v33 = v4;
                    if (v33)
                    {
                        v63 = (ExpCmpNE(v33, 0) == 1 ? (ExpCmpNE(v33, 0) == 1 ? 63 - Clz(v33) : v62) : (ExpCmpNE(v33, 0) == 1 ? 63 - Clz(v33) : v62)) ^ 63;
                        v64 = v33 << ((char)v63 & 63);
                        v65 = v64 & 0xfffffffffffff800;
                        if (!(((unsigned int)v64 & 4095) != 0xc00 & ((unsigned int)v64 & 2047) < 1025))
                        {
                            v66 = (v65 + 0x800 <= v65 ? 1 : 0);
                            v67 = ((char)_ccall(1, 23, (unsigned long long)((unsigned int)v60 + 1), 0, (v65 + 0x800 <= v65 ? 1 : 0)) ? (unsigned int)v60 + 1 : 2147483647);
                            if (0xfffffffffffff800 <= v64)
                            {
                                v65 = 1;
                                if (!((char)_ccall(2, 8, v64, 0xfffffffffffff800, v66)))
                                    goto LABEL_12e9f19;
LABEL_12e9f18:
                                v67 = (unsigned int)v60;
                            }
                            else
                            {
                                v65 += 0x800;
                                if ((char)_ccall(2, 8, v64, 0xfffffffffffff800, v66))
                                    goto LABEL_12e9f18;
LABEL_12e9f19:
                            }
                            v60 = v67;
                        }
                        v4 = v65;
                        v68 = ((unsigned int)(v32 - 0x20000000) < 0xc0000000 ? 2147483647 : (unsigned int)v32 * 4);
                        v69 = (((unsigned int)~(v68 & 4294967295 ^ v60 & 4294967295) & ((unsigned int)v68 ^ (unsigned int)v68 + (unsigned int)v60)) < 0 ? ((unsigned int)v68 + (unsigned int)v60 >> 31) + 0x80000000 : v68 + v60 & 4294967295);
                        v70 = (unsigned int)v63 + 1;
                        v33 = ((char)((v69 & 4294967295) - (v70 & 4294967295) >> 31) ^ 1) + 2147483647;
                        v71 = ((((unsigned int)v69 ^ (unsigned int)v70) & ((unsigned int)v69 ^ (unsigned int)((v69 & 4294967295) - v70))) < 0 ? (unsigned int)v33 & 255 : (unsigned int)(v69 - v70));
                        if (v71 >= 0x400)
                        {
                            v72 = v59 & 0x8000000000000000 | 0x7ff0000000000000;
                        }
                        else
                        {
                            v73 = a0;
                            v74 = v71.max(4294966274);
                            v75 = v74 + 1023;
                            if (((unsigned int)~(v74 ^ 1023) & (v74 ^ v74 + 1023)) < 0)
                                core::panicking::panic_const::panic_const_add_overflow(&g_14c12b8); /* do not return */
                            v76 = v71 + 1022.min();
                            (v75 & 4294967295) >> 31.unwrap(&g_14c12d0);
                            v5 = v17 | 4503599627370495 & v4 >> 11 | ((unsigned int)v75 >= 0 ? v75 * 0x10000000000000 : 0);
                            v77 = 0x4000000000000000;
                            v78 = __powidf2(v76);
                            if (v76 >= 0)
                                v5 = v6;
                            else
                                v5 = v77;
                            v73->field_8 = v5;
                            v73->field_10 = v35;
                            v73->field_0 = 0;
                            return v78;
                        }
                    }
                    else
                    {
                        v72 = v59 & 0x8000000000000000;
                    }
                    a0->field_8 = v72;
                    a0->field_10 = v35;
                    v43 = 0;
                }
                a0->field_0 = v43;
                return v33;
            }
        }
    }
    a0->field_0 = 1;
    return v19;
}
