long long uu_uniq::Uniq::skip_fields(struct_0 *a0, char a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [sp-0x50]
    char v2;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // r8
    unsigned long long v7;  // rax
    unsigned long long v8;  // r15
    unsigned long v9;  // rbp
    unsigned long v10;  // rbp
    unsigned long long v12;  // rax

    if (!(a1 & 1))
        return a0.to_vec(a3, a4);
    v6 = a4 + a3;
    v0 = a3;
    v1 = v6;
    if (a2)
    {
        v7 = v0.all();
        if ((char)v7)
        {
            a0->field_0 = 0;
            a0->field_8 = 1;
            a0->field_10 = 0;
            return v7;
        }
        v2.collect(&v0);
        v8 = v2;
        a3 = v3;
        if (!*((long long *)&v4))
        {
            a0->field_0 = 0;
            a0->field_8 = 1;
            a0->field_10 = 0;
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, a3);
        }
        v6 = *((long long *)&v4) + a3;
        v0 = a3;
        v1 = v6;
        if (a2 != 1)
        {
            v9 = a2 - 1;
            while (true)
            {
                v10 = v9;
                if (v0.all())
                    break;
                v2.collect(&v0);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, a3);
                v8 = v2;
                a3 = v3;
                if (!*((long long *)&v4))
                    break;
                v0 = a3;
                v1 = *((long long *)&v4) + a3;
                v9 = v10 - 1;
                if (v10 == 1)
                    goto LABEL_466789;
            }
        }
    }
LABEL_466789:
    v12 = a0.collect(a3, v6);
    if (!a2)
        return v12;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, a3);
}
