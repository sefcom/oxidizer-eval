long long uu_df::table::Table::get_alignments(struct_0 *a0, char *a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x168]
    void* v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    char *v5;  // r13
    char *v6;  // r13
    char *v7;  // r13

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v5 = 0;
    while (true)
    {
        v6 = v5;
        if (a2 == v6)
            break;
        v7 = v6 + 1;
        v0 = 990;
        v1.push((*((char *)&v0 + ((*((char *)(a1 + v6)) & 31) >> 3)) >> (*((char *)(a1 + v6)) & 31 & 7) & 1));
        v5 = v7;
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v1);
    return 0;
}
