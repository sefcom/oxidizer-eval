long long uu_touch::touch(unsigned long a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    void* v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    unsigned long v2;  // [bp-0x120]
    unsigned int v3;  // [bp-0x114]
    unsigned int v4[1][2];  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x108]
    char v7;  // [bp-0xfc]
    unsigned long v8;  // [bp-0xf8]
    char v9;  // [bp-0xf0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v10;  // [bp-0xe8]
    unsigned long v11;  // [bp-0xe0]
    int v12;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v13;  // [bp-0xd0]
    int v14;  // [bp-0xc8], Other Possible Types: char
    char v15;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0xa0]
    unsigned long v18;  // [bp-0xa0]
    unsigned long long v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    void* v22;  // [bp-0x78]
    unsigned long v23;  // [bp-0x70]
    struct_1 *v24;  // [bp-0x68]
    unsigned long v25;  // [bp-0x60]
    char *v26;  // [bp-0x58]
    char v27;  // [bp-0x50]
    char v28;  // [bp-0x40]
    void* v30;  // rbp
    unsigned long v31;  // rcx
    unsigned long v32;  // r15
    unsigned long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long v35;  // r15
    struct_1 *v36;  // xmm0lq
    unsigned long v37;  // r15
    unsigned long v38;  // r15
    unsigned long v39;  // r14
    unsigned int v40;  // r13d
    unsigned long v42;  // r15
    unsigned long long v43;  // rax
    struct_1 *v44;  // rdx
    struct_1 *v45;  // rdx
    struct_1 *v46;  // rdx
    void* v47;  // r15
    struct_1 *v48;  // rdx
    unsigned long v49;  // rbx
    struct_1 *v50;  // rdx
    struct_1 *v51;  // r12
    struct_1 *v52;  // r13
    unsigned long v53;  // rsi
    unsigned long v54;  // rcx
    unsigned long long v55;  // rax
    int v56;  // xmm1
    int v58;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    unsigned int v63;  // [bp-0x100]

    v30 = a3;
    v31 = (long long)a3[24] - -9223372036854775809;
    if ((long long)a3[24] >= 9223372036854775810)
        v31 = 0;
    if (!v31)
    {
        uu_touch::stat(&v12, (long long)a3[32], (long long)a3[40], (char)a3[49] ^ 1);
        if ((v12 & 1))
        {
            uu_touch::touch::{{closure}}(&v4, (long long)a3[32], (long long)a3[40], v13);
            if (v4 != 9223372036854775812)
            {
                v36 = *((long long *)&v63);
                *((unsigned long long *)v0) = v4;
                *((unsigned long *)&v0[8]) = v35;
                *((struct_1 **)&v0[16]) = v36;
                *((unsigned long *)&v0[24]) = v32;
                *((unsigned long *)&v0[32]) = v9;
                *((unsigned long long *)&v0[40]) = v10;
                return a0;
            }
            v33 = v63;
            v34 = *((int *)&v9);
            v5 = v35;
            v8 = v32;
        }
        else
        {
            v33 = *((int *)&v14);
            v34 = *((int *)&v15);
        }
    }
    else if (v31 == 1)
    {
        v32 = (long long)a3[32];
        v33 = (int)a3[40];
        v34 = v33 & 4294967295;
        v35 = v32;
    }
    else
    {
        v4.now();
        v32 = uu_touch::datetime_to_filetime(&v4);
        v34 = v33 & 4294967295;
        v35 = v32;
    }
    v37 = v35;
    v1 = v34;
    v17 = 0x8000000000000000;
    if (*((long long *)a3) == 0x8000000000000000)
    {
        v3 = v33;
        v16 = v32;
        v38 = v37;
    }
    else
    {
        uu_touch::filetime_to_datetime(&v12, v37, v33);
        if (!*((int *)&v12))
        {
            *((unsigned long long *)v0) = 9223372036854775809;
            *((unsigned long *)&v0[8]) = v37;
            *((unsigned int *)&v0[16]) = v33;
            return a0;
        }
        v39 = v32;
        memcpy(&v27, &v12, 16);
        uu_touch::parse_date(&v4, &v27, (long long)a3[8], (long long)a3[16]);
        if (v4 != 9223372036854775812)
        {
            v62 = *((int128_t *)&v7);
            *((int128_t *)&v0[32]) = *((int128_t *)&v9);
            v0[20] = v62;
            *((unsigned long long *)v0) = v4;
            *((unsigned long *)&v0[8]) = v5;
            *((unsigned int *)&v0[16]) = v63;
            return a0;
        }
        v3 = v63;
        v40 = v1;
        uu_touch::filetime_to_datetime(&v12, v39, v40);
        if (!*((int *)&v12))
        {
            *((unsigned long long *)v0) = 9223372036854775809;
            *((unsigned long *)&v0[8]) = v39;
            *((unsigned int *)&v0[16]) = v40;
            return a0;
        }
        memcpy(&v28, &v12, 16);
        uu_touch::parse_date(&v4, &v28, (long long)a3[8], (long long)a3[16]);
        if (v4 != 9223372036854775812)
        {
            v61 = *((int128_t *)&v7);
            *((int128_t *)&v0[32]) = *((int128_t *)&v9);
            v0[20] = v61;
            *((unsigned long long *)v0) = v4;
            *((unsigned long *)&v0[8]) = v5;
            *((unsigned int *)&v0[16]) = v2;
            return a0;
        }
        v2 = v63;
        v16 = v5;
        v1 = v2;
        v38 = v5;
    }
    v42 = v38;
    v20 = a1;
    v21 = a2 * 24 + a1;
    v22 = 0;
    v43 = v20.next();
    if (v44)
    {
        v11 = v42;
        do
        {
            v46 = v45;
            v47 = v30;
            v19 = v43;
            v18 = v17;
            v48 = v46;
            if (v48->field_0 == v18)
            {
                uu_touch::pathbuf_from_stdout(&v4);
                v49 = v5;
                v50 = *((long long *)&v63);
                v39 = v8;
                if (v4 != 9223372036854775812)
                {
                    *((int128_t *)&v0[32]) = *((int128_t *)&v9);
                    *((unsigned long long *)v0) = v4;
                    *((unsigned long *)&v0[8]) = v5;
                    *((struct_1 **)&v0[16]) = v50;
                    *((unsigned long *)&v0[24]) = v39;
                    return a0;
                }
                v51 = v50;
                v52 = v50;
                v53 = v39;
                v54 = v17;
                v18 = v54;
                v48 = v50;
                if (v5 != v18)
                    continue;
            }
            v54 = v18;
            v51 = v48;
            v52 = v48;
            v50 = v48->field_8;
            v53 = v51->field_10;
            v49 = v54;
            v30 = v47;
            v55 = uu_touch::touch_file(v50, v53, v46->field_0 == v54, v47, v11, v3, v16, v1);
            if (!v55)
            {
                core::ptr::drop_in_place<uu_touch::touch::{{closure}}>(v49, v51);
            }
            else
            {
                v23 = v49;
                v24 = v52;
                v25 = v39;
                v26 = &v19;
                uu_touch::touch::{{closure}}(&v4, &v23, v55, v44);
                v56 = *((int128_t *)&v8);
                *((int128_t *)&v12) = *((int128_t *)&v5);
                v14 = v56;
                v15 = v10;
                if (v4 != 9223372036854775812)
                {
                    *((unsigned long long *)&v0[40]) = v15;
                    v58 = (int128_t)v12;
                    *((int128_t *)&v0[24]) = (int128_t)v14;
                    v0[8] = v58;
                    *((unsigned long long *)v0) = v4;
                    return a0;
                }
            }
            v43 = v20.next();
            v44 = v44;
        } while (v44);
    }
    *((unsigned long long *)v0) = 9223372036854775812;
    return a0;
}
