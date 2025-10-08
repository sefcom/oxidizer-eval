long long bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v4 = core::str::converts::from_utf8(&v0, a2, a3);
    if (*((int *)&v0) != 1)
    {
        v4 = a1.strip_suffix(v1, *((long long *)&v2));
        if (v4)
            return (unsigned long long)bat::syntax_mapping::SyntaxMapping::get_syntax_for::{{closure}}(a0, a4, v4, v5);
    }
    a0->field_8 = 3;
    a0->field_0 = 13;
    return v4;
}
