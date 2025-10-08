long long uu_od::parse_inputs::parse_inputs_traditional(void* a0, unsigned long long a1[6], unsigned long a2)
{
    int v0;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v1[6];  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x88]
    char *v5;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x78]
    void* v7;  // [bp-0x70]
    char v8;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long long v9[6];  // [bp-0x58], Other Possible Types: unsigned long long
    char v10;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long long v11[6];  // [bp-0x48]
    char v12;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long long v13[6];  // [bp-0x38]
    char v14;  // [bp-0x30], Other Possible Types: unsigned long
    char v15;  // [bp-0x28]
    struct_0 *v17;  // rax
    struct_0 *v18;  // r14
    int v19;  // xmm0
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // r12
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26[6];  // 4096
    unsigned long long v27;  // rax

    switch (a2)
    {
    case 0:
        v17 = 8.alloc_impl(24);
        if (!v17)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v18 = v17;
        v3.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
        v2 = v5;
        v19 = *((int128_t *)&v3);
        v0 = v19;
        v18->field_10 = v2;
        *((void*)&v18->field_0) = v19;
        *((unsigned long long *)a0) = 1;
        *((struct_0 **)&a0[8]) = v18;
        *((unsigned long long *)&a0[16]) = 1;
        *((unsigned long long *)&a0[32]) = 2;
        return v5;
    case 1:
        uu_od::parse_inputs::parse_offset_operand(&(char)v0, a1[0], a1[1]);
        if (v0)
        {
            v3.collect(a1, &a1[2]);
            v25 = 2;
            v26 = a1;
        }
        else
        {
            v3.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            v25 = 0;
            v26[0] = v1;
        }
        *((unsigned long long *)&a0[16]) = v5;
        *((int128_t *)a0) = *((int128_t *)&v3);
        *((unsigned long long *[6])&a0[24]) = v26;
        *((unsigned long long *)&a0[32]) = v25;
        return v25;
    case 2:
        uu_od::parse_inputs::parse_offset_operand(&v10, a1[0], a1[1]);
        uu_od::parse_inputs::parse_offset_operand(&v8, a1[2], a1[3]);
        if (!v10 && !v8)
        {
            v20 = a0.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
            *((unsigned long long *[6])&a0[24]) = v11;
            *((unsigned long long *)&a0[32]) = 1;
            *((unsigned long long *)&a0[40]) = v9;
            return v20;
        }
        else if (!v8)
        {
            v21 = a0.to_vec(a1[0], a1[1]);
            *((unsigned long long *[6])&a0[24]) = v9;
            *((unsigned long long *)&a0[32]) = 0;
            return v21;
        }
LABEL_46a9ad:
        v0 = &a1[2];
        v1 = <&T as core::fmt::Display>::fmt;
        v22 = &g_502708;
        break;
    case 3:
        uu_od::parse_inputs::parse_offset_operand(&v12, a1[2], a1[3]);
        uu_od::parse_inputs::parse_offset_operand(&v14, a1[4], a1[5]);
        if (v12)
            goto LABEL_46a9ad;
        if (!v14)
        {
            v23 = *((long long *)&v15);
            v24 = a0.to_vec(a1[0], a1[1]);
            *((unsigned long long *[6])&a0[24]) = v13;
            *((unsigned long long *)&a0[32]) = 1;
            *((unsigned long long *)&a0[40]) = v23;
            return v24;
        }
        v0 = &a1[4];
        v1 = <&T as core::fmt::Display>::fmt;
        v22 = &g_502718;
        break;
    default:
        v0 = a1 + 1;
        v1 = <&T as core::fmt::Display>::fmt;
        v22 = &g_502728;
        break;
    }
    v3 = v22;
    v4 = 1;
    v7 = 0;
    v5 = &v0;
    v6 = 1;
    v27 = a0.map_or_else(&v3);
    *((unsigned long long *)&a0[32]) = 3;
    return v27;
}
