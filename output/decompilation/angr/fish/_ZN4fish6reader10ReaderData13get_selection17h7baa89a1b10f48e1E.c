long long fish::reader::ReaderData::get_selection(unsigned long long a0[3], struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v0 = v2;
    if ((a1->field_490 & 1))
    {
        v3 = a1->field_4a0.min(a1->field_30);
        v4 = a1->field_4a8.min(a1->field_30);
        if (v3 == v4)
            goto LABEL_1401861;
        a0[1] = v3;
        a0[2] = v4;
        v5 = 1;
    }
    else
    {
LABEL_1401861:
        v5 = 0;
    }
    a0[0] = v5;
    return v5;
}
