long long uu_head::parse::parse_num::hdab79be3ceb563a8(struct_0 *a0, void* a1, unsigned long a2)
{
    int v0;  // [sp-0x108]
    char v1;  // [bp-0xf8]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    unsigned long v5;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xd0]
    void* v7;  // [sp-0xc8]
    unsigned long long v8;  // [sp-0xc0]
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
    char v23[4];  // rax
    unsigned long v24;  // rdx
    unsigned long long v25;  // rcx
    unsigned int v26;  // edx
    unsigned int v27;  // edi
    unsigned long long v28;  // r14
    unsigned int v29;  // esi
    unsigned long long v30;  // rcx
    char v31;  // bpl
    unsigned long long v32;  // r14
    unsigned long long v34;  // rdx
    char v35[4];  // rdx
    unsigned long long v36;  // rdi
    unsigned long long v37;  // rdx
    unsigned int v38;  // esi
    unsigned int v39;  // esi
    unsigned int v40;  // r9d
    unsigned int v41;  // r8d
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rcx
    unsigned long long v45;  // r14
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx

    v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h6428d9881190dc85(a1, a2);
    if (v24)
    {
        v25 = v23[0];
        if ((char)v25 >= 0)
        {
LABEL_48d538:
        }
        else
        {
            v26 = (unsigned int)v25 & 31;
            v27 = v23[1] & 63;
            if ((v25 & 255) <= 223)
            {
                v25 = v26 * 64 | v27;
                goto LABEL_48d538;
            }
            v29 = v23[2] & 63 | v27 * 64;
            if ((v25 & 255) < 240)
            {
                v25 = v29 | v26 * 0x1000;
            }
            else
            {
                v25 = v23[3] & 63 | v29 * 64 | (v26 & 7) * 0x40000;
                if ((unsigned int)v25 != 43 && (unsigned int)v25 != 45)
                {
                    v31 = 0;
                    goto LABEL_48d563;
                }
            }
        }
        if (v24 != 1 && v23[1] < 192)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        v23 = &v23[1];
        v32 = v24 - 1;
        v31 = vvar_125{reg 56} | -0x100 | (unsigned int)v30 == 45;
LABEL_48d563:
        do
        {
            v34 = 0;
            if (v34 == v32)
                break;
            v35 = &v23[v34];
            v36 = v35[0];
            if ((char)v36 >= 0)
            {
                v37 = &v35[1];
                v38 = v36;
            }
            else
            {
                v39 = (unsigned int)v36 & 31;
                v40 = v35[1] & 63;
                if ((v36 & 255) <= 223)
                {
                    v37 = &v35[2];
                    v38 = v39 * 64 | v40;
                }
                else
                {
                    v41 = v35[2] & 63 | v40 * 64;
                    if ((v36 & 255) >= 240)
                    {
                        v37 = v35 + 1;
                        v38 = (v39 & 7) * 0x40000 | v35[3] & 63 | (unsigned int)(v41 * 64);
                    }
                    else
                    {
                        v37 = &v35[3];
                        v38 = v39 * 0x1000 | v41;
                    }
                }
            }
            v42 = v37 - (char *)v23;
        } while (v38 == 48);
        v44 = v43;
        v45 = v32 - v44;
        if (v32 == v44)
        {
            a0->field_8 = 0;
            a0->field_10 = v31;
            a0->field_0 = 3;
            return a0;
        }
        v46 = &v23[v44];
        v13 = 0;
        v14 = 0;
        v11 = 0;
        v12 = 0;
        uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v1, &v11, v46, v45);
        v47 = *((long long *)&v1);
        if (v47 != 3)
        {
            v48 = *((long long *)&v2);
            *((int128_t *)&v0) = *((int128_t *)&v3);
        }
        else
        {
            if (*((long long *)&v4))
            {
                v7 = 0;
                v8 = v46;
                v9 = v45;
                v10 = 1;
                v5 = &v7;
                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v15 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
                v16 = 2;
                v19 = 0;
                v17 = &v5;
                v18 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v20, &v15);
                v48 = *((long long *)&v20);
                *((int128_t *)&v0) = *((int128_t *)&v21);
                v47 = 2;
            }
            else
            {
                a0->field_8 = *((long long *)&v3);
                a0->field_10 = v31;
                a0->field_0 = 3;
                return a0;
            }
        }
        a0->field_0 = v47;
        a0->field_8 = v48;
        *((void*)&a0->field_10) = v0;
        return a0;
    }
    else if (!a2)
    {
        memcpy(0x1, a1, a2);
        a0->field_0 = 1;
        a0->field_8 = a2;
        *((long long *)&a0->field_10) = 1;
        *((unsigned long *)((char *)&a0[1].field_0 + 7)) = a2;
        return a0;
    }
    else
    {
        if (a2 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v28 = __rust_alloc(a2, 1);
        if (v28)
        {
            memcpy(v28, a1, a2);
            a0->field_0 = 1;
            a0->field_8 = a2;
            *((unsigned long long *)&a0->field_10) = v28;
            *((unsigned long *)((char *)&a0[1].field_0 + 7)) = a2;
            return a0;
        }
    }
}
