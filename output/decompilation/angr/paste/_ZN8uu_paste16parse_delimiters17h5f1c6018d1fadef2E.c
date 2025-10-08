long long uu_paste::parse_delimiters(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xc4]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98], Other Possible Types: char *, unsigned long long
    unsigned int v7;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    char *v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x30]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx
    char v21;  // al
    unsigned long v23;  // rax

    v11 = a1;
    v12 = a2;
    v0 = 0;
    v1 = a2.with_capacity_in(8, 16, &g_4deca0);
    v2 = v18;
    v3 = 0;
    v9 = a1;
    v10 = a2 + a1;
    if (((char)core::str::validations::next_code_point(&v9) & 1))
    {
        do
        {
            v20 = v19;
            if ((unsigned int)v20 != 92)
            {
LABEL_456e10:
                uu_paste::parse_delimiters::{{closure}}(&v0, &v1, v20);
            }
            else
            {
                if (!((char)core::str::validations::next_code_point(&v9) & 1))
                {
                    v13 = &v11;
                    v14 = <&T as core::fmt::Display>::fmt;
                    v4 = &g_4dec90;
                    v5 = 1;
                    v8 = 0;
                    v6 = &v13;
                    v7 = 1;
                    v15.map_or_else(&v4);
                    v7 = 1;
                    memcpy(&v4, &v15, 16);
                    v6 = *((long long *)&v16);
                    *((double *)&a0->field_8) = v4.new();
                    a0->field_10 = &g_4decf0;
                    a0->field_0 = 1;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&v1);
                }
                if ((unsigned int)v18 <= 109)
                {
                    if ((unsigned int)v18 == 48)
                    {
                        v1.push(alloc::boxed::Box<T>::new(), 0, &g_4ded58);
                        continue;
                    }
                    v21 = 92;
                    v20 = v18;
                    if ((unsigned int)v20 == 92)
                        goto LABEL_456e77;
                    goto LABEL_456e10;
                }
                if ((unsigned int)v18 != 110)
                {
                    v20 = v18;
                    if ((unsigned int)v20 == 116)
                    {
                        v21 = 9;
                        goto LABEL_456e77;
                    }
                }
                else
                {
                    v21 = 10;
LABEL_456e77:
                    uu_paste::parse_delimiters::add_one_byte_single_char_delimiter(&v1, v21);
                }
            }
        } while (((char)core::str::validations::next_code_point(&v9) & 1));
    }
    v6 = 0;
    memcpy(&(char)v4, &v1, 16);
    v23 = (char)v4.into_boxed_slice();
    a0->field_8 = v23;
    a0->field_10 = v18;
    a0->field_0 = 0;
    return v23;
}
