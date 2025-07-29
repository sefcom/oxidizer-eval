long long metal_crusher::fun::is_gnome()
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned int v5;  // eax

    std::env::var(&v3, "XDG_CURRENT_DESKTOPGNOMEplasmashellMETAL CRUSHERsh-c/usr/bin/", 19);
    if (!(v3 & 1))
    {
        v0.unwrap(&v3, &g_996640);
        v5 = "GNOMEplasmashellMETAL CRUSHERsh-c/usr/bin/".is_contained_in(5, v1, v2);
        ::0x7837a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
        return v5;
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v3);
    return 0;
}
