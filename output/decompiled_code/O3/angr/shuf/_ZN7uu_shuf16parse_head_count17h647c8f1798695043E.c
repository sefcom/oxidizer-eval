long long uu_shuf::parse_head_count::h647c8f1798695043(unsigned long long a0[3], struct_0 *a1)
{
    unsigned long long v0;  // [sp-0xf8]
    unsigned long long *v1;  // [sp-0xf0]
    unsigned long long v2;  // [sp-0xe8]
    unsigned long long *v3;  // [sp-0xd8]
    unsigned long long *v4;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xc8]
    unsigned long long *v6;  // [sp-0xc0]
    char v7;  // [bp-0xb8]
    unsigned long v9;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xa0]
    void* v11;  // [sp-0x98]
    unsigned long long v12;  // [sp-0x90]
    unsigned long long v13;  // [sp-0x88]
    char v14;  // [sp-0x80]
    char v15;  // [bp-0x78]
    char v16;  // [bp-0x68]
    unsigned long v17;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x58]
    unsigned long long v19;  // [sp-0x50]
    unsigned long long v20;  // [sp-0x48]
    void* v21;  // [sp-0x40]
    unsigned long long v22;  // [sp-0x18]
    unsigned long v24;  // r14
    unsigned long long *v25;  // r14
    unsigned long long v26;  // rax
    unsigned long long *v27;  // rsi
    unsigned long long v28;  // rbp
    unsigned long long *v29;  // r15
    unsigned long long *v30;  // r14
    unsigned long long v31;  // r12
    unsigned long long v32;  // r13
    unsigned long long v33;  // rbx
    unsigned long long *v36;  // rbx
    unsigned long long v37[3];  // rbp
    unsigned long long *v38;  // rbx
    struct_2 *v40;  // rbx
    struct_2 *v41;  // rbx
    unsigned long long v42;  // r15
    unsigned long long v43;  // r15
    unsigned long long v45;  // r15
    unsigned long long v46;  // r15
    unsigned long long v47[3];  // rax

    v22 = v24;
    v25 = a1->field_8;
    v26 = a1->field_10;
    v27 = &v25[3 * v26];
    v3 = v25;
    v4 = v25;
    v2 = a1->field_0;
    v5 = v2;
    v6 = v27;
    if (!v26)
    {
        v28 = -1;
    }
    else
    {
        v1 = v27;
        v0 = v26 * 24;
        v28 = -1;
        v29 = 0;
        do
        {
            v31 = *((long long *)(v25 + v29));
            if (v31 == 0x8000000000000000)
            {
                v36 = v25 + v29 + 24;
                goto LABEL_48e6f3;
            }
            v32 = *((long long *)(v25 + v29 + 8));
            v33 = *((long long *)(v25 + v29 + 16));
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, v32, v33);
            if (v7)
            {
                v4 = v25 + v29 + 24;
                v11 = 0;
                v12 = v32;
                v13 = v33;
                v14 = 1;
                v9 = &v11;
                v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v17 = &g_4f24e0;
                v18 = 1;
                v21 = 0;
                v19 = &v9;
                v20 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v15, &v17);
                v37 = a0;
                v37[2] = *((long long *)&v16);
                *((int128_t *)&v37[0]) = *((int128_t *)&v15);
                if (v31)
                    __rust_dealloc(v32);
                if (v0 - 24 != v29)
                {
                    v41 = v25 + v29 + 32;
                    v42 = (-24 + v0 - (char *)v29) / 24;
                    do
                    {
                        v45 = v42;
                        if (v41->field_0)
                            __rust_dealloc(v41->field_-8);
                    } while ((v41 += 24, v46 = v45 - 1, v45 != 1));
                }
                if (v2)
                {
                    __rust_dealloc(v25);
                    return v37;
                }
                return v37;
            }
            if (v31)
                __rust_dealloc(v32);
            v29 += 3;
        } while (v0 != v29);
        v36 = v1;
LABEL_48e6f3:
        v4 = v36;
        v30 = v4;
    }
    v38 = v30;
    if (v27 != v38)
    {
        v40 = v38 + 1;
        do
        {
            v43 = (v27 - v38) / 24;
            if (v40->field_0)
                __rust_dealloc(v40->field_-8);
        } while ((v41 += 24, v46 = v45 - 1, v45 != 1));
    }
    if (v2)
        __rust_dealloc(v25);
    v47 = a0;
    v47[1] = v28;
    v37 = v47;
    v37[0] = 0x8000000000000000;
    return v37;
}
