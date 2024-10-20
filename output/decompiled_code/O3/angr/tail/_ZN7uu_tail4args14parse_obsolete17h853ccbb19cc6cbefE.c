int uu_tail::args::parse_obsolete::h853ccbb19cc6cbef()
{
    unsigned long v0;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x130]
    unsigned long v2;  // [sp-0x128], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x120]
    unsigned long long v4;  // [sp-0x118]
    void* v5;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x108]
    unsigned int v7;  // [sp-0x100]
    unsigned long long v8;  // [sp-0xf8]
    char v9;  // [sp-0xf0]
    unsigned int v10;  // [bp-0xef]
    char v11;  // [sp-0xec]
    char v12;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long *v13;  // [sp-0xd0]
    unsigned long long v14;  // [sp-0xc8]
    unsigned long long v15;  // [sp-0xc0]
    char v16;  // [bp-0xb8]
    char v17;  // [bp-0xa8]
    char v18;  // [bp-0xa0]
    char v19;  // [bp-0x9f]
    char v20;  // [bp-0x9e]
    char v21;  // [bp-0x98]
    unsigned long long v23[3];  // rsi
    unsigned long long v24;  // rax
    unsigned long long v25;  // r12
    unsigned long long *v26;  // rdi
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v31;  // rcx
    unsigned long long v34;  // rax
    unsigned long long *v36;  // rax
    unsigned long long v37;  // rax
    int v38;  // xmm0
    int v39;  // xmm1
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2

    uu_tail::parse::parse_obsolete::h8256e5b55d2b08e4(&v17, v23);
    v24 = v20;
    if ((unsigned int)v24 == 2)
    {
        v25 = v17;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v21, *((long long *)(v23 + &g_8)), *((long long *)(v23 + &g_8)));
        goto *((int *)(4335324 + vvar_60{reg 112} * 4)) + 4335324;
    }
    else
    {
        if ((unsigned int)v24 == 3)
        {
            *(v26) = 5;
        }
        else
        {
            v8 = 5;
            v9 = 0;
            v6 = 1;
            v7 = 0;
            v10 = 0x2000000;
            v3 = 0;
            v4 = &g_8;
            v5 = 0;
            if ((char)v24)
                v11 = v27;
            v28 = v18;
            v29 = *((long long *)&v17);
            if (!v19)
                v28 = 4;
            v0 = v28;
            v1 = v34;
            v2 = v31;
            if (v27)
            {
                uu_tail::paths::Input::from::h595ac70a8115f18f(&v12, v27);
            }
            else
            {
                v36 = __rust_alloc(14, 1);
                if (!v36)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                *((long long *)((char *)v36 + 6)) = 8391737100187231346;
                *(v36) = 7237954635114312819;
                v15 = 0x8000000000000000;
                v12 = &g_8;
                v13 = v36;
                v14 = &g_8;
            }
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8e5c6092d7909521(&v3);
            v37 = v4;
            v38 = *((int128_t *)&v12);
            v39 = *((int128_t *)&v14);
            *((int128_t *)(v37 + (char *)&g_18)) = *((int128_t *)&v16);
            *((void*)(v37 + (char *)&g_8)) = v39;
            *((void*)v37) = v38;
            v5 = 1;
            v40 = *((int128_t *)&v0);
            v41 = *((int128_t *)&v2);
            v42 = *((int128_t *)&v6);
            *((int128_t *)&v26[8]) = *((int128_t *)&v8);
            *((void*)(v26 + &g_28)) = v42;
            *((void*)(v26 + &g_8)) = v41;
            *((void*)v26) = v40;
            *((unsigned long long *)(v26 + &g_18)) = v4;
            *((unsigned long long *)(v26 + &g_28)) = v5;
        }
        return;
    }
}
