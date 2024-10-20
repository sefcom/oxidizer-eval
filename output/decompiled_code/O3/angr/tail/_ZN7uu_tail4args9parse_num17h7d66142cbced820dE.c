long long uu_tail::args::parse_num::h7d66142cbced820d(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [sp-0x100], Other Possible Types: unsigned long long
    char v1;  // [bp-0xf8]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    unsigned long v5;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xd0]
    void* v7;  // [sp-0xc8]
    char v8[4];  // [sp-0xc0]
    unsigned long long v9;  // [sp-0xb8]
    char v10;  // [sp-0xb0]
    void* v11;  // [sp-0xa8]
    void* v12;  // [sp-0x98]
    unsigned short v13;  // [sp-0x88]
    char v14;  // [sp-0x86]
    unsigned long v15;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x78]
    unsigned long long v17;  // [sp-0x70]
    unsigned long long v18;  // [sp-0x68]
    void* v19;  // [sp-0x60]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x40]
    char v23[4];  // r15
    unsigned long v24;  // rdx
    unsigned long long v25;  // rax
    char v26;  // r12b
    void* v27;  // r14
    unsigned int v28;  // ecx
    unsigned int v29;  // esi
    unsigned int v30;  // edx
    unsigned long v31;  // r12
    unsigned long long v32;  // r12
    unsigned long long v33;  // r13
    unsigned long long v34;  // r14
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbp

    v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h7e7b5815c2471e54(a1, a2);
    if (!v24)
    {
        v26 = 0;
        v27 = 0;
        goto LABEL_4a56ab;
    }
    v25 = v23[0];
    if ((char)v25 >= 0)
    {
LABEL_4a565f:
        if (!((unsigned int)v25 == 43))
            goto LABEL_4a5664;
LABEL_4a5691:
        if (v27 == 1 || v23[1] > 191)
        {
            v23 = &v23[1];
            v27 -= 1;
            v26 = v31 | -0x100 | 1;
            goto LABEL_4a56ab;
        }
    }
    else
    {
        v28 = (unsigned int)v25 & 31;
        v29 = v23[1] & 63;
        if ((v25 & 255) <= 223)
        {
            v25 = v28 * 64 | v29;
            goto LABEL_4a565f;
        }
        v30 = v23[2] & 63 | v29 * 64;
        if ((v25 & 255) >= 240)
        {
            v25 = v23[3] & 63 | v30 * 64 | (v28 & 7) * 0x40000;
            if ((unsigned int)v25 == 43)
                goto LABEL_4a5691;
        }
        else
        {
            v25 = v30 | v28 * 0x1000;
            if ((unsigned int)v25 == 43)
                goto LABEL_4a5691;
        }
LABEL_4a5664:
        if ((unsigned int)v25 != 45)
        {
LABEL_4a5680:
            v26 = 0;
LABEL_4a56ab:
            v13 = 0;
            v14 = 0;
            v11 = 0;
            v12 = 0;
            uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v1, &v11, v23, v27);
            if (*((int *)&v1) != 3)
            {
                v32 = *((long long *)&v2);
                v33 = *((long long *)&v3);
                if (!v27)
                    goto LABEL_4a5795;
            }
            else
            {
                if (!*((long long *)&v4))
                {
                    v35 = *((long long *)&v3);
                    if (v35)
                    {
                        if (!v26)
                        {
                            a0[1] = 0;
                            a0[2] = v35;
                        }
                        else
                        {
                            a0[1] = 1;
                            a0[2] = v35;
                        }
                    }
                    else
                    {
                        if (v26)
                            a0[1] = 2;
                        else
                            a0[1] = 3;
                    }
                    a0[0] = 3;
                    return v35;
                }
                v7 = 0;
                *(&v8) = v23;
                v9 = v27;
                v10 = 1;
                v5 = &v7;
                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v15 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
                v16 = 2;
                v19 = 0;
                v17 = &v5;
                v18 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v20, &v15);
                v32 = *((long long *)&v20);
                v33 = *((long long *)&v21);
                if (!v27)
                {
LABEL_4a5795:
                    v36 = 1;
                    goto LABEL_4a57df;
                }
            }
            if (v34 < 0)
            {
                v0 = 0;
            }
            else
            {
                v0 = 1;
                v36 = __rust_alloc(v27, 1);
                if (v36)
                {
LABEL_4a57df:
                    v35 = memcpy(v36, v23, v27);
                    a0[0] = 1;
                    a0[1] = v27;
                    a0[2] = v36;
                    a0[3] = v27;
                    if (v32)
                    {
                        v35 = __rust_dealloc(v33);
                        return v35;
                    }
                    return v35;
                }
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else if (v27 == 1 || v23[1] >= 192)
        {
            v23 = &v23[1];
            v27 -= 1;
            goto LABEL_4a5680;
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
}
