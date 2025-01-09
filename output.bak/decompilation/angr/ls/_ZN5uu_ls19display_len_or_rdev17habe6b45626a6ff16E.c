long long uu_ls::display_len_or_rdev::habe6b45626a6ff16(struct_0 *a0, struct_1 *a1, unsigned long a2, unsigned int a3)
{
    unsigned int v0;  // [sp-0x40]
    unsigned int v1;  // [sp-0x3c]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x10]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    if ((0xb000 & a1->field_38 | 0x4000) == 0x6000)
    {
        v7 = a1->field_48;
        v0 = (unsigned int)(v7 >> 32) & -0x1000 | (unsigned int)((v7 & 4294967295 & 4294967295) >> 8) & 4095;
        v1 = (unsigned int)(v7 >> 12) & -0x100 | (unsigned int)v7;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(&v2, &v0);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(&v4, &v1);
        a0->field_10 = *((long long *)&v3);
        a0->field_0 = *((int128_t *)&v2);
        *((int128_t *)&a0->field_18) = *((int128_t *)&v4);
        v9 = *((long long *)&v5);
        a0->field_28 = v9;
        return v9;
    }
    else if (!a2)
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_6129a0); /* do not return */
    }
    else
    {
        v8 = a1->field_50;
        if ((v8 | a2) >> 32)
        {
            v10 = (unsigned long long)((0 CONCAT v8) % a2) CONCAT (unsigned long long)((0 CONCAT v8) / a2);
            v11 = ((unsigned long long)((0 CONCAT v8) % a2) CONCAT (unsigned long long)((0 CONCAT v8) / a2)) >> 64;
        }
        else
        {
            v10 = ((unsigned int)((0 CONCAT (unsigned int)v8) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v8) / (a2 & 4294967295))) & 4294967295;
            v11 = ((unsigned int)((0 CONCAT (unsigned int)v8) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v8) / (a2 & 4294967295))) >> 32 & 4294967295;
        }
        uu_ls::display_size::hba9b1cbdd7c6b199(a0, v10 - -1 - (v11 < 1), a3);
        a0->field_18 = 0x8000000000000000;
        return 0x8000000000000000;
    }
}
