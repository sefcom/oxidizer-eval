long long fish::wutil::dir_iter::DirIter::new_impl(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r14
    unsigned long long v6;  // rax

    v4 = fish::wutil::wopendir(a1, a2);
    if (v4)
    {
        v0 = 1;
        v1 = 1;
        v2 = v4;
        v5 = v0.new();
        v5.inc_strong();
        a0->field_8 = 4;
        a0->field_10 = 0;
        a0->field_18 = v5;
        a0->field_20 = 0;
        a0->field_40 = 2;
        a0->field_48 = v5;
        a0->field_50 = a3;
        v6 = 0;
    }
    else
    {
        a0->field_8 = *(__errno_location()) * 0x100000000 | 2;
        v6 = 0x8000000000000000;
    }
    a0->field_0 = v6;
    return v6;
}
