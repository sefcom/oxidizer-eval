long long uu_touch::is_first_filename_timestamp(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, void* *a5, unsigned long a6)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    char v3[10];  // rbx
    unsigned long v4;  // r14
    unsigned long long v5;  // rax

    if (!(!a0 && !a3))
    {
        return 0;
    }
    else if (!a6 < 2 && !a1)
    {
        std::env::var(&v0);
        if (!(v0 & 1) && (char)v1.equal(*((long long *)&v2), "199209_POSIX2_VERSIONatimemtime(uutils coreutils) 0.0.30Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current time", 6))
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
            v3 = (long long)(*(a5))[8];
            v4 = (long long)(*(a5))[16];
            v5 = uu_touch::all_digits(v3, v4);
            if (!(char)v5)
                return 0;
            switch (v4)
            {
            case 8:
                return v5 & 0xffffffffffffff00 | 1;
            case 10:
                return (unsigned int)uu_touch::get_year(v3[8], v3[9]).contains();
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
