long long uu_cut::list_to_ranges(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    int v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long long v6;  // rax

    if (!a3)
    {
        a0.from_list(a1, a2);
        return a0;
    }
    v2.from_list(a1, a2);
    if ((v2 & 1))
    {
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v4);
        *((void*)&(&a0->field_0)[1]) = v3;
        v6 = 1;
    }
    else
    {
        v1 = *((long long *)&v4);
        memcpy(&v0, &v3, 16);
        uu_cut::list_to_ranges::{{closure}}(&(&a0->field_0)[1], &v0);
        v6 = 0;
    }
    a0->field_0 = v6;
    return a0;
}
