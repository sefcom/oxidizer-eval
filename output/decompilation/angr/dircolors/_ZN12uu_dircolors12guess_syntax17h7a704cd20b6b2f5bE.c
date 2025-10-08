long long uu_dircolors::guess_syntax()
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned int v4;  // ebx
    unsigned int v5;  // ebx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rdx

    std::env::var(&v0);
    v5 = v4 & 0xffffff00 | 3;
    if (!(v0 & 1) && *((long long *)&v2))
    {
        v6 = v1.file_name(*((long long *)&v2));
        if (v6 && ((char)v6.equal(v7, "cshsetenv LS_COLORS 'LS_COLORS=''';\nexport LS_COLORSinternal error: entered unreachable codesrc/uu/dircolors/src/dircolors.rs", 3) || (char)v6.equal(v7, "tcshEADV.taz.esd.gif.ogx", 4)))
            v5 = (unsigned int)v6 & 0xffffff00 | 1;
        else
            v5 = 0;
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    return v5;
}
