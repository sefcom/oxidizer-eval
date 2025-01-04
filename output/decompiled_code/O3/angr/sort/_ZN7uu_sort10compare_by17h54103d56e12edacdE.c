int uu_sort::compare_by::h54103d56e12edacd()
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
    struct_1 *v25;  // rdx
    unsigned long long v26[3];  // rdi
    unsigned long long v27;  // rdi
    unsigned long long v28;  // r9
    unsigned long long v29[3];  // rsi
    unsigned long long v30;  // rax
    unsigned long long v31[9];  // r8
    unsigned long long v32;  // rsi
    unsigned long long v33;  // r9
    unsigned long long v34[9];  // rcx
    struct_0 *v35;  // rax
    struct_0 *v36;  // rbx
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rbx
    unsigned long v42;  // rbx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax

    v22 = v25->field_8;
    v23 = v25->field_10 * 56 + v22;
    v27 = v26[2];
    v28 = v25->field_58;
    v30 = v29[2];
    v20 = v28 * v30;
    v21 = v27 * v28;
    v19 = v31[1];
    v11 = v31[2];
    v32 = v25->field_48;
    v33 = v25->field_50;
    v17 = v27 * v33;
    v16 = v30 * v33;
    v4 = v31[8];
    v10 = v32 * v27;
    v9 = v30 * v32;
    v15 = v31[7];
    v1 = v31[5];
    v7 = v31[4];
    v18 = v34[1];
    v12 = v34[2];
    v5 = v34[8];
    v14 = v34[7];
    v2 = v34[5];
    v6 = v34[4];
    v0 = v25->field_87;
    v13 = &v25->padding_88;
    v3 = 0;
    v8 = 0;
    v35 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v22);
    if (!v35)
    {
        if (!(v25->field_98 != 5 && !v25->field_83 && !v25->field_84))
            return;
        v39 = v29[1];
        v40 = v26[1];
        if (v40 < v39)
            v42 = v40;
        else
            v42 = v39;
        v44 = memcmp(v26[0], v29[0], v42);
        if ((unsigned int)v44)
            v45 = v44;
        else
            v45 = v40 - v39;
    }
    v36 = v35;
    if (!v35->field_37)
    {
        goto *((int *)(4385600 + *((char *)(vvar_78{reg 40} + 53)) * 4)) + 4385600;
    }
    else
    {
        if (v21 >= v12)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        if (v20 >= v11)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        goto *((int *)(4385600 + *((char *)(vvar_78{reg 40} + 53)) * 4)) + 4385600;
    }
}
