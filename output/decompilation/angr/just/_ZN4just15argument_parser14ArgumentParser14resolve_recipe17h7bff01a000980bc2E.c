long long just::argument_parser::ArgumentParser::resolve_recipe(char *a0, unsigned long long a1[90], unsigned long long a2)
{
    void* v0;  // [bp-0x118]
    void* v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    void* v3;  // [bp-0x100]
    int v4;  // [bp-0xf8]
    int v5;  // [bp-0xf8]
    int v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xe8]
    unsigned long v8;  // [bp-0xd8]
    char v9;  // [bp-0xd0]
    int v10;  // [bp-0xcf]
    char v11;  // [bp-0xc0]
    int v12;  // [bp-0xbf]
    int v13;  // [bp-0xb9]
    int v14;  // [bp-0xaf]
    int v15;  // [bp-0x9f]
    int v16;  // [bp-0x8f]
    char v17;  // [bp-0x7f]
    unsigned long v18;  // [bp-0x70]
    int v19;  // [bp-0x68], Other Possible Types: char
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x48]
    unsigned long long v22;  // [bp-0x40]
    void* v23;  // [bp-0x38]
    unsigned long v25;  // rcx
    unsigned long long v26[90];  // r14
    unsigned long long v27;  // rax
    unsigned long long v28[2];  // rdx
    unsigned long long v29;  // r12
    unsigned long v30;  // rax
    char *v31;  // rdx
    int v32;  // xmm1
    unsigned long long v34;  // rax
    int v35;  // xmm0
    int v36;  // xmm1

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v21 = a2;
    v22 = v25 * 16 + a2;
    v23 = 0;
    while (true)
    {
        v5 = v4;
        v26 = a1;
        v27 = v21.next();
        if (!v28)
            break;
        v29 = v28[0].as_ref(v28[1]);
        v9.to_vec(v29, a2);
        v7 = *((long long *)&v11);
        memcpy(&v5, &v9, 16);
        v1.push(&v5, &g_82db00);
        a1 = v26[84].get(v26[85], v29, v28);
        v4 = v6;
        if (!a1)
        {
            v30 = v26.get_recipe(v29, v28);
            if (!v30)
            {
                alloc::str::join_generic_copy(&v9, 8, v3, " [private]\nexport ", 1);
                v20 = *((long long *)&v11);
                memcpy(&v19, &v9, 16);
                v5.suggest_recipe(v26, v29, v28);
                *((unsigned long long *)&v0[56]) = v20;
                v0[40] = v19;
                memcpy(&(char)v10, &v5, 16);
                *((int128_t *)&v13) = *((int128_t *)&v7);
                *((char *)v0) = 52;
                v32 = *((int128_t *)&v11);
                *((int128_t *)&v0[1]) = *((int128_t *)&v9);
                v0[17] = v32;
                *((long long *)&v0[32]) = (long long)(&v13)[8];
                return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
            }
            v31 = a0;
            *((void* *)&v0[24]) = v3;
            *((int128_t *)&v0[8]) = *((int128_t *)&v1);
            *((unsigned long *)&v0[32]) = v30;
            *((unsigned long long *)&v0[40]) = v27 + 1;
            *(v31) = 56;
            return v30;
        }
    }
    if (!v26[83])
    {
        *(a0) = !v26[89] | 36;
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
    }
    v9.check_can_be_default_recipe(v26[83] + 16);
    if (v9 != 56)
    {
        *((unsigned long *)&v0[96]) = v18;
        *((int128_t *)&v0[81]) = *((int128_t *)&v17);
        v0[65] = v16;
        v35 = (int128_t)v10;
        v36 = (int128_t)v12;
        v0[49] = v15;
        v0[33] = v14;
        v0[17] = v36;
        v0[1] = v35;
        *((char *)v0) = v9;
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
    }
    v9.to_vec(160 + v26[83].lexeme(), a2);
    v7 = *((long long *)&v11);
    memcpy(&v5, &v9, 16);
    v1.push(&v5, &g_82dae8);
    v34 = v26[83];
    *((void* *)&v0[24]) = v3;
    *((int128_t *)&v0[8]) = *((int128_t *)&v1);
    *((unsigned long long *)&v0[32]) = v34 + 16;
    *((unsigned long *)&v0[40]) = v8;
    *(a0) = 56;
    return v25;
}
