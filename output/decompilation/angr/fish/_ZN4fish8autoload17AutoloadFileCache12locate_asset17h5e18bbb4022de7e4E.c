void fish::autoload::AutoloadFileCache::locate_asset(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0xc0], Other Possible Types: unsigned long long
    int v1;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    int v4;  // [bp-0xa0]
    int v5;  // [bp-0x90]
    int v6;  // [bp-0x80]
    char v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x48]
    char v12;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x38]
    char v14;  // [bp-0x30]
    char v16;  // al
    unsigned long long v17;  // rcx

    fish::common::wcs2osstring(&v12, a1, a2);
    core::str::converts::from_utf8(&v0, v13, *((long long *)&v14));
    if ((v0 & 1))
    {
        a0->field_0 = 9223372036854775809;
    }
    else
    {
        if (a3)
        {
            v0.to_vec("completions/functions/assertion failed: !success.preserve_failure_exit_statussrc/builtins/shared.rs", 12);
            v11 = v2;
            memcpy(&v10, &v0, 16);
            v0.add(&v10, *((long long *)&v1), v2);
            v7.add(&v0, ".fish/", 5);
        }
        else
        {
            v0.to_vec("functions/assertion failed: !success.preserve_failure_exit_statussrc/builtins/shared.rs", 10);
            v11 = v2;
            memcpy(&v10, &v0, 16);
            v0.add(&v10, *((long long *)&v1), v2);
            v7.add(&v0, ".fish/", 5);
        }
        v16 = fish::autoload::has_asset(v8, v9);
        v3 = v9;
        *((int128_t *)&v1) = *((int128_t *)&v7);
        v0 = 0x8000000000000000;
        if (v16)
        {
            *((void*)&a0->field_40) = v6;
            v17 = (long long)v1;
            *((void*)&a0->field_30) = v5;
            *((void*)&a0->field_20) = v4;
            a0->field_10 = v2;
            a0->field_18 = v3;
            a0->field_0 = v0;
            a0->field_8 = v17;
        }
        else
        {
            a0->field_0 = 9223372036854775809;
            core::ptr::drop_in_place<fish::autoload::AutoloadableFileInfo>(&v0);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v12, v13);
    return;
}
