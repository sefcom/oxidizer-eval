long long just::subcommand::Subcommand::list(struct_0 *a0, unsigned long long a1, unsigned long long a2[86], unsigned long long a3[3])
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long
    char v1;  // [bp-0x40]
    unsigned long long v3[86];  // rax
    void* v4;  // rbp
    unsigned long long v5;  // rax

    v3 = a2;
    if (a3[2])
    {
        v4 = 0;
        do
        {
            v3 = v3[84].get(v3[85], *((long long *)(8 + a3[1] + (char *)v4)), *((long long *)(16 + a3[1] + (char *)v4)));
            if (!v3)
            {
                v0.spec_to_string(a3);
                a0->field_10 = *((int128_t *)&v1);
                a0->field_0 = 53;
                a0->field_8 = v0;
                return v0;
            }
            v4 += 24;
        } while (a3[2] * 24 != v4);
    }
    v5 = a1.list_module(v3, 0);
    a0->field_0 = 56;
    return v5;
}
