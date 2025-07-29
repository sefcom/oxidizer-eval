long long uu_tail::paths::Input::from(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    unsigned long long v1;  // [bp-0x68]
    int v2;  // [bp-0x60], Other Possible Types: char
    unsigned long v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    char v8;  // [bp-0x20]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    v10 = a1.as_ref();
    v2.from(v10, v11);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
    {
        uucore::mods::locale::get_message(&v0, "tail-stdin-header/dev/fd/0/dev/stdin <==\n\n", 17);
    }
    else
    {
        v4.to_string_lossy(v10, v11);
        v7.to_vec(v5, v6);
        v1 = *((long long *)&v8);
        memcpy(&v0, &v7, 16);
        ::0x50e5c0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
    }
    *((unsigned long *)((char *)&a0->field_18 + 8)) = v3;
    *((void*)&(&a0->field_10)[1]) = v2;
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    return a0;
}
