long long fish::env_universal_common::EnvUniversal::serialize_with_vars(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    struct_0 *v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    struct_1 *v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    char v14;  // [bp-0x58]
    unsigned long long v16;  // rbp

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v0.spec_extend("# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", "# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()");
    v0.spec_extend("# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", "universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()");
    v0.spec_extend("3.0# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", "# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()");
    v0.push(10, &g_14d7390);
    v14.iter(a1);
    v8.collect(&v14);
    alloc::slice::<impl [T]>::sort_by(v9, v10);
    v14.into_iter(&v8);
    (char)v4.next(&v14);
    if (v5)
    {
        v4 = v5;
        do
        {
            v16 = v4;
            fish::env_universal_common::encode_serialized(&v11, v7->field_0 + 16, v7->field_8);
            fish::env_universal_common::append_file_entry(v7->field_10, v16, v6, v12, v13, &v0);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
            (char)v4.next(&v14);
            v4 = v5;
        } while (v4);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::builtins::fish_indent::make_pygments_csv::TokenRange>>(&v14);
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return v3;
}
