long long uu_tail::paths::Input::from(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    int v3;  // [bp-0x58], Other Possible Types: char
    unsigned long long v4;  // [bp-0x48]
    int v5;  // [bp-0x38], Other Possible Types: char
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v8 = a1.as_ref();
    v5.from(v8, v9);
    if ((char)(((0 ^ *((long long *)&v5)) & (0 ^ -(*((long long *)&v5)))) >> 63))
    {
        v0.to_vec("standard input/dev/fd/0 <==\n", 14);
        v4 = v2;
        memcpy(&v3, &v0, 16);
    }
    else
    {
        v0.from_utf8_lossy(v8, v9);
        v3.clone(v1, v2);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
    }
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v6);
    *((void*)&(&a0->field_10)[1]) = v5;
    *((void*)&a0->field_0) = v3;
    a0->field_10 = v4;
    return v4;
}
