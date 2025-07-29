long long uu_df::table::Table::get_alignments(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x168]
    void* v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v7;  // rdx
    char *v8;  // rax

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = a1.into_iter();
    v5 = v7;
    while (true)
    {
        v8 = v4.next();
        if (!v8)
            break;
        v0 = 990;
        v1.push((*((char *)&v0 + ((*(v8) & 31) >> 3)) >> (*(v8) & 31 & 7) & 1));
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v1);
    return 0;
}
