long long fish::builtins::bind::BuiltinBind::add(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, char a7, unsigned long long a8)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x38]
    unsigned int v5;  // eax
    char v6;  // al

    v2.collect(a3, a4 * 16 + a3);
    if (a2 > 2)
    {
        v5 = a1.char_at(a2, 0);
        v0.compute_seq(a8, a1, a2);
        v6 = v5 == 27;
        if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
            goto LABEL_133dd87;
    }
    else
    {
        v0.compute_seq(a8, a1, a2);
        if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        {
LABEL_133dd87:
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<fish::key::Key>>>(&v0);
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v2);
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(a6);
            return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a5) & 0xffffffffffffff00 | 1;
        }
    }
    v4 = v1;
    memcpy(&v3, &v0, 16);
    a0 + 8.add(&v3, v6, &v2, a5, a6, a7);
    return 0;
}
