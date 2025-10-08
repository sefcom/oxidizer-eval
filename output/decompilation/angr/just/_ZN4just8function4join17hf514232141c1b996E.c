long long just::function::join(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long a7)
{
    char v0;  // [bp-0x50]
    int v1;  // [bp-0x38], Other Possible Types: char
    char v2;  // [bp-0x28]
    unsigned long long v3;  // r12
    unsigned long long v4;  // r12
    unsigned long v5;  // r12

    v0.join(a2, a3, a4, a5);
    if (a7)
    {
        v3 = a7 * 24;
        do
        {
            v4 = v3;
            v0.push(a6);
            a6 += 24;
            v5 = v4 - 24;
            v3 = v5;
        } while (v4 != 24);
    }
    v1.spec_to_string(&v0);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v2);
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 0;
    core::ptr::drop_in_place<camino::Utf8PathBuf>(&v0);
    return a0;
}
