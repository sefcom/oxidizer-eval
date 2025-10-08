long long fd::output::print_entry_colorized(unsigned long long a0, void* a1, struct_0 *a2, unsigned long long a3)
{
    int v0;  // [bp-0x148], Other Possible Types: char
    unsigned long long v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x148]
    unsigned long v3;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x13f]
    int v5;  // [bp-0x13b]
    void* v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x118]
    char v9;  // [bp-0x110]
    unsigned int v10;  // [bp-0x10f]
    unsigned int v11;  // [bp-0x10b]
    int v12;  // [bp-0xf8], Other Possible Types: char *, unsigned long long
    unsigned long long v13;  // [bp-0xf0]
    void* v14;  // [bp-0xe8]
    char v15;  // [bp-0xc8]
    unsigned long long v16;  // [bp-0xc0]
    void* v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    char *v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x90]
    void* v22;  // [bp-0x88]
    int v23;  // [bp-0x78]
    char *v24;  // [bp-0x68]
    unsigned long long v25;  // [bp-0x60]
    int v26;  // [bp-0x58]
    int v27;  // [bp-0x48]
    char v29;  // r15b
    unsigned long long v30;  // rbx
    void* v31;  // rdx
    unsigned long long v32;  // rax
    void* v33;  // r12
    unsigned long long v34;  // rbp
    unsigned long long v35;  // rax
    void* v36;  // r12
    unsigned int v37;  // edx
    unsigned long v38;  // r13
    unsigned long long v39;  // rax
    uint128_t v40;  // xmm0
    unsigned long long v41;  // rax
    char v42;  // dl
    unsigned int v43;  // ecx
    char v44;  // 4105
    char v45;  // cc_dep1
    unsigned int v46;  // ecx
    unsigned int v47;  // eax
    unsigned long long v48;  // r14
    unsigned long long v49;  // r8
    void* v50;  // r12
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    char v53;  // cc_dep1
    unsigned int v54;  // ebx
    unsigned int v55;  // r12d
    unsigned long long v56;  // rax
    void* v57;  // r14

    v29 = (char)a1;
    v30 = a1.stripped_path(a2->field_1e7);
    v15.from_utf8_lossy(v30, a2);
    v32 = v30.parent(v31);
    if (!v32)
    {
LABEL_5f6e8e:
        v38 = 0;
        goto LABEL_5f6e91;
    }
    v0.from_utf8_lossy(v32, a2);
    v33 = v6;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
    v34 = v16;
    v57 = v17;
    v35 = v33.get(v34, v57);
    if (v35)
    {
        v1 = v35;
        v3 = v31 + v35;
        if (((unsigned int)v31 != 0x110000 & (char)core::str::validations::next_code_point(&v1)) == 1)
        {
            v30 = &v1;
            v36 = v33;
            while (true)
            {
                v38 = v36;
                if (v37 != 47)
                    break;
                v38 += 1;
                if (!((char)core::str::validations::next_code_point(&v1) & 1))
                    break;
                v36 = v38;
                v37 = (unsigned int)v31;
                if (v37 == 0x110000)
                    break;
            }
        }
        else
        {
            v38 = v33;
        }
        if (!v38)
            goto LABEL_5f6e8e;
        v39 = v38.get(v34, v57);
        if (v39)
        {
            v13 = v39;
            v14 = v31;
            v12 = 0x8000000000000000;
            if (a2->field_168 != 0x8000000000000000)
            {
                fd::output::replace_path_separator(&v1, v39, a2, a2->field_170, a2->field_178);
                v12.to_mut();
                core::ptr::drop_in_place<alloc::string::String>(&v12);
                v14 = v6;
                v40 = *((int128_t *)&v1);
                *((uint128_t *)&v12) = v40;
            }
            v30 = 2;
            v41 = a3.style_for_indicator(2);
            if (v41)
            {
                (unsigned long long)v0.to_nu_ansi_term_style(v41);
                v42 = v3;
                v41 = v4;
                v43 = (int)v5;
            }
            else
            {
                v40 = 2;
            }
            *((uint128_t *)&v27) = v40;
            v44 = (char)v27;
            v45 = v44;
            if (v44 == 2)
            {
                v46 = 21;
                if (v45 != 2)
                    goto LABEL_5f7085;
LABEL_5f7084:
                v47 = 21;
            }
            else
            {
                v46 = v43;
                if (v45 == 2)
                    goto LABEL_5f7084;
LABEL_5f7085:
                v47 = v41;
            }
            v6 = v14;
            *((int128_t *)&v0) = (int128_t)v12;
            v8 = ~(CmpGTV(0, ShlNV((unsigned long long)(InterleaveLOV(v44 == 2, v44 == 2) >> 64) CONCAT (unsigned short)(InterleaveLOV(v44 == 2, v44 == 2)) CONCAT (unsigned short)(InterleaveLOV(v44 == 2, v44 == 2)) CONCAT (unsigned short)(InterleaveLOV(v44 == 2, v44 == 2)) CONCAT (unsigned short)(InterleaveLOV(v44 == 2, v44 == 2)), 7) & 170808403787765189503184116671632670848)) & (unsigned long long)v40;
            *((int *)&v9) = (v45 == 2 ? 0 : v42);
            v10 = v47;
            v11 = v46;
            v7 = 9223372036854775810;
            v24 = &(unsigned long long)v0;
            v25 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
            v18 = &g_470810;
            v19 = 1;
            v22 = 0;
            v20 = &v24;
            v21 = 1;
            v48 = a0.write_fmt(&v18);
            core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&(unsigned long long)v0);
            if (v48)
            {
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v15);
                return v48;
            }
