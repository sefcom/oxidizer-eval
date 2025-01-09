long long uu_du::StatPrinter::convert_size::he529e362fc7c1e00(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x10], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x8], Other Possible Types: unsigned long long
    unsigned long long v3;  // rax
    char *v4;  // rsi
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned int v9;  // eax

    v0 = a2;
    v3 = a1->field_20;
    if (!v3)
    {
        return uucore::features::format::human::human_readable::h9f8a5d008cf29026(a0, a2, 2);
    }
    else if ((unsigned int)v3 == 1)
    {
        return uucore::features::format::human::human_readable::h9f8a5d008cf29026(a0, a2, 1);
    }
    else
    {
        if (a1->field_49)
        {
            v4 = &v0;
        }
        else
        {
            v5 = a1->field_28;
            if (!v5)
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_584618); /* do not return */
            if ((a2 | v5) >> 32)
            {
                v6 = a2;
                v7 = (unsigned long long)((0 CONCAT v6) % v5) CONCAT (unsigned long long)((0 CONCAT v6) / v5);
                v8 = ((unsigned long long)((0 CONCAT v6) % v5) CONCAT (unsigned long long)((0 CONCAT v6) / v5)) >> 64;
            }
            else
            {
                v9 = a2;
                v7 = ((unsigned int)((0 CONCAT v9) % (v5 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v9) / (v5 & 4294967295))) & 4294967295;
                v8 = ((unsigned int)((0 CONCAT v9) % (v5 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v9) / (v5 & 4294967295))) >> 32 & 4294967295;
            }
            v1 = v7 - -1 - (v8 < 1);
            v4 = &v1;
        }
        return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h2f753f516b2c872e(a0, v4);
    }
}
