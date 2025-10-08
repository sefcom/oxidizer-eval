long long just::justfile::Justfile::find_suggestion(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xe0]
    unsigned long v1;  // [bp-0xd0]
    int v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xb8]
    char v4;  // [bp-0xb0]

    v4.map(a3, a1, a2);
    v0.reduce(&v4);
    if (v1)
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
        *((void*)&(&a0->field_0)[1]) = v2;
    }
    a0->field_0 = v1;
    return v1;
}
