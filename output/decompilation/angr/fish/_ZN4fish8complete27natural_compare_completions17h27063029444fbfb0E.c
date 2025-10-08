long long fish::complete::natural_compare_completions(struct_1 *a0, struct_0 *a1)
{
    unsigned long v1;  // rcx
    unsigned short v2;  // dx
    unsigned long v3;  // rax

    v1 = a1->field_32;
    v2 = a0->field_32 & 32;
    if (((unsigned short)v1 & v2))
    {
        return 0;
    }
    else if (v2)
    {
        return v3 & 0xffffffffffffff00 | 255;
    }
    else if (!((char)v1 & 32))
    {
        return fish::util::wcsfilecmp(a0->field_8, a0->field_10, a1->field_8, a1->field_10);
    }
    else
    {
        return (v3 & 0xffffffffffffff00 | 255) & 0xffffffffffffff00 | 1;
    }
}
