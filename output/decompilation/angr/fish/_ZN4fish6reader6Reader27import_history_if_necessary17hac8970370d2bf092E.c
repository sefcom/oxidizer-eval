long long fish::reader::Reader::import_history_if_necessary(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0[3];  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x50]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // r14
    unsigned long long v9;  // rax
    unsigned int v10;  // edx
    unsigned long long v11;  // rdx

    if ((char)a0->field_830 + 16.is_empty())
        a0->field_830 + 16.populate_from_config_path();
    v6 = a0->field_830 + 16.is_empty();
    if (!(char)v6)
        return v6;
    v7 = a0->field_830 + 16.is_default();
    if (!(char)v7)
        return v7;
    v8 = a1 + 472;
    v3.get(v8, "H", 8);
    v0.map_or_else(&v3);
    fish::expand::expand_tilde(&v0, v8, &g_14c7518);
    v9 = fish::fds::wopen_cloexec(v1, v2, 0, 0);
    if (((char)v9 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,nix::errno::consts::Errno>>(v9 & 4294967295, v10);
    }
    else
    {
        v4.with_capacity(0x2000, v11);
        a0->field_830 + 16.populate_from_bash(&v4);
    }
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
}
