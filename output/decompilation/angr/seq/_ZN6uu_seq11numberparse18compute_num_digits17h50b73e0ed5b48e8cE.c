void uu_seq::numberparse::compute_num_digits(void* a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    char v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    char v3;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v4[4];  // [bp-0x118]
    int v5;  // [bp-0x110]
    int v6;  // [bp-0x100]
    int v7;  // [bp-0xf0]
    int v8;  // [bp-0xe0]
    int v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc0]
    int v11;  // [bp-0xb8]
    unsigned int v12;  // [bp-0xb8]
    void* v13;  // [bp-0xb0]
    int v14;  // [bp-0xa8]
    int v15;  // [bp-0x98]
    int v16;  // [bp-0x88]
    int v17;  // [bp-0x78]
    int v18;  // [bp-0x68]
    unsigned long long v19;  // [bp-0x58]
    void* v20;  // [bp-0x50]
    unsigned long long v21;  // [bp-0x48]
    unsigned short v22;  // [bp-0x40]
    unsigned long long v24;  // r12
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // r15
    unsigned long long v28;  // rax
    unsigned long long v29;  // r13
    unsigned long long v30[4];  // r15
    unsigned long long v31;  // rbp
    void* v32;  // r12
    void* v33;  // rcx
    unsigned long long v34;  // rax
    int v35;  // xmm0
    unsigned long long v36;  // r13
    unsigned long long v37;  // rcx
    unsigned long v38;  // rbx

    alloc::str::<impl str>::to_lowercase(&v0, a1, a2);
    v24 = core::str::<impl str>::trim_start_matches(v1, v2);
    v12 = 0;
    v26 = ::0x46f610::core::char::methods::encode_utf8_raw(43, &v12).strip_prefix_of(v25, v24, v25);
    if (!v26)
    {
        v27 = v25;
        if (!v26)
            goto LABEL_4713ff;
LABEL_4713fe:
        v28 = v26;
    }
    else
    {
        v27 = v25;
        if (v26)
            goto LABEL_4713fe;
LABEL_4713ff:
        v28 = v24;
    }
    if ((char)core::slice::<impl [T]>::starts_with(v28, v27, "0x-0x.pe-src/uu/seq/src/numberparse.rs", 2) || (char)core::slice::<impl [T]>::starts_with(v28, v27, "-0x.pe-src/uu/seq/src/numberparse.rs", 3))
    {
        v36 = (long long)a3[8];
        if (!(char)".pe-src/uu/seq/src/numberparse.rs".is_contained_in(v28, v27))
        {
            v37 = 1;
            if (!(char)"pe-src/uu/seq/src/numberparse.rs".is_contained_in(v28, v27))
                goto LABEL_471471;
        }
        v37 = 0;
LABEL_471471:
        v38 = a3 + 16;
        *((long long *)&a0[16]) = *((long long *)a3);
        *((unsigned long long *)&a0[24]) = v36;
        *((int128_t *)&a0[32]) = *((int128_t *)v38);
        *((long long *)&a0[48]) = *((long long *)(v38 + 16));
        *((unsigned long long *)&a0[56]) = 0;
        *((unsigned long long *)a0) = v37;
        *((unsigned long long *)&a0[8]) = 0;
    }
    else
    {
        v3.new(v28, v27, "e-src/uu/seq/src/numberparse.rs", 1);
        v19 = v10;
        v18 = v9;
        v17 = v8;
        v16 = v7;
        v15 = v6;
        v14 = v5;
        *((int128_t *)&v11) = *((int128_t *)&v3);
        v20 = 0;
        v21 = v27;
        v22 = 1;
        v3.collect(&v12);
        v29 = (long long)v5;
        if (!v29)
            core::panicking::panic_bounds_check(0, 0, &g_51b2b8); /* do not return */
        v30 = v4;
        if (((char)core::str::<impl str>::find(v30[0], v30[1]) & 1))
        {
            if (v25)
            {
                v31 = v25;
                if (v25 == 1)
                    v31 = (int)core::slice::<impl [T]>::starts_with(v30[0], v30[1], "-src/uu/seq/src/numberparse.rs", 1) + 1;
            }
            else
            {
                v31 = 1;
            }
            v32 = ~(v25) + v30[1];
            if (v29 != 2)
                goto LABEL_471625;
LABEL_4715b7:
            ::0x46e1c0::core::num::<impl i64>::from_ascii_radix(&v12, v30[2], v30[3]);
            v33 = 0;
            if (!(char)v11)
                v33 = v13;
            v34 = (v33 > 0 ? v33 : 0) + v31;
            if (v33 < v32)
            {
                v32 -= v33;
                if ((char)_ccall(5, 16, 0, v33 >> 63 ^ (unsigned long long)(char)(v32 < v33), (unsigned long long)(char)(v32 < v33)))
                    v32 = 0;
            }
            else
            {
                v32 = 0;
            }
        }
        else
        {
            v31 = v30[1];
            v32 = 0;
            if (v29 == 2)
                goto LABEL_4715b7;
LABEL_471625:
            v34 = v31;
        }
        *((long long *)&a0[48]) = (long long)a3[32];
        v35 = *((int128_t *)a3);
        *((int128_t *)&a0[32]) = (int128_t)a3[16];
        a0[16] = v35;
        *((unsigned long long *)&a0[56]) = v34;
        *((unsigned long long *)a0) = 1;
        *((void* *)&a0[8]) = v32;
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v3, v30);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
