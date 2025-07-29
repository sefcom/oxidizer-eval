long long uu_ptx::read_input(void* *a0, unsigned long long a1, unsigned long a2)
{
    struct_0 *v0;  // [bp-0x1b8]
    unsigned long long v1;  // [bp-0x1b0]
    unsigned long long v2;  // [bp-0x1a8]
    unsigned long long v3;  // [bp-0x1a0]
    unsigned long long v4;  // [bp-0x198]
    unsigned long long v5;  // [bp-0x190]
    int v6;  // [bp-0x188], Other Possible Types: char
    unsigned int v7;  // [bp-0x184]
    unsigned long long v8;  // [bp-0x180]
    unsigned long long v9;  // [bp-0x178]
    int v10;  // [bp-0x170]
    unsigned long long v11;  // [bp-0x160]
    unsigned long long v12;  // [bp-0x158]
    int v13;  // [bp-0x148]
    int v14;  // [bp-0x138]
    unsigned long long v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x120]
    int v17;  // [bp-0x110]
    unsigned long long v18;  // [bp-0x100]
    int v19;  // [bp-0xf8]
    int v20;  // [bp-0xe8]
    int v21;  // [bp-0xd8]
    unsigned long long v22;  // [bp-0xc8]
    int v23;  // [bp-0xb8]
    int v24;  // [bp-0xa8]
    int v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x88]
    int v27;  // [bp-0x80]
    char v28;  // [bp-0x68]
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    unsigned long long v32[3];  // rax
    unsigned long long v33[3];  // r14
    void* v34;  // r15
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx
    void* *v37;  // rbx

    v6.try_with();
    v30 = v6.expect();
    *((uint128_t *)&v13) = g_73b1a8;
    *((uint128_t *)&v14) = g_73b1b8;
    v15 = v30;
    v16 = v31;
    v1 = a1;
    v2 = a1 + a2 * 24;
    v32 = v1.next();
    if (v32)
    {
        v33 = v32;
        v34 = 0;
        do
        {
            if ((char)v33[1].equal(v33[2], "-[^]+", 1))
            {
                v35 = std::io::stdio::stdin().new();
                v36 = &g_73b4a0;
            }
            else
            {
                v6.open(v33);
                if ((v6 & 1))
                {
                    v37 = a0;
                    *((unsigned long long *)&v0->padding_1[7]) = v8;
                    *(v37) = 0;
                    v13.drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>();
                    return v37;
                }
                v35 = v7.new();
                v36 = &g_73b448;
            }
            v23.with_capacity(0x2000, v35, v36);
            v19 = v23;
            v20 = v24;
            v21 = v25;
            v22 = v26;
            core::iter::adapters::try_process(&v6, &v19);
            if ((char)(((0 ^ (long long)v6) & (0 ^ -((long long)v6))) >> 63))
            {
                *((unsigned long long *)&v0->padding_1[7]) = v8;
                *(a0) = 0;
                v13.drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>();
                return a0;
            }
            v3 = (long long)v6;
            v4 = v8;
            v5 = v9;
            v17.from_iter(v8, v8 + v5 * 24, &g_73b350);
            v27.clone(v33);
            v9 = v5;
            *((int128_t *)&v6) = *((int128_t *)&v3);
            v11 = v18;
            v10 = v17;
            v12 = v34;
            v28.insert(&v13, &v27, &v6);
            v28.drop_in_place<core::option::Option<uu_ptx::FileContent>>();
            v34 += v5;
            v33 = v1.next();
        } while (v33);
    }
    v0->field_20 = *((int128_t *)&v15);
    *((void*)&v0->field_10) = v14;
    *((void*)&v0->field_0) = v13;
    return a0;
}
