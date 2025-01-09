long long uu_cp::is_forbidden_to_copy_to_same_file::h3bc6a23799758404(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[79], char a5)
{
    char v0;  // [sp-0xba]
    char v1;  // [sp-0xb9]
    char v2;  // [bp-0xb0]
    char v3;  // [bp-0x70]
    char v5;  // r15b
    char v6;  // dl
    char v7;  // dl
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v1 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a0, a1);
    v5 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3) & 255 & 4294967295;
    v0 = a4[65];
    if (!(char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a0, a1, a2, a3, 1))
        return 0;
    v6 = v1;
    if (a4[76])
    {
        if (!(!a4[60]) || !(!a4[61]))
        {
            if (!(!(!v0 & v6)) || !(!v5))
                return 0;
        }
        else
        {
            if (!(v6 == 1) || !(!!v0) || !(!v5))
                return 0;
        }
        if (!v6)
        {
            std::path::Path::components::h4f3217acf0fc8653(&v2, a2, a3);
            std::path::Path::components::h4f3217acf0fc8653(&v3, a0, a1);
            v7 = v1;
            if (!::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v2, &v3))
                return 0;
        }
    }
    v8 = a4[78];
    if (!(unsigned int)v8)
    {
        return 0;
    }
    else if ((unsigned int)v8 == 1)
    {
        if (v5)
            return 0;
        v9 = v8 & 0xffffffffffffff00 | 1;
        return v9;
    }
    else
    {
        if (v0)
        {
            return v9;
        }
        else if (!(v7 & v5))
        {
            return v9;
        }
    }
}
