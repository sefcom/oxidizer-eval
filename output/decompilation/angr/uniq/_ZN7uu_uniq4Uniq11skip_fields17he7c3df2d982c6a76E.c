long long uu_uniq::Uniq::skip_fields(struct_0 *a0, char a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    int v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    int v5;  // [bp-0x48], Other Possible Types: char
    char v6;  // [bp-0x38]
    unsigned long long v8;  // r8
    unsigned long long v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    if (!(a1 & 1))
        return a0.to_vec(a3, a4);
    v8 = a4 + a3;
    v0 = a3;
    v1 = v8;
    if (a2)
    {
        v9 = 0.forward_unchecked();
        v10 = v0.all();
        if ((char)v10)
        {
            a0->field_0 = 0;
            a0->field_8 = 1;
            a0->field_10 = 0;
            return v10;
        }
        v5.from_iter(&v0, 0, &g_58bac8);
        v4 = *((long long *)&v6);
        v2 = v5;
        if (!v4)
        {
            a0->field_0 = 0;
            a0->field_8 = 1;
            a0->field_10 = 0;
            return (unsigned long long)::0x4a7c20::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v2);
        }
        a3 = v3;
        v8 = v4 + a3;
        v0 = a3;
        v1 = v8;
        if (v9 < a2)
        {
            while (true)
            {
                v9 = v9.forward_unchecked();
                v11 = v0.all();
                if ((char)v11)
                {
                    a0->field_0 = 0;
                    a0->field_8 = 1;
                    a0->field_10 = 0;
                    if ((char)v10)
                        return v11;
                    return (unsigned long long)::0x4a7c20::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v2);
                }
                v5.from_iter(&v0, 0, &g_58bac8);
                ::0x4a7c20::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v2);
                v4 = *((long long *)&v6);
                v2 = v5;
                if (!v4)
                    break;
                a3 = v3;
                v0 = a3;
                v1 = v4 + a3;
                if (v9 >= a2)
                    goto LABEL_4a98c8;
            }
        }
    }
LABEL_4a98c8:
    v12 = a0.from_iter(a3, v8, &g_58bac8);
    if (!a2)
        return v12;
    return (unsigned long long)::0x4a7c20::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v2);
}
