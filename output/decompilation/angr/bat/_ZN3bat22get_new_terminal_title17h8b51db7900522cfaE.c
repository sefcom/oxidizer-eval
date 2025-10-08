long long bat::get_new_terminal_title(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    struct_0 *v0;  // [bp-0x68]
    int v1;  // [bp-0x60], Other Possible Types: char
    unsigned long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    void* v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8[11];  // rdx
    unsigned long long v9[11];  // rdx
    unsigned long long v10[11];  // rdx
    unsigned long v11;  // rax

    v1.to_vec("bat: LC_ALLPAGERXDG_CACHE_HOMEXDG_CONFIG_HOMESystem Config fileConfig fileCustom assets metadataCustom assets--version", 5);
    v3 = a1;
    v4 = a2 * 160 + a1;
    v5 = 0;
    v7 = v3.next();
    if (v8)
    {
        do
        {
            v10 = v9;
            v11 = &v10[8];
            if ((char)(((0 ^ v10[8]) & (0 ^ -(v10[8]))) >> 63))
                v11 = &v10[5];
            v1.spec_extend(*((long long *)(v11 + 8)), *((long long *)(v11 + 16)) + *((long long *)(v11 + 8)));
            if (v7 < a2 - 1)
                v1.spec_extend(", ,: ", ",: ");
            v7 = v3.next();
            v9 = v8;
        } while (v8);
    }
    v0->field_10 = v2;
    *((void*)&v0->field_0) = v1;
    return v2;
}
