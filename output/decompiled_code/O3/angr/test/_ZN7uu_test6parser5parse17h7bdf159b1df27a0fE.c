int uu_test::parser::parse::h7bdf159b1df27a0f()
{
    void* v0;  // [sp-0x100]
    unsigned long long v1;  // [sp-0xf8]
    void* v2;  // [sp-0xf0]
    unsigned long long v3;  // [sp-0xe8]
    char v4;  // [bp-0xe0]
    unsigned long long *v5;  // [sp-0xd0]
    unsigned long long *v6;  // [sp-0xc8]
    unsigned long long v7;  // [sp-0xc0]
    unsigned long long v8;  // [sp-0xb8]
    void* v9;  // [sp-0xb0]
    unsigned long long v10;  // [sp-0xa8]
    void* v11;  // [sp-0xa0]
    int v12;  // [sp-0x98]
    unsigned long long v13;  // [sp-0x88]
    char v14;  // [bp-0x80]
    char v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    void* v17;  // [bp-0x68], Other Possible Types: char, unsigned long
    char v18;  // [bp-0x60]
    void* v19;  // [sp-0x58]
    char v20;  // [bp-0x50]
    unsigned long long v21;  // [sp-0x48]
    unsigned long long v22;  // [sp-0x40]
    unsigned long long v23;  // [sp-0x38]
    char v24;  // [sp-0x30]
    struct_2 *v26;  // rsi
    unsigned long long *v27;  // rcx
    unsigned long long v28;  // r12
    unsigned long long v29;  // r14
    unsigned long long *v30;  // rax
    struct_1 *v31;  // rax
    struct_0 *v32;  // rdi
    unsigned long long *v33;  // r12
    unsigned long long v34;  // rcx
    unsigned long long v36;  // r15
    unsigned long long v37;  // r12
    struct_1 *v39;  // r12
    unsigned long long v41;  // r14
    unsigned long long v42;  // r14
    unsigned long long v43;  // rsi

    v27 = v26->field_8;
    v3 = 9223372036854775809;
    v5 = v27;
    v6 = v27;
    v7 = v26->field_0;
    v8 = &v27[3 * v26->field_10];
    v0 = 0;
    v1 = 8;
    v2 = 0;
    uu_test::parser::Parser::expr::h5e5770957878cc20(&v17, &v0);
    v28 = v17;
    if (v28 != 7)
    {
        v13 = *((long long *)&v20);
        *((int128_t *)&v12) = *((int128_t *)&v18);
        goto LABEL_484f36;
    }
    v29 = v3;
    v3 = 9223372036854775809;
    if (v29 != 9223372036854775809)
    {
        v31 = &v4;
        goto LABEL_484d4c;
    }
    v30 = v6;
    if (v30 == v8)
    {
        *((void* *)((char *)&v32->field_8 + 8)) = v2;
        *((int128_t *)&(&v32->field_0)[1]) = *((int128_t *)&v0);
        v32->field_0 = 7;
        goto LABEL_484e8f;
    }
    else
    {
        v6 = v30 + 3;
        v29 = *(v30);
        v31 = v30 + 1;
LABEL_484d4c:
        if (v29 != 0x8000000000000000)
        {
            v36 = v31->field_-8;
            v37 = v31->field_0;
            v9 = 0;
            v10 = 1;
            v11 = 0;
            v23 = 32;
            v24 = 3;
            v17 = 0;
            v19 = 0;
            v21 = &v9;
            v22 = &g_4e1e70;
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v14, v36, v37);
            if ((!*((long long *)&v14) ? (char)_ZN10os_display4unix5write17hdefd8f6d04dd5fe6E.llvm.2548367946977071697(&v17, *((long long *)&v15), *((long long *)&v16), 1) : (char)_ZN10os_display4unix13write_escaped17hb8cc7986a1b70e05E.llvm.2548367946977071697(&v17, v36, v37)))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            *((int128_t *)&v12) = *((int128_t *)&v9);
            v13 = v11;
            v28 = 2;
            if (v29)
                __rust_dealloc(v36);
LABEL_484f36:
            *((unsigned long long *)((char *)&v32->field_8 + 8)) = v13;
            *((void*)&(&v32->field_0)[1]) = v12;
            v32->field_0 = v28;
            core::ptr::drop_in_place$LT$uu_test..parser..Parser$GT$::he226857debb48f3c(&v0);
        }
        else
        {
            v33 = v6;
            v34 = v8;
            *((void* *)((char *)&v32->field_8 + 8)) = v2;
            *((int128_t *)&(&v32->field_0)[1]) = *((int128_t *)&v0);
            v32->field_0 = 7;
            if (v34 != v33)
            {
                v39 = v33 + 1;
                do
                {
                    v41 = (v34 - (char *)v33) / 24;
                    if (v39->field_0)
                        __rust_dealloc(v39->field_-8);
                } while ((v39 += 24, v42 = v41 - 1, v41 != 1));
            }
LABEL_484e8f:
            if (v7)
                __rust_dealloc(v5);
            v43 = v3;
            if (v43 >= 9223372036854775810 && v43)
                __rust_dealloc(*((long long *)&v4));
        }
        return;
    }
}
