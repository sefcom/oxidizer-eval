long long uu_du::StatPrinter::convert_size(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x1c]
    char *v4;  // rsi
    unsigned long long v5;  // 4096
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v11;  // rax

    if (!a1->field_20)
    {
        return uucore::features::format::human::human_readable(a0, a2, 2);
    }
    else if ((unsigned int)a1->field_20 == 1)
    {
        return uucore::features::format::human::human_readable(a0, a2, 1);
    }
    else
    {
        if (a1->field_49)
        {
            v4 = &v2;
            v5 = a2;
        }
        else
        {
            v6 = a1->field_28;
            if (!v6)
                core::panicking::panic_const::panic_const_div_by_zero(&g_545e48); /* do not return */
            if ((a2 | v6) >> 32)
            {
                v7 = (unsigned long long)((0 CONCAT a2) % v6) CONCAT (unsigned long long)((0 CONCAT a2) / v6);
                v8 = ((unsigned long long)((0 CONCAT a2) % v6) CONCAT (unsigned long long)((0 CONCAT a2) / v6)) >> 64;
            }
            else
            {
                v7 = ((unsigned int)((0 CONCAT (unsigned int)a2) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a2) / (v6 & 4294967295))) & 4294967295;
                v8 = ((unsigned int)((0 CONCAT (unsigned int)a2) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a2) / (v6 & 4294967295))) >> 32;
            }
            v4 = &v2;
            v5 = v7 + 1 - (v8 < 1);
        }
        v0.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v5, v4, 20), a2);
        v11 = *((long long *)&v1);
        a0->field_10 = v11;
        *((void*)&a0->field_0) = v0;
        return v11;
    }
}
