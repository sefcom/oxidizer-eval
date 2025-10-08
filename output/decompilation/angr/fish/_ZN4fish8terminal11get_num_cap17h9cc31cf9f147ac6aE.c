long long fish::terminal::get_num_cap(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = a0.raw(a1);
    if (!v3)
    {
        return 0;
    }
    else if (v3->field_0 == 9223372036854775809)
    {
        return ~(v3->field_8) >> 63;
    }
    else
    {
        return 0;
    }
}
