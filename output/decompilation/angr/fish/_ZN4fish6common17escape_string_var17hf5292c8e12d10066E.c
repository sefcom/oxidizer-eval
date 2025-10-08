long long fish::common::escape_string_var(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x48]
    char v6;  // dl
    char v7;  // r15b
    unsigned long v8;  // rbp
    unsigned int v9;  // eax
    unsigned int v10;  // edx

    fish::common::wcs2osstring(&v4, a1, a2);
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3.into_iter(&v4);
    if ((v3.next() & 1))
    {
        do
        {
            v8 = v6;
            if ((char)v8 >= 0)
            {
                if (core::char::methods::<impl char>::is_alphanumeric(v8 & 255))
                {
                    if ((v7 & 1))
                    {
                        if ((char)(v8 - 65) < 6 || (char)(v8 - 48) < 10)
                            goto LABEL_12e4fb0;
                        v0.push(95);
                    }
                    v0.push(v8 & 255);
                }
                else if ((unsigned int)v8 == 95)
                {
                    v0.extend("__\\n", "\\n");
                    continue;
                }
            }
LABEL_12e4fb0:
            v9 = fish::common::byte_to_hex((unsigned int)v8 & 255);
            v0.push(95);
            v0.push(v9);
            v7 = 1;
            v0.push(v10);
        } while ((v3.next() & 1));
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<u8>>(&v3);
    if ((v7 & 1))
        v0.push(95);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
