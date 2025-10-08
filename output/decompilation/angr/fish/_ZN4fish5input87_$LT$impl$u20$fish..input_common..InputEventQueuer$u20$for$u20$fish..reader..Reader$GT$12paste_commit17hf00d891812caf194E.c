void fish::input::<impl fish::input_common::InputEventQueuer for fish::reader::Reader>::paste_commit(struct_0 **a0)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa8]
    int v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    void* v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    void* v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    void* v9;  // [bp-0x68]
    char v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    int v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    struct_0 *v17;  // r12
    unsigned long long v18;  // r14
    char *v19;  // rbx
    unsigned long long v20;  // rdx

    *((unsigned long long *)&v3) = 0;
    v4 = 4;
    v5 = 0;
    v6 = 90;
    v1 = 0x8000000000000000;
    v17 = *(a0);
    v17.push_front(&v1);
    v18 = v17->field_580;
    v19 = v17->field_588;
    v20 = v17->field_590;
    v17->field_580 = 0x8000000000000000;
    if ((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63))
    {
        core::ptr::drop_in_place<terminfo::expand::Parameter>(0x8000000000000000, v19);
    }
    else
    {
        v7 = 0;
        v8 = 4;
        v9 = 0;
        fish::common::str2wcstring(&v10, v19, v20);
        fish::common::escape(&v13, v11, v12);
        v0 = 1;
        v3 = v14;
        fish_printf::printf_impl::sprintf_locale(&v15, &v7, "__fish_paste %sIndex must not be larger than dequeued event count", 15, &v0, 1);
        v15.unwrap(&g_14daad8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
        memcpy(&(unsigned long long)v3, &v7, 16);
        v5 = 0;
        v0 = 9223372036854775809;
        v17.push_front(&v0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v18, v19);
    }
    return;
}
