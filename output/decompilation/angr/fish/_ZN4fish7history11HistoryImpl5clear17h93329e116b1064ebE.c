int fish::history::HistoryImpl::clear(struct_0 *a0)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rdi
    void* v5;  // rsi

    v4 = a0->field_48;
    v5 = a0->field_50;
    a0->field_50 = 0;
    core::ptr::drop_in_place<[fish::history::HistoryItem]>(v4, v5);
    a0->padding_70[16].clear();
    a0->field_b0 = 0;
    a0->field_68 = 0;
    v0.history_file_path(a0->field_30, *((long long *)&a0->field_38));
    if (v0 >= 9223372036854775810)
    {
        fish::wutil::wunlink(v1, *((long long *)&v2));
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    else if (v0 == 9223372036854775809)
    {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<widestring::utfstring::Utf32String>,std::io::error::Error>>(&v0);
    }
    return a0.clear_file_state();
}
