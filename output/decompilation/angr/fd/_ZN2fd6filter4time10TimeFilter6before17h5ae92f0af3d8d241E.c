long long fd::filter::time::TimeFilter::before(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned int v3;  // edx

    v1 = a1.from_str(a2);
    v2 = 2;
    if (v3 != 0x3b9aca00)
    {
        a0->field_8 = v1;
        a0->field_10 = v3;
        v2 = 0;
    }
    a0->field_0 = v2;
    return v1;
}
