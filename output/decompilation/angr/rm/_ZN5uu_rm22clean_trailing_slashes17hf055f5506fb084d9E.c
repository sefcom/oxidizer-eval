long long uu_rm::clean_trailing_slashes(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    void* v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    unsigned long long v7;  // 4096
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rdx

    v1 = a0;
    v2 = a1;
    v0 = 0;
    if (a1 >= 2 && *((char *)(a0 + a1 - 1)) == 47)
    {
        v7 = a1;
        do
        {
            v8 = v7;
            if (v8 <= 1)
            {
                v9 = a1 - 1;
                break;
            }
            v7 = v8 - 1;
        } while (*((char *)(a0 + v8 - 2)) == 47);
        v3 = 0;
        v4 = v9;
        v5 = 0;
        a0 = v3.index(a0, a1);
    }
    core::ptr::drop_in_place<core::result::Result<&[u8],alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v0);
    return a0;
}
