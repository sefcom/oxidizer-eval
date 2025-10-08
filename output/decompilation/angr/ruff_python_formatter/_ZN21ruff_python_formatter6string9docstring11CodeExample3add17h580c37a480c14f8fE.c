long long ruff_python_formatter::string::docstring::CodeExample::add(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x188], Other Possible Types: char
    int v1;  // [bp-0x178]
    int v2;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x168]
    int v4;  // [bp-0x158], Other Possible Types: char
    int v5;  // [bp-0x148]
    char v6;  // [bp-0x138], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x130]
    int v8;  // [bp-0x128]
    int v9;  // [bp-0x118]
    char v10;  // [bp-0x108]
    int v11;  // [bp-0xf8]
    int v12;  // [bp-0xe8]
    int v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long v15;  // [bp-0xb8]
    int v16;  // [bp-0xb0]
    int v17;  // [bp-0xa0]
    int v18;  // [bp-0x90]
    int v19;  // [bp-0x80]
    unsigned long v20;  // [bp-0x70]
    int v21;  // [bp-0x68]
    int v22;  // [bp-0x58]
    int v23;  // [bp-0x48]
    int v24;  // [bp-0x38]
    unsigned long v26;  // rcx
    unsigned long v27;  // rax
    unsigned long v28;  // r13
    unsigned long v29;  // rsi
    unsigned long v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    int v33;  // xmm0
    int v34;  // xmm1

    v26 = *((long long *)a0);
    v27 = (long long)a0[72];
    *((unsigned long long *)a0) = 9223372036854775811;
    if (v26 == 9223372036854775811)
    {
        return a0.add_start(a1, a2);
    }
    v28 = a0 + 8;
    v29 = v26 ^ 0x8000000000000000;
    v30 = (v29 < 3 ? v29 : 1);
    if (v30)
    {
        if (v30 == 1)
        {
            v15 = v26;
            *((int128_t *)&v16) = *((int128_t *)v28);
            *((int128_t *)&v17) = *((int128_t *)(v28 + 16));
            *((int128_t *)&v18) = *((int128_t *)(v28 + 32));
            *((int128_t *)&v19) = *((int128_t *)(v28 + 48));
            v20 = v27;
            v6.add_code_line(&v15, a1, a2);
            if (v6 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v7);
                a0 = a0;
                return a0.add_start(a1, a2);
            }
            v5 = v11;
            memcpy(&v4, &v10, 16);
            v2 = v9;
            v1 = v8;
            memcpy(&v0, &v6, 16);
            v31 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a0);
            a0[64] = v5;
            a0[48] = v4;
            a0[32] = v2;
            a0[16] = v1;
            *(a0) = v0;
            return v31;
        }
        *((int128_t *)&v24) = *((int128_t *)(v28 + 48));
        *((int128_t *)&v23) = *((int128_t *)(v28 + 32));
        *((int128_t *)&v22) = *((int128_t *)(v28 + 16));
        *((int128_t *)&v21) = *((int128_t *)v28);
        v6.add_code_line(&v21, a1, a2);
        if (v6 == 0x8000000000000000)
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v7);
        memcpy(&v4, &v10, 16);
        v2 = v9;
        v1 = v8;
        memcpy(&v0, &v6, 16);
        v32 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a0);
        *((unsigned long long *)a0) = 9223372036854775810;
        v33 = v0;
        v34 = v1;
        *((void*)(v28 + 48)) = v4;
        *((void*)(v28 + 32)) = v2;
    }
    else
    {
        v14 = *((long long *)(v28 + 32));
        *((int128_t *)&v13) = *((int128_t *)(v28 + 16));
        *((int128_t *)&v12) = *((int128_t *)v28);
        v6.add_code_line(&v12, a1, a2);
        if (v6 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v7);
            a0 = a0;
            return a0.add_start(a1, a2);
        }
        v2 = (long long)v9;
        memcpy(&(char)v1, &v8, 16);
        memcpy(&v0, &v6, 16);
        core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a0);
        *((long long *)a0) = 0x8000000000000000;
        v32 = v3;
        *((unsigned long long *)(v28 + 32)) = v3;
        v33 = v0;
        v34 = v1;
    }
    *((void*)(v28 + 16)) = v34;
    *((void*)v28) = v33;
    return v32;
}
