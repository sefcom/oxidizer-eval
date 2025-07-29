long long uu_cp::platform::linux::check_sparse_detection(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xc4]
    char v1;  // [bp-0xc0], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0xbc]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x60]
    unsigned long long v7;  // rax

    v1.open(a1, a2);
    if ((v1 & 1))
    {
        v7 = *((long long *)&v3);
        a0->field_8 = v7;
        a0->field_0 = 1;
        return v7;
    }
    v0 = v2;
    v1.metadata(&v0);
    if (v1 == 2)
    {
        a0->field_8 = *((long long *)&v3);
        a0->field_0 = 1;
    }
    else if (*((long long *)&v5) < *((long long *)&v4) >> 9)
    {
        a0->padding_1[0] = 1;
        a0->field_0 = 0;
    }
    else
    {
        *((unsigned short *)&a0->field_0) = 0;
    }
    return ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
}
