long long bat::input::Input::_with_name(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    int v3;  // [bp-0x38], Other Possible Types: char
    char v4;  // [bp-0x28]
    unsigned long long v6;  // r15

    if (a2)
    {
        v0.from_utf8_lossy(a2, a3);
        v3.spec_to_string(v1, v2);
        core::ptr::drop_in_place<alloc::string::String>((char *)&a1->field_18 + 8);
        *((long long *)((char *)&a1->field_28 + 8)) = *((long long *)&v4);
        *((void*)((char *)&a1->field_18 + 8)) = v3;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v0);
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a2, a3);
        memcpy(&v3, &v1, 16);
    }
    else
    {
        v6 = 0x8000000000000000;
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&a1->field_10);
    a1->field_10 = v6;
    *((void*)&(&a1->field_10)[1]) = v3;
    ::libc.so.0::memcpy(a0, a1, 160);
    return a0;
}
