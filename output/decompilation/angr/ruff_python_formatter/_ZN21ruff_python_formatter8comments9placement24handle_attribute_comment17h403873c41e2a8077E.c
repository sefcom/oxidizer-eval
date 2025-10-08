long long ruff_python_formatter::comments::placement::handle_attribute_comment(void* a0, void* a1, unsigned long long a2[6], unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x74]
    char v3;  // [bp-0x6c]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x38]
    char v7;  // bpl
    unsigned long v8;  // rdx
    unsigned long v9;  // rax
    unsigned long long v10;  // edx
    unsigned int v11;  // ebp
    char v12;  // r15b
    unsigned int v13;  // r14d
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    char v16;  // bpl
    unsigned int v17;  // r12d
    unsigned int v18;  // ebp
    unsigned long long v19;  // rax
    unsigned long v20;  // rdx
    unsigned long v21;  // rax

    if ((int)a1[16] == 94)
    {
        v7 = (char)a1[72];
        *((long long *)&a0[8]) = a2[5].from();
        *((unsigned long *)&a0[16]) = v8;
        v9 = (long long)a1[64];
        *((unsigned long *)&a0[24]) = v9;
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v7;
        *((unsigned long long *)a0) = 94;
        return v9;
    }
    a2[5].range();
    v4.starts_at(v10, a3, a4);
    v5 = 0;
    v3 = 90;
    v0.fold(&v4, &v2);
    if (v1 != 90)
    {
        v11 = (int)a1[64];
        if (v11 < *((int *)&v0))
        {
            v12 = (char)a1[72];
            v13 = (int)a1[68];
            v14 = a2[5].from();
            *((unsigned long long *)&a0[8]) = v14;
            *((unsigned long *)&a0[16]) = v15;
            *((unsigned int *)&a0[24]) = v11;
            *((unsigned int *)&a0[28]) = v13;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v12;
            *((unsigned long long *)a0) = 95;
            return v14;
        }
    }
    v16 = (char)a1[72];
    if (v16)
    {
        v17 = (int)a1[68];
    }
    else
    {
        a2[5].range();
        if (v10 > (int)a2[0])
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d2b8); /* do not return */
        ruff_python_trivia::tokenizer::find_only_token_in_range(&v4, v10, (int)a2[0], 16, a3, a4);
        v17 = (int)a1[68];
        if (v17 < *((int *)&v4))
        {
            v18 = (int)a1[64];
            v19 = a2[5].from();
            *((unsigned long long *)&a0[8]) = v19;
            *((unsigned long *)&a0[16]) = v20;
            *((unsigned int *)&a0[24]) = v18;
            *((unsigned int *)&a0[28]) = v17;
            *((unsigned short *)&a0[32]) = 0;
            *((unsigned long long *)a0) = 95;
            return v19;
        }
    }
    v21 = (int)a1[64];
    *((int128_t *)&a0[8]) = *((int128_t *)a1);
    *((unsigned int *)&a0[24]) = v21;
    *((unsigned int *)&a0[28]) = v17;
    *((char *)&a0[32]) = 0;
    *((char *)&a0[33]) = v16;
    *((unsigned long long *)a0) = 96;
    return v21;
}
