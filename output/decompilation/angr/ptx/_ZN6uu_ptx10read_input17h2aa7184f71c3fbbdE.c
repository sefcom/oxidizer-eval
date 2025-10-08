long long uu_ptx::read_input(void* *a0, unsigned long long a1[3], unsigned long a2)
{
    struct_0 *v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    int v4;  // [bp-0x148], Other Possible Types: char
    unsigned int v5;  // [bp-0x144]
    unsigned long long v6;  // [bp-0x140]
    unsigned long long v7;  // [bp-0x138]
    int v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x120]
    void* v10;  // [bp-0x118]
    int v11;  // [bp-0x108]
    int v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xe8]
    int v14;  // [bp-0xd0]
    unsigned long long v15;  // [bp-0xc0]
    int v16;  // [bp-0xb8]
    int v17;  // [bp-0xa0]
    char v18;  // [bp-0x68]
    unsigned long long v20[3];  // r14
    unsigned long long v21;  // rax
    unsigned long long v22;  // r15
    void* v23;  // rbx
    unsigned long long v24;  // r15
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    void* *v28;  // rbx
    unsigned long v29;  // rdx

    v20 = a1;
    v21 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v11) = g_650de8;
    *((uint128_t *)&v12) = g_650df8;
    v13 = v21;
    if (a2)
    {
        v22 = a2 * 24;
        v23 = 0;
        do
        {
            v24 = v22;
            if ((char)v20[1].equal(v20[2], "-[^]+", 1))
            {
                v25 = std::io::stdio::stdin().new();
                v26 = &g_6516d8;
            }
            else
            {
                v4.open(v20);
                if ((int)v4 == 1)
                {
                    v28 = a0;
                    v0->field_0[1] = v6;
                    *(v28) = 0;
                    v11.drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>();
                    return v28;
                }
                v25 = v5.new();
                v26 = &g_651680;
            }
            v17.with_capacity(v25, v26);
            (char)v4.collect(&v17);
            if ((char)(((0 ^ (long long)v4) & (0 ^ -((long long)v4))) >> 63))
            {
                v0->field_0[1] = v6;
                *(a0) = 0;
                v11.drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>();
                return a0;
            }
            v1 = (long long)v4;
            v2 = v6;
            v3 = v7;
            v14.collect(v6, v6 + v3 * 24);
            v16.clone(v20);
            v7 = v3;
            *((int128_t *)&v4) = *((int128_t *)&v1);
            v9 = v15;
            v8 = v14;
            v10 = v23;
            v18.insert(&v11, &v16, &(char)v4);
            v20 += 1;
            v18.drop_in_place<core::option::Option<uu_ptx::FileContent>>();
            v23 += v3;
            v22 = v24 - 24;
        } while (v24 != 24);
    }
    *((unsigned long long *)&v0->field_10) = v13;
    *((unsigned long *)((char *)&v0->field_10 + 8)) = v29;
    *((void*)&v0->field_8) = v12;
    *((void*)&v0->field_0[0]) = v11;
    return a0;
}
