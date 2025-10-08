long long fish::common::escape_string_for_double_quotes(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x4c]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long v5;  // r14
    unsigned long v6;  // r14

    v1.to_vec(a1, a2);
    if (*((long long *)&v3))
    {
        v5 = *((long long *)&v3) - 1;
        do
        {
            v6 = v5;
            v0 = v2.char_at(*((long long *)&v3), v6);
            if (v0.slice_contains("\\", 3))
            {
                v0 = 92;
                v1.insert_slice(v6, &v0, 1);
            }
            v5 = v6 - 1;
        } while ((char)__CFADD__(v6, -1));
    }
    a0->field_10 = *((long long *)&v3);
    a0->field_0 = *((int128_t *)&v1);
    return a0;
}
