long long fish::env::var::is_read_only(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = a0.for_name(a1);
    if (!v3)
        return 0;
    return v3->field_10 & 1;
}
