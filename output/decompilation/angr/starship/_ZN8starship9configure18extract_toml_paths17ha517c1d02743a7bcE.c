long long starship::configure::extract_toml_paths(void* a0, unsigned long long *a1, unsigned long long a2[3], unsigned long a3)
{
    unsigned long long *v0;  // [bp-0x1f8]
    unsigned long long v1[2];  // [bp-0x1f0]
    unsigned long v2;  // [bp-0x1e8]
    unsigned long long v3;  // [bp-0x1e0]
    void* v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1d0]
    void* v6;  // [bp-0x1c8]
    int v7;  // [bp-0x1c0]
    int v8;  // [bp-0x1b0]
    unsigned long long v9;  // [bp-0x1a0]
    unsigned short v10;  // [bp-0x190]
    char v11;  // [bp-0x18e]
    unsigned int v12;  // [bp-0x18d]
    char v13;  // [bp-0x189]
    unsigned long long v14;  // [bp-0x180]
    unsigned long long *v15;  // [bp-0x178]
    unsigned long long *v16;  // [bp-0x178]
    unsigned long long v17[3];  // [bp-0x170]
    unsigned long long v18;  // [bp-0x168]
    unsigned long long v19[2];  // [bp-0x160]
    unsigned long long v20;  // [bp-0x158]
    void* v21;  // [bp-0x150], Other Possible Types: char
    unsigned long v22;  // [bp-0x148]
    int v23;  // [bp-0x140]
    int v24;  // [bp-0x130]
    int v25;  // [bp-0x120]
    unsigned short v26;  // [bp-0x110]
    int v27;  // [bp-0x108]
    int v28;  // [bp-0xf8]
    int v29;  // [bp-0xf8]
    int v30;  // [bp-0xf8]
    int v31;  // [bp-0xe8]
    int v32;  // [bp-0xe8]
    int v33;  // [bp-0xd8]
    int v34;  // [bp-0xd8]
    char v35;  // [bp-0xc8]
    int v36;  // [bp-0xb8]
    int v37;  // [bp-0xa8]
    unsigned long long v38;  // [bp-0x98]
    char v39;  // [bp-0x88]
    char v40;  // [bp-0x78]
    char v41;  // [bp-0x68]
    char v42;  // [bp-0x58]
    char v43;  // [bp-0x48]
    unsigned long v45;  // r15
    unsigned long long v46;  // rax
    unsigned long long *v47;  // rax
    unsigned long v48;  // rdx
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm2
    unsigned long long v52[3];  // rax
    char *v53;  // rbx
    unsigned long long v54;  // cc_ndep
    unsigned long v55;  // r14
    unsigned long long v56[2];  // rcx
    unsigned long long v57;  // r14
    unsigned long long v58;  // rax
    void* v59;  // rax
    unsigned long long v61[2];  // rbp
    unsigned long long v62[2];  // rbp
    void* v64;  // rbx
    void* v65;  // rbx
    unsigned long long v66[2];  // rax
    unsigned long long v67;  // r12
    unsigned long long v68;  // rcx
    unsigned long long v69;  // rbx
    unsigned long long *v70;  // rax
    unsigned long long v71[2];  // rbp
    unsigned long long *v72;  // rax
    unsigned long long v74[2];  // rbp
    unsigned long long v75[2];  // rax
    unsigned long v76;  // rdx
    unsigned long long v77;  // r12
    char v78[8];  // rbp
    int v79;  // xmm0
    int v80;  // xmm1
    int v81;  // xmm2

    v45 = a2;
    v46 = std::thread::local::LocalKey<T>::with();
    v4 = 0;
    v5 = 8;
    v6 = 0;
    *((uint128_t *)&v8) = g_11ed468;
    *((uint128_t *)&v7) = g_11ed458;
    v9 = v46;
    v10 = 0;
    v11 = 0;
    if (9223372036854775814 <= *(a1))
        v47 = a1;
    else
        v47 = 0;
    v15 = v47;
    if (*(a1) < 9223372036854775814)
    {
        *((unsigned long *)&a0[64]) = v48;
        *((unsigned short *)&a0[72]) = 0;
        *((char *)&a0[74]) = 0;
        *((unsigned int *)&a0[75]) = v12;
        *((char *)&a0[79]) = v13;
        v49 = *((int128_t *)&v4);
        v50 = *((int128_t *)&v6);
        v51 = (int128_t)(&v7)[8];
        *((int128_t *)&a0[48]) = (int128_t)(&v8)[8];
        a0[32] = v51;
        a0[16] = v50;
        *(a0) = v49;
        return core::ptr::drop_in_place<toml::value::Value>(a1);
    }
    v0 = a1;
    v14 = &a2[a3];
    v52 = a2 + 1;
    v53 = &v21;
    do
    {
        v55 = *((long long *)(v45 + 16));
        v17[0] = v52;
        v28.into_searcher(46, *((long long *)(v45 + 8)), v55);
        v25 = v33;
        v24 = v31;
        v23 = v28;
        v21 = 0;
        v22 = v55;
        v26 = 1;
        v18.collect(v53);
        v56 = v19;
        v57 = v20;
        v58 = v57;
        v59 = v58 - 1;
        if (v58 < 1)
            v61 = 8;
        else
            v61 = v56;
        v62 = v61;
        if ((char)_ccall(2, 8, v58, 1, v54))
            v64 = 0;
        else
            v64 = v59;
        v65 = v64;
        v1[0] = v56;
        v66 = 0x10 * v59 + (char *)v56;
        if (v57 < 1)
            v66 = &g_525500[0];
        v68 = v66[0];
        v3 = v66[0];
        v2 = v66[1];
        v69 = 0x10 * v65 + (char *)v62;
        v16 = v15;
        do
        {
            v70 = v16;
            v71 = v62;
            if (v71 != v69)
            {
                v72 = v70.get_mut(v71[0], v71[1], v68);
                v29 = v28;
                if (!v72)
                    break;
                continue;
            }
            else
            {
                v21.shift_remove(v70, v3, v2);
                memcpy(&v43, &v26, 16);
                memcpy(&v42, &v25, 16);
                memcpy(&v41, &v24, 16);
                memcpy(&v40, &v23, 16);
                memcpy(&v39, &v21, 16);
                v77 = v76 * 16 + 0.index(v67 - 1, v1, v57, &g_11f3288);
                v78 = &v4;
                while (v75 != v77 && v75)
                {
                    v21.entry(v78, v75[0], v75[1]);
                    v78 = v21.or_insert_with();
                    v75 = &v75[v75 != v77];
                    if (*(v78) < 9223372036854775814)
                        core::option::unwrap_failed(&g_11f32a0); /* do not return */
                }
                v21.to_vec(v3, v2);
                v38 = (long long)v23;
                memcpy(&v37, &v21, 16);
                v21.insert_full(v78, &v37, &v39);
                v36 = v27;
                memcpy(&v35, &v25, 16);
                memcpy(&v33, &v24, 16);
                memcpy(&v31, &v23, 16);
                memcpy(&v28, &v22, 16);
                core::ptr::drop_in_place<alloc::borrow::Cow<toml::value::Value>>(&v28);
                v29 = v30;
                v31 = v32;
                v33 = v34;
                break;
            }
            v74 = &v71[v71 != v69];
            v54 = (&v71[v71 != v69] <= v71 ? 1 : 0);
            v68 = 9223372036854775813;
            v62 = v74;
            v16 = v72;
            v29 = v28;
        } while (*(v16) > 9223372036854775813);
        v28 = v29;
        core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v18, v1);
        v45 = v17;
        v52 = v45 + 24;
        if (v45 == v14)
            v52 = v45;
        v53 = &v21;
    } while (v45 != v14);
    *((int128_t *)&a0[64]) = *((int128_t *)&v48);
    v79 = *((int128_t *)&v4);
    v80 = *((int128_t *)&v6);
    v81 = (int128_t)(&v7)[8];
    *((int128_t *)&a0[48]) = (int128_t)(&v8)[8];
    a0[32] = v81;
    a0[16] = v80;
    *(a0) = v79;
    return core::ptr::drop_in_place<toml::value::Value>(v0);
}
