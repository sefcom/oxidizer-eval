long long uu_cp::copy_fifo(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0xe4]
    int v1;  // [bp-0xe0], Other Possible Types: char
    int v2;  // [bp-0xd0]
    int v3;  // [bp-0xc0]
    char v4;  // [bp-0xb0]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v0 = a4;
    std::fs::metadata(&v1, a1, a2);
    ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v1);
    if (*((int *)&v1) != 2)
    {
        v1.verify(a3, a1, a2, v0);
        if (*((long long *)&v1) != 9223372036854775820)
        {
            v8 = *((long long *)&v4);
            a0->field_30 = v8;
            *((void*)&a0->field_20) = v3;
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v1;
            return v8;
        }
        v6 = std::fs::remove_file(a1, a2);
        if (v6)
        {
            *((unsigned long long *)&a0->field_0) = 9223372036854775809;
            *((unsigned long long *)&a0->padding_1[7]) = v6;
            return v6;
        }
    }
    v7 = uucore::features::fs::make_fifo(a1, a2);
    if (!v7)
    {
        *((unsigned long long *)&a0->field_0) = 9223372036854775820;
        return 9223372036854775820;
    }
    return (unsigned long long)uu_cp::copy_fifo::{{closure}}(a0, a1, a2, v7);
}
