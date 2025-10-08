void fish::builtins::bind::BuiltinBind::list(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5, char a6)
{
    int v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    int v2;  // [bp-0xc8]
    int v3;  // [bp-0xb8]
    int v4;  // [bp-0xb8]
    unsigned long v5;  // [bp-0xa0]
    int v6;  // [bp-0x98]
    char v7;  // [bp-0x98]
    int v8;  // [bp-0x98]
    int v9;  // [bp-0x88]
    int v10;  // [bp-0x78]
    char v11;  // [bp-0x68]
    char v12;  // [bp-0x48]

    v12.get_names(a0 + 8, a3);
    v11.into_iter(&v12);
    (char)v8.next(&v11);
    if (!((char)(((0 ^ *((long long *)&v7)) & (0 ^ -(*((long long *)&v7)))) >> 63)))
    {
        if (a1)
        {
            v5 = a6;
            do
            {
                v3 = v10;
                v2 = v9;
                v0 = v8;
                if ((char)a1.equal(a2, (long long)v3, (long long)(&v3)[8]))
                    a0.list_one(v1, (long long)v2, (long long)v3, (long long)(&v3)[8], a3, a4, a5, v5);
                core::ptr::drop_in_place<fish::input::InputMappingName>(&(char)v8);
                (char)v8.next(&v11);
            } while ((long long)v8 != 0x8000000000000000);
        }
        else
        {
            do
            {
                v0 = v6;
                v2 = v9;
                v4 = v10;
                a0.list_one(v1, (long long)v2, (long long)v4, (long long)(&v4)[8], a3, a4, a5, v5);
                core::ptr::drop_in_place<fish::input::InputMappingName>(&(char)v8);
                (char)v8.next(&v11);
            } while ((long long)v8 != 0x8000000000000000);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::input::InputMappingName>>(&v11);
    return;
}
