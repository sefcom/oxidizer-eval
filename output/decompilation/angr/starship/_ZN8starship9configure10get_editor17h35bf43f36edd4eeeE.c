long long starship::configure::get_editor(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68]
    int v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    int v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x28]
    int v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x18]

    if (a1)
        return a0.to_vec(a1, a2);
    std::env::var(&v0, "VISUALEDITORviPWDReceived completed pipestatus of src/context.rs", 6);
    if ((v0 & 1))
    {
        v3 = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    }
    else
    {
        v5 = v2;
        v4 = v1;
    }
    std::env::var(&v0, "EDITORviPWDReceived completed pipestatus of src/context.rs", 6);
    if ((v0 & 1))
    {
        v6 = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    }
    else
    {
        v8 = v2;
        v7 = v1;
    }
    return (unsigned long long)starship::configure::get_editor_internal(a0, &v4, &v7);
}
