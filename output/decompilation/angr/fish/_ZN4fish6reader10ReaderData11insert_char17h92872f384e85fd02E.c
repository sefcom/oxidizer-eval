void fish::reader::ReaderData::insert_char(void* a0, unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]

    v0.from(a2);
    a0.insert_string(a1, v1, *((long long *)&v2));
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
