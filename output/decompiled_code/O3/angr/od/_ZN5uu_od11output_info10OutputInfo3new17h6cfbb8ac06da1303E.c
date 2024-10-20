long long uu_od::output_info::OutputInfo::new::h6cfbb8ac06da1303(struct_1 *a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4)
{
    unsigned long v0;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v5;  // [sp-0x30]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rsi
    unsigned long long v9;  // r12
    unsigned long long v10;  // r12
    void* v11;  // rdx
    struct_0 *v12;  // rdi
    unsigned long long v13;  // r9
    unsigned long long v15;  // r9
    unsigned long long v17;  // r9
    unsigned long long v19;  // r9
    unsigned long long *v20;  // rsi
    unsigned long long v22;  // rdi
    struct_2 *v24;  // rdi
    unsigned long long v25;  // 4096
    unsigned long long v26;  // r9
    unsigned long long v27;  // r11
    unsigned long long v28;  // r10
    unsigned long long v30;  // rax

    if (!a3)
    {
        v8 = 1;
        v9 = 1;
    }
    else
    {
        v7 = (unsigned int)a3 & 3;
        if (a3 < 4)
        {
            v10 = 1;
            v11 = 0;
        }
        else
        {
            v12 = a2 + 136;
            v10 = 1;
            v11 = 0;
            do
            {
                v13 = v12->field_0;
                v15 = v12->field_-28;
                v17 = v12->field_-50;
                v19 = v12->field_-78;
                v11 += 4;
                v12 = &v12[1].padding_-70[24];
            } while ((a3 & -4) != v11);
        }
        if (v7)
        {
            v20 = 0;
            do
            {
                v22 = *((long long *)(16 + a2 + 0x28 * v11 + (char *)v20));
            } while ((v20 += 40, ((v7 & 4294967295) << 3 & 4294967295) + (((v7 & 4294967295) << 3 & 4294967295) << 2) != v20));
        }
        v24 = a2 + 24;
        v8 = 1;
        do
        {
            v26 = v25;
            v27 = v24->field_0;
            if (!v27)
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
            v28 = v24->field_-8;
            v30 = v28 * (!(v9 | v27) >> 32 ? (0 CONCAT v9) /m v27 : (0 CONCAT (unsigned int)v9) /m (unsigned int)v27 & 4294967295);
            v24 = &v24[2].field_0;
        } while (v26 != 1);
    }
    v0 = v9;
    v1 = v8;
    v2 = a2;
    v3 = a2 + a3 * 40;
    v4 = &v0;
    v5 = &v1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h323abb1ee4820c60(a0, &v2);
    a0->field_18 = a1;
    a0->field_20 = v1 * (!(a1 | v0) >> 32 ? (0 CONCAT (unsigned int)a1) /m (unsigned int)v0 & 4294967295 & 4294967295 : (0 CONCAT a1) /m v0);
    a0->field_28 = v0;
    a0->field_30 = a4;
    return a0;
}
