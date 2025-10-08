long long just::function::trim_start_match(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v3 = a4.strip_prefix_of(a5, a2, a3);
    if (!v3)
    {
        v4 = a3;
        if (!v3)
            goto LABEL_66c906;
LABEL_66c905:
        v6 = v3;
    }
    else
    {
        v4 = v5;
        if (v3)
            goto LABEL_66c905;
LABEL_66c906:
        v6 = a2;
    }
    v0.to_vec(v6, v4);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_0)[1]) = v0;
    a0->field_0 = 0;
    return a0;
}
