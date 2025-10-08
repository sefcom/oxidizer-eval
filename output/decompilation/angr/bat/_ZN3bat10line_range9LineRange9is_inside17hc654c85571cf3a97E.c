long long bat::line_range::LineRange::is_inside(struct_0 *a0, unsigned long a1, char a2, unsigned long a3)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // r8
    void* v3;  // r10
    void* v4;  // rcx

    v1 = a0->field_8;
    v2 = a0->field_18;
    if (a0->field_0 == 1)
    {
        v3 = a3 - v1;
        if (v1 > a3)
            v3 = 0;
        if (!(a0->field_10 & 1))
            return (v1 & 0xffffffffffffff00 | v3 <= a1 & a2) & 0xffffffffffffff00 | v3 <= a1 & a2 & a1 <= v2;
        if (!(v3 <= a1 & a2))
            return 0;
    }
    else if (!(a0->field_10 & 1))
    {
        return v1 & 0xffffffffffffff00 | a1 <= v2 & v1 <= a1;
    }
    else if (!(a2 & 1))
    {
        return v1 & 0xffffffffffffff00 | v1 <= a1;
    }
    else if (v1 > a1)
    {
        return 0;
    }
    v4 = a3 - v2;
    if (v2 > a3)
        v4 = 0;
    return v4 & 0xffffffffffffff00 | a1 <= v4;
}
