long long uu_head::take::TakeAllLinesBuffer::fill_buffer(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v5 = a1.fill_buffer(a2);
    if (v5)
    {
        a0[1] = v6;
        v7 = v5;
    }
    else
    {
        v8 = a1.remaining_buffer();
        v0 = v8;
        v1 = v8;
        v2 = v9 + v8;
        a1->field_20 = (unsigned long long)v8.count(v9 + v8, &v3);
        v10 = a1.remaining_buffer();
        if (v9 && *((char *)(v10 + v9 - 1)) != a3)
            a1->field_28 = 1;
        v11 = a1->field_20;
        a0[1] = v6;
        a0[2] = v11;
        v7 = v11;
    }
    a0[0] = v5;
    return v7;
}
