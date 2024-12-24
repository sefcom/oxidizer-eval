long long uu_du::StatPrinter::convert_size::h6461a3964a5e9338(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x10], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x8], Other Possible Types: unsigned long long
    unsigned long long v3;  // rax
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned int v9;  // eax

    v0 = a2;
    v3 = a1->field_20;
    if (!v3)
    {
        return uucore::features::format::human::human_readable::hc1ecfbaa5fa9a3eb(a0, a2, 2);
    }
    else if ((unsigned int)v3 == 1)
    {
        return uucore::features::format::human::human_readable::hc1ecfbaa5fa9a3eb(a0, a2, 1);
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
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
            if ((a2 | v5) >> 32)
            {
                v6 = a2;
                v7 = (0 CONCAT v6) /m v5;
                v8 = (0 CONCAT v6) /m v5 >> 64;
            }
            else
            {
                v9 = a2;
                v7 = (0 CONCAT v9) /m (unsigned int)v5 & 4294967295;
                v8 = (0 CONCAT v9) /m (unsigned int)v5 >> 32 & 4294967295;
            }
            v1 = v7 - -1 - (v8 < 1);
            v4 = &v1;
        }
        return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h23ccdbf317831e76(a0, v4);
    }
}
