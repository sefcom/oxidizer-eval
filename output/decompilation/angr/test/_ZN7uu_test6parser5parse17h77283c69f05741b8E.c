long long uu_test::parser::parse(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x80], Other Possible Types: char
    int v1;  // [bp-0x70]
    int v2;  // [bp-0x60], Other Possible Types: char
    unsigned long v3;  // [bp-0x50]
    char v4;  // [bp-0x48]

    v2.new(a1);
    v0.parse(&v2);
    if (*((int *)&v0) != 7)
    {
        *((void*)&a0->field_8[8]) = v1;
        *((void*)&a0->field_0) = v0;
        core::ptr::drop_in_place<uu_test::parser::Parser>(&v2);
        return a0;
    }
    *((unsigned long *)&a0->field_8[16]) = v3;
    *((void*)&a0->field_8[0]) = v2;
    *((unsigned long long *)&a0->field_0) = 7;
    ::0x49aae0::core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v4);
    return a0;
}
