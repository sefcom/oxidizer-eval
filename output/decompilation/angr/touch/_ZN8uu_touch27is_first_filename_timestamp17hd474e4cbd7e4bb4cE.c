long long uu_touch::is_first_filename_timestamp(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_0 **a5, unsigned long a6)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long v3;  // r14
    unsigned long long v4;  // rax

    if (!(!a0 && !a3))
    {
        return 0;
    }
    else if (!a6 < 2 && !a1)
    {
        std::env::var(&v0, "_POSIX2_VERSIONatimemtime(uutils coreutils) 0.1.0touch-abouttouch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help-timea", 15);
        if (!(v0 & 1) && (char)v1.equal(*((long long *)&v2), "199209_POSIX2_VERSIONatimemtime(uutils coreutils) 0.1.0touch-abouttouch-usagetouch-help-helptouch-help-accesstouch-help-timestampSTAMPtouch-help-dateSTRING(ignored)touch-help-modificationtouch-help-no-createtouch-help-no-dereftouch-help-referencetouch-help", 6))
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
            v3 = *((long long *)&*(a5)->field_10);
            v4 = uu_touch::all_digits(*((long long *)&*(a5)->field_8), v3);
            if (!(char)v4)
                return 0;
            switch (v3)
            {
            case 8:
                return v4 & 0xffffffffffffff00 | 1;
            case 10:
                return (unsigned int)uu_touch::get_year(*((long long *)&*(a5)->field_8), 10).contains();
            default:
                return 0;
            }
        }
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
        return 0;
    }
    else
    {
        return 0;
    }
}
