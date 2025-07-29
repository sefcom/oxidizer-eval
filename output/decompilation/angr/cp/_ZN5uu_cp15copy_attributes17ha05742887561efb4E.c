long long uu_cp::copy_attributes(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[12])
{
    char *v0;  // [bp-0x260], Other Possible Types: unsigned long long
    char *v1;  // [bp-0x258], Other Possible Types: unsigned long long
    int v2;  // [bp-0x250], Other Possible Types: unsigned long long
    char v3;  // [bp-0x248], Other Possible Types: unsigned long long
    int v4;  // [bp-0x240]
    unsigned long long v5;  // [bp-0x230]
    unsigned long long v6;  // [bp-0x228]
    unsigned long long v7;  // [bp-0x220]
    struct struct_1 v8[16];  // [bp-0x218]
    struct struct_1 v9[16];  // [bp-0x218]
    unsigned long long v10;  // [bp-0x210]
    int v11;  // [bp-0x208], Other Possible Types: char *
    unsigned long long v12;  // [bp-0x200]
    int v13;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v14;  // [bp-0x1e8]
    char v15;  // [bp-0x1e0]
    unsigned long long v16;  // [bp-0x1d8]
    unsigned long long v17;  // [bp-0x1d0]
    unsigned long long v18;  // [bp-0x1c8]
    unsigned long long v19;  // [bp-0x1c0]
    char *v20;  // [bp-0x1b8]
    unsigned long long v21;  // [bp-0x1b0]
    void* v22;  // [bp-0x1a8]
    char v23;  // [bp-0x1a0]
    unsigned long v24;  // [bp-0x198]
    unsigned long long v25;  // [bp-0x190]
    char v26;  // [bp-0x188]
    int v27;  // [bp-0x178]
    int v28;  // [bp-0x168]
    int v29;  // [bp-0x158]
    int v30;  // [bp-0x148]
    char v31;  // [bp-0x138]
    int v32;  // [bp-0x128]
    unsigned long long v33;  // [bp-0x118]
    int v34;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v35;  // [bp-0x108]
    char v36;  // [bp-0x100]
    int v37;  // [bp-0xf0]
    unsigned long long v38;  // [bp-0xe0]
    char v39;  // [bp-0xd8]
    int v40;  // [bp-0xc8]
    int v41;  // [bp-0xb8]
    int v42;  // [bp-0xa8]
    int v43;  // [bp-0x98]
    char v44;  // [bp-0x88]
    int v45;  // [bp-0x78]
    int v46;  // [bp-0x68]
    int v47;  // [bp-0x58]
    int v48;  // [bp-0x48]
    unsigned long long v49;  // [bp-0x38]
    unsigned long long v51;  // r13
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    int v55;  // xmm0
    unsigned long long v56;  // rax
    int v57;  // xmm0
    int v58;  // xmm1

    v6 = a3;
    v7 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v33 = 1;
    v34 = a3;
    v35 = a4;
    v36 = 1;
    *((unsigned long long **)&v8[0]) = &v0;
    v10 = <os_display::Quoted as core::fmt::Display>::fmt;
    v11 = &v33;
    v12 = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &g_5fb810;
    v19 = 2;
    v22 = 0;
    v20 = &v8[0].field_0;
    v21 = 2;
    v15.map_or_else(&v18);
    v51 = v17;
    std::fs::symlink_metadata(&v18, a1, a2);
    if (v18 == 2)
    {
        uu_cp::copy_attributes::{{closure}}(&v0, v16, v51, v19);
        v14 = v5;
        v52 = *((int128_t *)&v0);
        v53 = *((int128_t *)&v2);
        v54 = v4;
        v46 = v52;
        v47 = v53;
        v48 = v54;
        v49 = v14;
        *((unsigned long long *)&a0->field_10[16]) = v14;
    }
    else
    {
        v14 = v25;
        v55 = *((int128_t *)&v19);
        memcpy(&v13, &v23, 16);
        *((int128_t *)&v11) = *((int128_t *)&v21);
        *((void*)&v9->field_0) = v55;
        memcpy(&v39, &v26, 16);
        v40 = v27;
        v41 = v28;
        v42 = v29;
        v43 = v30;
        memcpy(&v44, &v31, 16);
        v45 = v32;
        v49 = v14;
        v48 = v13;
        v38 = v49;
        v37 = v48;
        memcpy(&v36, &v11, 16);
        *((struct struct_1 [16])&v34) = v9;
        v33 = v18;
        v0 = &v33;
        v1 = &v6;
        v3 = v51;
        uu_cp::handle_preserve(&v18, a5[0], a5[1], &v0);
        if (v18 == 9223372036854775820)
        {
            v0 = &v6;
            v1 = &v33;
            v2 = v16;
            v3 = v51;
            uu_cp::handle_preserve(&v18, a5[2], a5[3], &v0);
            v56 = v18;
            if (v18 == 9223372036854775820)
            {
                uu_cp::handle_preserve(&v18, a5[4], a5[5], &v33, &v6);
                v56 = v18;
                if (v18 == 9223372036854775820)
                {
                    v0 = a1;
                    v1 = a2;
                    *((int128_t *)&v2) = *((int128_t *)&v6);
                    uu_cp::handle_preserve(&v18, a5[10], a5[11], &v0);
                    v56 = v18;
                    if (v18 == 9223372036854775820)
                    {
                        *((unsigned long long *)&a0->field_0) = 9223372036854775820;
                        ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v15);
                        return a0;
                    }
                }
            }
            v57 = *((int128_t *)&v19);
            v58 = *((int128_t *)&v21);
            *((int128_t *)&a0->field_10[8]) = *((int128_t *)&v23);
            *((void*)&a0->field_8[16]) = v58;
            *((void*)&a0->field_8[0]) = v57;
            *((unsigned long long *)&a0->field_0) = v56;
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v15);
            return a0;
        }
        *((unsigned long *)&a0->field_10[16]) = v24;
        v52 = *((int128_t *)&v18);
        v53 = *((int128_t *)&v20);
        v54 = *((int128_t *)&v22);
    }
    *((void*)&a0->field_10[0]) = v54;
    *((void*)&a0->field_8[8]) = v53;
    *((void*)&a0->field_0) = v52;
    ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v15);
    return a0;
}
