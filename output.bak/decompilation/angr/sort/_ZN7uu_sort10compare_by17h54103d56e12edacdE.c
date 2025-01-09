long long uu_sort::compare_by::h54103d56e12edacd(unsigned long long a0[3], unsigned long long a1[3], struct_1 *a2, unsigned long long a3[9], unsigned long long a4[9])
{
    char v0;  // [sp-0x131]
    unsigned long long v1;  // [sp-0x130]
    unsigned long long v2;  // [sp-0x128]
    void* v3;  // [sp-0x120]
    unsigned long long v4;  // [sp-0x100]
    unsigned long long v5;  // [sp-0xf8]
    unsigned long long v6;  // [sp-0xf0]
    unsigned long long v7;  // [sp-0xe8]
    void* v8;  // [sp-0xe0]
    unsigned long long v9;  // [sp-0xd8]
    unsigned long long v10;  // [sp-0xd0]
    unsigned long long v11;  // [sp-0xb8]
    unsigned long long v12;  // [sp-0xb0]
    unsigned long long v13;  // [sp-0x88]
    unsigned long long v14;  // [sp-0x80]
    unsigned long long v15;  // [sp-0x78]
    unsigned long long v16;  // [sp-0x70]
    unsigned long long v17;  // [sp-0x68]
    unsigned long long v18;  // [sp-0x60]
    unsigned long long v19;  // [sp-0x58]
    unsigned long long v20;  // [sp-0x50]
    unsigned long long v21;  // [sp-0x48]
    unsigned long v22;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x38]
    unsigned long long v25;  // rdi
    unsigned long long v26;  // r9
    unsigned long long v27;  // rax
    unsigned long long v28;  // rsi
    unsigned long long v29;  // r9
    struct_0 *v30;  // rax
    struct_0 *v31;  // rbx
    unsigned int v32;  // eax
    unsigned long long v33;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rbx
    unsigned long v39;  // rbx
    unsigned long long v40;  // cc_ndep
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax

    v22 = a2->field_8;
    v23 = a2->field_10 * 56 + v22;
    v25 = a0[2];
    v26 = a2->field_58;
    v27 = a1[2];
    v20 = v26 * v27;
    v21 = v25 * v26;
    v19 = a4[1];
    v11 = a4[2];
    v28 = a2->field_48;
    v29 = a2->field_50;
    v17 = v25 * v29;
    v16 = v27 * v29;
    v4 = a4[8];
    v10 = v28 * v25;
    v9 = v27 * v28;
    v15 = a4[7];
    v1 = a4[5];
    v7 = a4[4];
    v18 = a3[1];
    v12 = a3[2];
    v5 = a3[8];
    v14 = a3[7];
    v2 = a3[5];
    v6 = a3[4];
    v0 = a2->field_87;
    v13 = &a2->padding_88;
    v3 = 0;
    v8 = 0;
    v30 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v22);
    if (!v30)
    {
        v32 = 0;
        if (a2->field_98 != 5 && !a2->field_83 && !a2->field_84)
        {
            v36 = a1[1];
            v37 = a0[1];
            if (v37 < v36)
                v39 = v37;
            else
                v39 = v36;
            v41 = memcmp(a0[0], a1[0], v39);
            if ((unsigned int)v41)
                v42 = v41;
            else
                v42 = v37 - v36;
            v32 = ((char)amd64g_calculate_condition(9, 20, v42, 0, v40) ? (-0x100 | v42) & 4294967295 & 4294967295 : 255);
        }
        v43 = (!a2->field_82 ? v32 : -((char)v32));
        return v43;
    }
    v31 = v30;
    if (!v30->field_37)
    {
        goto *((int *)(4385600 + *((char *)(vvar_83{reg 40} + 53)) * 4)) + 4385600;
    }
    else
    {
        if (v21 >= v12)
            core::panicking::panic_bounds_check::h25a5330941572dd1(0 + v21, v12, &g_5ffd18); /* do not return */
        v33 = v20;
        if (v33 >= v11)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v33, v11, &g_5ffd30); /* do not return */
        goto *((int *)(4385600 + *((char *)(vvar_83{reg 40} + 53)) * 4)) + 4385600;
    }
}
