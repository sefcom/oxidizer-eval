long long uu_sort::KeyPosition::new::h62507b899aef70b1(struct_1 *a0, char *a1, char *a2, unsigned long long a3, char a4)
{
    char v0;  // [sp-0xdd]
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xd7]
    char v3;  // [bp-0xd0]
    unsigned long v4;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xc0]
    unsigned long long v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    void* v8;  // [sp-0xa8]
    char *v9;  // [sp-0xa0], Other Possible Types: unsigned long long
    char *v10;  // [sp-0x98]
    char v11;  // [sp-0x90]
    char v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    unsigned long v15;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x58]
    unsigned long long v17;  // [sp-0x50]
    unsigned long long v18;  // [sp-0x48]
    void* v19;  // [sp-0x40]
    char *v22;  // r13
    unsigned long long v23;  // rdx
    char *v24;  // rsi
    unsigned long long v25;  // rax
    char *v26;  // rcx
    char *v27;  // rcx
    char *v29;  // rbp
    char *v30;  // rbp
    void* v31;  // rbp
    char *v32;  // 4096
    char *v33;  // 4096
    char *v34;  // rbp
    char *v35;  // rbp
    char *v36;  // r14
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    char *v39;  // rdx
    char *v40;  // rdx
    char *v41;  // rcx
    char *v42;  // r14
    char *v43;  // r15
    unsigned long long v44;  // r14
    unsigned long long v45;  // r14
    struct_0 *v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax

    do
    {
        v22 = 0;
        v23 = a2 - v22;
        v24 = a1 + v22;
        if (v23 <= 15)
        {
            if (a2 == v22)
                break;
            v26 = 0;
            while (*((char *)(v24 + v26)) != 46)
            {
                v26 += 1;
                if (v23 == v26)
                    goto LABEL_4c3c7b;
            }
        }
        v25 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(46, v24);
        if (v25 != 1)
        {
            if (!(!v25))
                goto LABEL_4c3ec7;
            break;
        }
        v29 = v27 + v22 + 1;
        v22 += v27;
        if (v22 < a2 && *((char *)(a1 + v22)) == 46)
        {
LABEL_4c3ec7:
            v34 = v30;
            do
            {
                v36 = v35;
                v37 = a2 - v36;
                if (v37 > 15)
                {
                    v38 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(46, a1 + v36);
                    if (v38 == 1)
                        goto LABEL_4c3f24;
                    if (!(!v38))
                        goto LABEL_4c3f63;
                    break;
                }
                if (a2 == v36)
                    break;
                v39 = 0;
                while (*(a1 + v36 + v39) != 46)
                {
                    v39 += 1;
                    if (v37 == v39)
                        goto LABEL_4c3f53;
                }
LABEL_4c3f24:
                v41 = v36 + v40;
                if (v41 < a2 && *((char *)(a1 + v41)) == 46)
                {
LABEL_4c3f63:
                    v32 = v41 - v34;
                    v31 = v34 + a1;
                    goto LABEL_4c3f59;
                }
                v42 = v36 + v40 + 1;
            } while (v42 <= a2);
LABEL_4c3f53:
            v32 = a2 - v34;
            v31 = v34 + a1;
LABEL_4c3f59:
            goto LABEL_4c3c80;
        }
    } while (v29 <= a2);
LABEL_4c3c7b:
    v31 = 0;
LABEL_4c3c80:
    v43 = v32;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v1, a1, v33);
    if (v1)
    {
        v0 = v2;
        v8 = 0;
        v9 = a1;
        v10 = v33;
        v11 = 1;
        v4 = &v8;
        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v6 = &v0;
        v7 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
        v15 = &g_592a88;
        v16 = 2;
        v19 = 0;
        v17 = &v4;
        v18 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v15);
        v45 = *((long long *)&v14);
        *((int128_t *)&a0->field_8) = *((int128_t *)&v12);
        *((unsigned long long *)&a0->field_18) = v45;
        a0->field_0 = 1;
        return 1;
    }
    v44 = *((long long *)&v3);
    if (!v44)
    {
        v46 = __rust_alloc(24, 1);
        if (v46)
        {
            v46->field_0 = 43108423766924852320542625907104639334;
            v46->field_10 = 3467883185200983918;
            a0->field_8 = 24;
            *((struct_0 **)&a0->padding_10[0]) = v46;
            *((long long *)&a0->field_18) = 24;
            a0->field_0 = 1;
            return 1;
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    else
    {
        if (v31)
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v1, v31, v43);
            if (!v1)
            {
                a3 = *((long long *)&v3);
                a0->field_8 = v44;
                *((unsigned long long *)&a0->padding_10[0]) = a3;
                a0->field_18 = a4;
                a0->field_0 = 0;
                return 0;
            }
            v0 = v2;
            v8 = 0;
            v9 = v31;
            v10 = v43;
            v11 = 1;
            v4 = &v8;
            v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v6 = &v0;
            v7 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v15 = &g_592aa8;
            v16 = 2;
            v19 = 0;
            v17 = &v4;
            v18 = 2;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v15);
            v47 = *((long long *)&v12);
            a3 = *((long long *)&v13);
            if (v47 != 0x8000000000000000)
            {
                v45 = *((long long *)&v14);
                a0->field_8 = v47;
                *((unsigned long long *)&a0->padding_10[0]) = a3;
                *((unsigned long long *)&a0->field_18) = v45;
                a0->field_0 = 1;
                return 1;
            }
        }
        a0->field_8 = v44;
        *((unsigned long long *)&a0->padding_10[0]) = a3;
        a0->field_18 = a4;
        v48 = 0;
        a0->field_0 = v48;
        return v48;
    }
}
