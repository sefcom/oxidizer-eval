long long uu_du::StatPrinter::convert_size(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = a2;
    if (!a1->field_20)
    {
        return uucore::features::format::human::human_readable(a0, a2, 2);
    }
    else if ((unsigned int)a1->field_20 == 1)
    {
        return uucore::features::format::human::human_readable(a0, a2, 1);
    }
    else if (a1->field_61)
    {
        return a0.spec_to_string(&v0);
    }
    else
    {
        v3 = a1->field_28;
        if (!v3)
            core::panicking::panic_const::panic_const_div_by_zero(&g_5e4b98); /* do not return */
        if ((a2 | v3) >> 32)
        {
            v4 = (unsigned long long)((0 CONCAT a2) % v3) CONCAT (unsigned long long)((0 CONCAT a2) / v3);
            v5 = ((unsigned long long)((0 CONCAT a2) % v3) CONCAT (unsigned long long)((0 CONCAT a2) / v3)) >> 64;
        }
        else
        {
            v4 = ((unsigned int)((0 CONCAT (unsigned int)a2) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a2) / (v3 & 4294967295))) & 4294967295;
            v5 = ((unsigned int)((0 CONCAT (unsigned int)a2) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a2) / (v3 & 4294967295))) >> 32;
        }
        v1 = v4 + 1 - (v5 < 1);
        return a0.spec_to_string(&v1);
    }
}
