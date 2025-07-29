long long uu_sort::make_sort_mode_arg(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, struct_0 *a4)
{
    int v0;  // [bp-0x7b8]
    unsigned long v1;  // [bp-0x7a8]
    char v2;  // [bp-0x530], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x528]
    char v4;  // [bp-0x2b0]
    unsigned long long v6[2];  // rax

    v4.new(a1, a2);
    v2.short(&v4, a3);
    v4.long(&v2, a1, a2);
    v1 = a4->field_10;
    *((uint128_t *)&v0) = a4->field_0;
    v2.help(&v4, &v0);
    v0.action(&v2, 2);
    v2 = &g_670828;
    v3 = &g_670888;
    if (v2.next())
    {
        do
        {
            if (!(char)v6[0].equal(v6[1], a1, a2))
            {
                memcpy(&v4, &v0, 640);
                v0.conflicts_with(&v4, v6);
            }
            v6 = v2.next();
        } while (v6);
    }
    return memcpy(a0, &v0, 640);
}
