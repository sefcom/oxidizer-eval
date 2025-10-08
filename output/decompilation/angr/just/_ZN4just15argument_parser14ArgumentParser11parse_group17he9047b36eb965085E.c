long long just::argument_parser::ArgumentParser::parse_group(void* a0, unsigned long long a1[4])
{
    int v0;  // [bp-0x128], Other Possible Types: unsigned long long
    int v1;  // [bp-0x121]
    char v2;  // [bp-0x120]
    char v3;  // [bp-0x119]
    unsigned long long v4;  // [bp-0x111]
    unsigned long long v5;  // [bp-0x110]
    void* v6;  // [bp-0x108], Other Possible Types: char
    int v7;  // [bp-0x107]
    char v8;  // [bp-0x100]
    char v9;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xf0]
    unsigned long long v11[12];  // [bp-0xe8]
    unsigned long v12;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v13;  // [bp-0xd8]
    int v14;  // [bp-0xc8]
    int v15;  // [bp-0xb8]
    unsigned long v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0xa0]
    int v18;  // [bp-0x98], Other Possible Types: char
    unsigned long long v19;  // [bp-0x88]
    int v20;  // [bp-0x78], Other Possible Types: unsigned long
    int v21;  // [bp-0x78]
    unsigned long v22;  // [bp-0x70]
    int v23;  // [bp-0x69]
    unsigned long long v24;  // [bp-0x68]
    unsigned long long v25;  // [bp-0x50]
    int v26;  // [bp-0x48], Other Possible Types: char
    char v27;  // [bp-0x38]
    unsigned long long v29;  // rbp
    unsigned long long v30;  // rcx
    unsigned long v31;  // r15
    unsigned long v32;  // r12
    unsigned long long v33;  // rax
    char v34;  // al
    unsigned long long v35[12];  // r12
    int v36;  // xmm2
    unsigned long long v37;  // rax
    unsigned long v38;  // rax
    unsigned long long v39;  // rax
    int v40;  // xmm0
    unsigned long long v41[12];  // rdx
    unsigned long long v42;  // r13
    unsigned long long v44;  // r13
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    int v47;  // xmm2

    v29 = a1[3];
    if (v29 < a1[1])
    {
        v30 = v29 * 16;
        v31 = *((long long *)(a1[0] + v30));
        v32 = *((long long *)(a1[0] + v30 + 8));
        if (58.is_contained_in(v31, v32))
        {
            v20 = v31;
            v22 = v32;
            v6.try_from(&v20, 1);
            if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
            {
                v33 = a0 + 40.to_vec(v31, v32);
                *((char *)a0) = 52;
                *((unsigned long long *)&a0[8]) = 0;
                return v33;
            }
            v5 = v10;
            memcpy(&v2, &v8, 16);
            v0 = *((long long *)&v6);
            v6.resolve_recipe(a1[2], *((long long *)&v2));
            v34 = v6;
            if (v34 != 56)
            {
                v36 = *((int128_t *)&v11);
                memcpy(&(char)v22, &v9, 16);
                *((int128_t *)&v21) = (int128_t)v7;
                *((unsigned long *)&a0[96]) = v16;
                a0[80] = v15;
                a0[64] = v14;
                a0[48] = v13;
                *((int128_t *)&a0[16]) = (int128_t)v23;
                *((int128_t *)&a0[1]) = (int128_t)v21;
                *((char *)a0) = v34;
                a0[32] = v36;
                return core::ptr::drop_in_place<just::module_path::ModulePath>(&(char)v0);
            }
            v35 = v11;
            memcpy(&v18, &v8, 16);
            v19 = v10;
            v29 += 1;
            a1[3] = v29;
            core::ptr::drop_in_place<just::module_path::ModulePath>(&(char)v0);
        }
        else
        {
            v37 = a1.rest();
            v6.resolve_recipe(a1[2], v37);
            v38 = v6;
            if ((char)v38 != 56)
            {
                v47 = *((int128_t *)&v11);
                memcpy(&v3, &(char)v9, 16);
                *((int128_t *)&v0) = *((int128_t *)&v6);
                *((unsigned long *)&a0[96]) = v16;
                a0[80] = v15;
                a0[64] = v14;
                a0[48] = v13;
                *((int128_t *)&a0[16]) = *((int128_t *)&v3);
                *((int128_t *)&a0[1]) = (int128_t)v0;
                *((char *)a0) = v38;
                a0[32] = v47;
                return v38;
            }
            v35 = v11;
            v29 += v12;
            memcpy(&v18, &v8, 16);
            v19 = v10;
            a1[3] = v29;
        }
    }
    else
    {
        v39 = a1.rest();
        v6.resolve_recipe(a1[2], v39);
        v38 = v6;
        if ((char)v38 != 56)
        {
            v47 = *((int128_t *)&v11);
            memcpy(&v3, &(char)v9, 16);
            *((int128_t *)&v0) = *((int128_t *)&v6);
            *((unsigned long *)&a0[96]) = v16;
            a0[80] = v15;
            a0[64] = v14;
            a0[48] = v13;
            *((int128_t *)&a0[16]) = *((int128_t *)&v3);
            *((int128_t *)&a0[1]) = (int128_t)v0;
            *((char *)a0) = v38;
            a0[32] = v47;
            return v38;
        }
        v35 = v11;
        v40 = *((int128_t *)&v8);
        v1 = v40;
        v4 = v10;
        v24 = v10;
        v20 = v40;
        v25 = v12;
        if (v12)
        {
            v6 = 0;
            core::panicking::assert_failed(0, &v25, &g_4692d0, &v6, &g_82dab8); /* do not return */
        }
        v19 = v24;
        memcpy(&v18, &v20, 16);
    }
    v17 = a1.rest();
    (char)v0.argument_range(v35[10], v35[11]);
    v42 = v41.min(v35[10].max_arguments(v35[11]));
    if (!(char)v0.range_contains((long long)(&v1)[1], v42))
    {
        v17 = v35[1 + 6].lexeme();
        v6.clone(v35[10], v35[11]);
        v44 = v35[10];
        v45 = v44.fold(v35[11] * 208 + v44);
        v46 = v44.max_arguments(v35[11]);
        *((int128_t *)&a0[48]) = *((int128_t *)&v6);
        *((unsigned long long *)&a0[64]) = v9;
        *((char *)a0) = 1;
        *((unsigned long long *[12])&a0[8]) = v41;
        *((unsigned long long *)&a0[16]) = v45;
        *((unsigned long long *)&a0[24]) = v46;
        *((unsigned long long *)&a0[32]) = v17;
        *((unsigned long long *[12])&a0[40]) = v41;
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v18);
    }
    v26.to_vec(v42.index(v17, v41), v41);
    a1[3] = v29 + v42;
    v12 = v19;
    memcpy(&v10, &v18, 16);
    v9 = *((long long *)&v27);
    *((void*)&v6) = v26;
    a0[8] = v26;
    *((unsigned long long *)&a0[24]) = v9;
    *((unsigned long long *)&a0[32]) = v10;
    *((unsigned long long *[12])&a0[40]) = v11;
    *((unsigned long long *)&a0[48]) = v12;
    *((char *)a0) = 56;
    return v12;
}
