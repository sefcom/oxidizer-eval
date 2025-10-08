long long just::justfile::Justfile::run_dependencies(char *a0, void* a1, struct_0 **a2, unsigned long long a3[3], unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long a8, unsigned long long a9[2], unsigned long long a10)
{
    void* v0;  // [bp-0x158]
    void* v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    void* v3;  // [bp-0x140]
    int v4;  // [bp-0x138]
    int v5;  // [bp-0x131]
    int v6;  // [bp-0x130]
    char v7;  // [bp-0x129]
    void* v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x121]
    char *v10;  // [bp-0x120], Other Possible Types: void*
    char *v11;  // [bp-0x118]
    unsigned long v12;  // [bp-0x110]
    unsigned long v13;  // [bp-0x108]
    unsigned long v14;  // [bp-0x100]
    unsigned long v15;  // [bp-0xf0]
    unsigned long long v16;  // [bp-0xe8]
    unsigned long long v17;  // [bp-0xe0]
    char v18;  // [bp-0xd0], Other Possible Types: unsigned long long
    int v19;  // [bp-0xcf]
    int v20;  // [bp-0xc8]
    char v21;  // [bp-0xc0]
    int v22;  // [bp-0xbf]
    unsigned long long v23;  // [bp-0xb8]
    char v24;  // [bp-0xb0]
    char v25;  // [bp-0xaf]
    char v26;  // [bp-0xa0]
    char v27;  // [bp-0x9f]
    char v28;  // [bp-0x90]
    char v29;  // [bp-0x8f]
    char v30;  // [bp-0x80]
    char v31;  // [bp-0x7f]
    unsigned long v32;  // [bp-0x70]
    unsigned long long v33;  // [bp-0x68]
    void* v34;  // [bp-0x40]
    unsigned long long v35;  // [bp-0x38]
    struct_0 *v36;  // rax
    unsigned long long v37;  // r13
    unsigned long long v38;  // r12
    unsigned long long v39;  // r12
    char v40;  // al
    unsigned long v41;  // r12
    int v42;  // xmm2
    int v43;  // xmm3
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    char v47;  // al
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm2

    v34 = a1;
    v35 = a5;
    v36 = *(a2);
    if (v36->field_19f)
    {
        *(a0) = 56;
        return v36;
    }
    v1 = 0;
    v2 = 8;
    v3 = 0;
    if (a4)
    {
        v37 = a3 + 1;
        v38 = a4 * 32;
        do
        {
            v39 = v38;
            v15 = *((long long *)(v37 - 16));
            v16 = *((long long *)(v37 - 8)) * 128 + *((long long *)(v37 - 16));
            v17 = a6;
            v18.collect(&v15);
            v40 = v18;
            if (v40 != 56)
            {
                v42 = *((int128_t *)&v24);
                v43 = *((int128_t *)&v26);
                memcpy(&v7, &v21, 16);
                *((int128_t *)&v4) = (int128_t)v19;
                *((unsigned long *)&v0[96]) = v32;
                *((int128_t *)&v0[80]) = *((int128_t *)&v30);
                *((int128_t *)&v0[64]) = *((int128_t *)&v28);
                v0[48] = v43;
                v0[32] = v42;
                *((int128_t *)&v0[16]) = *((int128_t *)&v7);
                *((int128_t *)&v0[1]) = (int128_t)v4;
                *((char *)v0) = v40;
                return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::sync::Arc<just::recipe::Recipe>,alloc::vec::Vec<alloc::string::String>)>>(&v1);
            }
            v9 = v23;
            *((int128_t *)&v5) = (int128_t)v20;
            v23 = v9;
            *((int128_t *)&v20) = (int128_t)v5;
            v18 = v37;
            v1.push(&v18);
            v37 += 32;
            v41 = v39 - 32;
            v38 = v41;
        } while (v39 != 32);
    }
    if (a8 + 216.contains(13))
    {
        v8 = 0;
        memcpy(&(char)v4, &v1, 16);
        v10 = &v34;
        v11 = &v35;
        v12 = &vvar_7;
        v13 = &vvar_9;
        v14 = &vvar_10;
        std::thread::scoped::scope(&(char)v18, &(char)v4);
        if ((char)v18 != 56)
        {
            *((unsigned long *)&v0[96]) = v32;
            *((int128_t *)&v0[80]) = *((int128_t *)&v30);
            *((int128_t *)&v0[64]) = *((int128_t *)&v28);
            v44 = *((int128_t *)&v18);
            v45 = *((int128_t *)&v21);
            v46 = *((int128_t *)&v24);
            *((int128_t *)&v0[48]) = *((int128_t *)&v26);
            v0[32] = v46;
            v0[16] = v45;
            *(v0) = v44;
            return v32;
        }
    }
    else
    {
        v15.into_iter(&v1);
        (char)v4.next(&v15);
        if (!((char)(((0 ^ (long long)(&v5)[1]) & (0 ^ -((long long)(&v5)[1]))) >> 63)))
        {
            do
            {
                (char)v18.run_recipe((long long)(&v5)[9], v10, a1, v33, 1, a7, *((long long *)(long long)v4) + 16, a9, a10);
                v47 = v18;
                if (v47 != 56)
                {
                    *((unsigned long *)&v0[96]) = v32;
                    *((int128_t *)&v0[81]) = *((int128_t *)&v31);
                    *((int128_t *)&v0[65]) = *((int128_t *)&v29);
                    v48 = (int128_t)v19;
                    v49 = (int128_t)v22;
                    v50 = *((int128_t *)&v25);
                    *((int128_t *)&v0[49]) = *((int128_t *)&v27);
                    v0[33] = v50;
                    v0[17] = v49;
                    v0[1] = v48;
                    *((char *)v0) = v47;
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&alloc::sync::Arc<just::recipe::Recipe>,alloc::vec::Vec<alloc::string::String>)>>(&v15);
                }
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                (char)v4.next(&v15);
            } while ((long long)(&v5)[1] != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&alloc::sync::Arc<just::recipe::Recipe>,alloc::vec::Vec<alloc::string::String>)>>(&v15);
    }
    *((char *)v0) = 56;
    return a0;
}
