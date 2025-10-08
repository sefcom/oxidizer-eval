long long uu_head::take::TakeAllLinesBuffer::fill_buffer(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    if (((char)a1.fill_buffer(a2) & 1))
    {
        a0[1] = v5;
        v6 = 1;
    }
    else
    {
        v7 = a1.remaining_buffer();
        v0 = v7;
        v1 = v7;
        v2 = v8 + v7;
        a1->field_20 = (unsigned long long)v7.count(v8 + v7, &v3);
        v9 = a1.remaining_buffer();
        if (v8 && *((char *)(v9 + v8 - 1)) != a3)
            a1->field_28 = 1;
        v10 = a1->field_20;
        a0[1] = v5;
        a0[2] = v10;
        v6 = 0;
    }
    a0[0] = v6;
    return v6;
}
