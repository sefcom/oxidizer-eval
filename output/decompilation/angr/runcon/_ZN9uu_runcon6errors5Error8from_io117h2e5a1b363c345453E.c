long long uu_runcon::errors::Error::from_io1(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x40]
    int v1;  // [bp-0x38], Other Possible Types: char
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax

    v0 = a5;
    v1.into(a3, a4);
    a0->field_18 = a1;
    a0->field_20 = a2;
    *((void*)&(&a0->padding_4)[1]) = v1;
    v4 = *((long long *)&v2);
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
    a0->field_28 = a5;
    a0->field_0 = 16;
    return v4;
}
