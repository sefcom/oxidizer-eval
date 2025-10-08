long long fish::reader_history_search::smartcase_flags(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax

    v0.to_lowercase(a0, a1);
    v4 = a0.equal(a1, v1, *((long long *)&v2));
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return v4;
}
