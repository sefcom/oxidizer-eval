long long uu_rm::path_is_current_or_parent_directory(void* a0, unsigned long long a1)
{
    unsigned short v0;  // [bp-0x34]
    char v1;  // [bp-0x32]
    void* v2;  // [bp-0x30]
    void* v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v6;  // rbp

    v3 = a0;
    v4 = a1;
    v2 = 0;
    if (a1 == 2)
    {
        v6 = v6 & 0xffffffffffffff00 | 1;
        if (*((short *)a0) == 11822)
        {
            core::ptr::drop_in_place<core::result::Result<&[u8],alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
            return (v6 & 0xffffffffffffff00 | 1) & 4294967295;
        }
    }
    else if (a1 == 1)
    {
        v6 = vvar_20{reg 56} & 0xffffffffffffff00 | 1;
        if (*((char *)a0) == 46)
        {
            core::ptr::drop_in_place<core::result::Result<&[u8],alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
            return (v6 & 0xffffffffffffff00 | 1) & 4294967295;
        }
    }
    v0 = 11823;
    v6 = v6 & 0xffffffffffffff00 | 1;
    if (!(char)core::slice::<impl [T]>::ends_with(a0, a1, &v0, 2))
    {
        v0 = 11823;
        v1 = 46;
        if (!(char)core::slice::<impl [T]>::ends_with(a0, a1, &v0, 3))
        {
            v0 = 11823;
            v1 = 47;
            if (!(char)core::slice::<impl [T]>::ends_with(a0, a1, &v0, 3))
            {
                strncpy(&v0, "/../", 4);
                v6 = (unsigned int)core::slice::<impl [T]>::ends_with(a0, a1, &v0, 4);
            }
        }
    }
    core::ptr::drop_in_place<core::result::Result<&[u8],alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
    return v6 & 4294967295;
}
