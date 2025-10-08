long long fish::history::format_history_record(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, char a4)
{
    void* v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    void* v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xd8]
    unsigned long v6;  // [bp-0xd0]
    char v7[16];  // [bp-0xc8]
    char *v8;  // [bp-0xc0]
    char v9;  // [bp-0xb8], Other Possible Types: uint128_t
    uint128_t v10;  // [bp-0xa8]
    uint128_t v11;  // [bp-0x98]
    uint128_t v12;  // [bp-0x88]
    uint128_t v13;  // [bp-0x78]
    unsigned int v14;  // [bp-0x68]
    struct tm v15[1];  // [bp-0x60]
    unsigned long long v17;  // r15

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = fish::history::file::time_to_seconds(a1->field_30, a1->field_38);
    if (a2)
    {
        (char)v7.spec_new_impl(a2, a3);
        if ((char)(((0 ^ *((long long *)&v7[0])) & (0 ^ -(*((long long *)&v7[0])))) >> 63))
        {
            v17 = *((long long *)&v9);
            if (localtime_r(&v3, &v15))
            {
                v13 = 0;
                v12 = 0;
                v11 = 0;
                v10 = 0;
                v9 = 0;
                *((uint128_t *)&v7) = 0;
                v14 = 0;
                if (strftime(&(char)v7, 100, v8, &v15))
                {
                    fish::common::cstr2wcstring(&v4, &(char)v7, 100);
                    v0.spec_extend(v5, v5 + v6 * 4);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                }
            }
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v8, v17);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>(&(char)v7);
        }
    }
    v0.spec_extend(a1->field_8, a1->field_8 + a1->field_10 * 4);
    v0.push((a4 ? 0 : 10));
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
