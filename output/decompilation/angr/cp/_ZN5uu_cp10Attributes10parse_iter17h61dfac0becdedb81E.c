long long uu_cp::Attributes::parse_iter(unsigned long a0, uint128_t a1[2])
{
    char v0[12];  // [bp-0xc0]
    unsigned int v1;  // [bp-0xb8]
    char v2[12];  // [bp-0xb0]
    unsigned int v3;  // [bp-0xa8]
    struct_0 *v4;  // [bp-0xa0]
    char v5[12];  // [bp-0x94]
    unsigned int v6;  // [bp-0x8c]
    int v7;  // [bp-0x88]
    int v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned int v11;  // [bp-0x58]
    int v12;  // [bp-0x54]
    int v13;  // [bp-0x44]
    char v14;  // [bp-0x34]
    unsigned long long v16;  // rax
    unsigned long long v18;  // rdx

    v1 = 0;
    *((unsigned long long *)&v0[0]) = 0;
    *((uint128_t *)&v8) = a1[1];
    *((uint128_t *)&v7) = a1[0];
    if (v7.next())
    {
        do
        {
            v9.parse_single_string(v16.as_ref(), v18);
            *((unsigned long long *)&v2[0]) = v10;
            v3 = v11;
            if (v9 != 9223372036854775820)
            {
                *((int *)((char *)&v4->field_24 + 4)) = *((int *)&v14);
                *((void*)((char *)&v4->field_14 + 4)) = v13;
                *((void*)&(&v4->field_10)[1]) = v12;
                v4->field_10 = v3;
                *((char [12])&v4->field_8) = v2;
                v4->field_0 = v9;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&v7);
            }
            v5.union(&v0, &v2);
            v1 = v6;
            *(&v0) = v5;
            v16 = v7.next();
        } while (v16);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&v7);
    v4->field_10 = v1;
    *((char [12])&v4->field_8) = v0;
    v4->field_0 = 9223372036854775820;
    return 9223372036854775820;
}
