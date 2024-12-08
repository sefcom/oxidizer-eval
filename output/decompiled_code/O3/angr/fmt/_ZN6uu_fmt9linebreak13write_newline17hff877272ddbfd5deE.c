long long uu_fmt::linebreak::write_newline::hff877272ddbfd5de(void* a0, unsigned long a1, struct_0 *a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    char *v3;  // r12
    char *v4;  // r12
    void* v5;  // rax

    v0 = v2;
    v3 = a2->field_10;
    if (a2->field_0 - v3 > 1)
    {
        v3[a2->field_8] = 10;
        v4 = v3 + 1;
        a2->field_10 = v4;
    }
    else
    {
        v5 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hfe77b2db296571d1(a2, "\n", 1);
        if (v5)
            return v5;
        v4 = a2->field_10;
    }
    if (a2->field_0 - v4 > a1)
    {
        memcpy(&v4[a2->field_8], a0, a1);
        a2->field_10 = &v4[a1];
        return 0;
    }
    return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hfe77b2db296571d1(a2, a0, a1);
}
