long long uu_touch::determine_atime_mtime_change(unsigned long long a0)
{
    char v0;  // [bp-0x40]
    unsigned long long v2[3];  // rax
    char v3;  // bpl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char v6;  // bpl
    unsigned long long v7;  // rax

    if ((char)a0.contains_id("timeHashj", 4))
    {
        v0.try_get_one(a0);
        v2 = v0.unwrap();
        if (!v2)
            goto LABEL_53a698;
        v3 = uu_touch::determine_atime_mtime_change::{{closure}}(v2[1], v2[2]);
        if ((char)a0.get_flag("accessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 6))
            goto LABEL_53a6b4;
        v4 = a0.get_flag("modificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 12);
        if ((char)v4)
        {
            v5 = v4 & 0xffffffffffffff00 | 1;
            if (!v3)
                return v4 & 0xffffffffffffff00 | 1;
        }
        else
        {
            if (!v3)
                return v4 & 0xffffffffffffff00 | 1;
LABEL_53a705:
            return 0;
        }
    }
    else
    {
LABEL_53a698:
        v6 = 2;
        if (!(char)a0.get_flag("accessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 6))
        {
            v7 = a0.get_flag("modificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 12);
            v4 = v7 & 0xffffffffffffff00 | 2;
            if (!(char)v7)
                return v7 & 0xffffffffffffff00 | 2;
            return v4 & 0xffffffffffffff00 | 1;
        }
LABEL_53a6b4:
        v5 = a0.get_flag("modificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 12);
        if (!(char)v5 && (v6 == 2 || (v6 & 1)))
            goto LABEL_53a705;
    }
    return v5 & 0xffffffffffffff00 | 2;
}
