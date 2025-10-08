long long fish::common::escape_string_url(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x48]
    unsigned int v6;  // edx
    unsigned long v7;  // r13
    unsigned int v8;  // ebp
    unsigned int v9;  // ebp

    fish::common::wcs2osstring(&v4, a1, a2);
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3.into_iter(&v4);
    if ((v3.next() & 1))
    {
        v7 = v6;
        do
        {
            v8 = v7;
            if ((char)v7 >= 0)
            {
                v9 = v8;
                if (core::char::methods::<impl char>::is_alphanumeric(v9))
                    continue;
                v9 = v8;
                if (::0x12ad210::core::slice::memchr::memchr(v7, "/.~-___\\n", 5) == 1)
                    continue;
            }
            v0.push(37);
            v0.push((unsigned int)fish::common::byte_to_hex(v8));
            v9 = v6;
            v0.push(v9);
            v7 = v6;
        } while ((v3.next() & 1));
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<u8>>(&v3);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
