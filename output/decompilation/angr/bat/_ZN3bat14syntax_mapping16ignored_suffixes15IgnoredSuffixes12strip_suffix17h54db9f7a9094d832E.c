long long bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1[2];  // r13
    unsigned long long v2;  // rax

    if (!a0->field_10)
        return 0;
    v1 = a0->field_8;
    while (true)
    {
        v2 = v1[0].strip_suffix_of(v1[1], a1, a2);
        if (v2)
            return v2;
        v1 += 1;
        if (v1 == &a0->field_8[a0->field_10])
            return 0;
    }
}
