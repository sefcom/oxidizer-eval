long long just::justfile::Justfile::evaluate_scopes(void* a0, unsigned long long a1[87], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5[3], unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    char v0;  // [bp-0x120]
    char v1;  // [bp-0x11f]
    char v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    char v4;  // [bp-0x10f]
    char v5;  // [bp-0x108]
    char v6;  // [bp-0x100], Other Possible Types: unsigned long
    char v7;  // [bp-0xf8]
    char v8;  // [bp-0xf0]
    char v9;  // [bp-0xe8]
    char v10;  // [bp-0xe0]
    char v11;  // [bp-0xd8]
    char v12;  // [bp-0xd0]
    char v13;  // [bp-0xc8]
    unsigned long v14;  // [bp-0xc0]
    int v15;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v16;  // [bp-0xb0]
    unsigned long v17;  // [bp-0xa8]
    unsigned long v18;  // [bp-0xa0]
    unsigned long v19;  // [bp-0x99]
    unsigned long long v20;  // [bp-0x98]
    void* v21;  // [bp-0x90]
    unsigned long v22;  // [bp-0x88]
    unsigned long v23;  // [bp-0x80]
    unsigned long v24;  // [bp-0x78]
    void* v25;  // [bp-0x70]
    void* v26;  // [bp-0x60]
    char v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    unsigned long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long v31;  // rax
    unsigned long v32;  // rcx
    unsigned long v33;  // rax
    unsigned long long v35;  // rdx
    int v36;  // xmm0
    int v37;  // xmm1
    int v38;  // xmm2
    int v39;  // xmm0

    v0.evaluate_assignments(a3, a4, a1, a5, a6, a8);
    v29 = v0;
    if ((char)v29 != 56)
    {
        v19 = v6;
        memcpy(&(char)v17, &v4, 16);
        *((int128_t *)&v15) = *((int128_t *)&v1);
        *((int128_t *)&a0[88]) = *((int128_t *)&v13);
        *((int128_t *)&a0[72]) = *((int128_t *)&v11);
        *((int128_t *)&a0[56]) = *((int128_t *)&v9);
        *((int128_t *)&a0[40]) = *((int128_t *)&v7);
        *((unsigned long *)&a0[32]) = v19;
        v39 = (int128_t)v15;
        *((int128_t *)&a0[17]) = *((int128_t *)&v17);
        a0[1] = v39;
        *((char *)a0) = v29;
        return v29;
    }
    memcpy(&v27, &v2, 16);
    memcpy(&v28, &v5, 16);
    v0.alloc_fast_path(a2, &v27);
    if (*((int *)&v0) == 1)
        v30 = a2.alloc_slow_path(&v2);
    v0.clone(&a1[6]);
    a7.insert(&v0, a1, v30);
    v31 = a1[84];
    v32 = a1[85];
    v33 = v31;
    if (v33)
        v33 = a1[86];
    v15 = v31;
    v16 = 0;
    v17 = v31;
    v18 = v32;
    v20 = v15;
    v21 = 0;
    v22 = v31;
    v23 = v32;
    v24 = v33;
    if (v15.next())
    {
        do
        {
            v25 = 0;
            v26 = 0;
            v0.evaluate_scopes(v35, a2, a3, a4, &v25, v30, a7, a8);
            if (v0 != 56)
            {
                *((unsigned long *)&a0[96]) = v14;
                *((int128_t *)&a0[80]) = *((int128_t *)&v12);
                *((int128_t *)&a0[64]) = *((int128_t *)&v10);
                v36 = *((int128_t *)&v0);
                v37 = *((int128_t *)&v3);
                v38 = *((int128_t *)&v6);
                *((int128_t *)&a0[48]) = *((int128_t *)&v8);
                a0[32] = v38;
                a0[16] = v37;
                *(a0) = v36;
                return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v25);
            }
            core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v25);
        } while (v15.next());
    }
    *((char *)a0) = 56;
    return a0;
}
