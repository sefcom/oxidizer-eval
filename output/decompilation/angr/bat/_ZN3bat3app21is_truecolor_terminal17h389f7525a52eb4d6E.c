char bat::app::is_truecolor_terminal()
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    char v4;  // al

    std::env::var(&v0, "COLORTERMtruecolor24bitcachesrc/bin/bat/app.rs", 9);
    if (!(v0 & 1))
        return (char)bat::app::is_truecolor_terminal::{{closure}}(&(char)v1) & 1;
    v4 = *((long long *)&v2);
    if (v1 != 9223372036854775809)
    {
        core::ptr::drop_in_place<core::result::Result<bool,std::env::VarError>>(v1, *((long long *)&v2));
        v4 = 0;
    }
    return v4 & 1;
}