LABEL_5f6e91:
            v51 = a1.style(a3);
            if (v51)
            {
                v1.to_nu_ansi_term_style(v51);
                *((uint128_t *)&v23) = v1;
                v29 = (char)(&v0)[8];
                v30 = v4;
                v33 = (int)v5;
            }
            else
            {
                *((uint128_t *)&v23) = 2;
            }
            v34 = v16;
            v57 = v17;
            v52 = v38.get(v34, v57);
            if (v52)
            {
                v26 = v23;
                v53 = (char)v26;
                if (v53 == 2)
                {
                    v54 = 21;
                    if (v53 != 2)
                        goto LABEL_5f6f42;
LABEL_5f6f41:
                    v55 = 21;
                }
                else
                {
                    v54 = v30;
                    if (v53 == 2)
                        goto LABEL_5f6f41;
LABEL_5f6f42:
                    v55 = (unsigned int)v33;
                }
                v8 = ~(CmpGTV(0, ShlNV((unsigned long long)(InterleaveLOV(v53 == 2, v53 == 2) >> 64) CONCAT (unsigned short)(InterleaveLOV(v53 == 2, v53 == 2)) CONCAT (unsigned short)(InterleaveLOV(v53 == 2, v53 == 2)) CONCAT (unsigned short)(InterleaveLOV(v53 == 2, v53 == 2)) CONCAT (unsigned short)(InterleaveLOV(v53 == 2, v53 == 2)), 7) & 170808403787765189503184116671632670848)) & (unsigned long long)v26;
                *((int *)&v9) = ((char)v26 == 2 ? 0 : v29);
                v10 = v54;
                v11 = v55;
                v2 = 0x8000000000000000;
                v3 = v52;
                v6 = v31;
                v7 = 9223372036854775810;
                v12 = &v2;
                v13 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
                v18 = &g_470810;
                v19 = 1;
                v22 = 0;
                v20 = &v12;
                v21 = 1;
                v48 = a0.write_fmt(&v18);
                core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v2);
                if (v48)
                {
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v15);
                    return v48;
                }
                v56 = a3.style_for_indicator(2);
                v48 = fd::output::print_trailing_slash(a0, a1, *((long long *)&a2->field_b8), a2->field_c0, v56);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v15);
                return v48;
            }
            v49 = &g_802570;
            v50 = v38;
LABEL_5f719b:
            v38 = v57;
        }
        else
        {
            v49 = &g_802558;
            v50 = 0;
        }
        core::str::slice_error_fail(v34, v57, v50, v38, v49); /* do not return */
    }
    v49 = &g_802540;
    v50 = v33;
    goto LABEL_5f719b;
}
