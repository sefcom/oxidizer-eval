long long uu_realpath::canonicalize_relative::h488157c0d274a110(unsigned long long a0[3], unsigned long a1, unsigned long a2, char a3)
{
    unsigned long v0;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    unsigned long v6;  // [sp-0x38], Other Possible Types: unsigned long long
    char v7;  // [sp-0x30]
    unsigned long long v9;  // rax

    uucore::features::fs::canonicalize::hcc440bc5dd0404e0(&v3);
    v9 = *((long long *)&v3);
    if (v0 == 0x8000000000000000)
    {
        a0[1] = v1;
        a0[0] = 0x8000000000000000;
        return v9;
    }
    v0 = v9;
    v1 = *((long long *)&v4);
    v2 = *((long long *)&v5);
    if (a3 == 1 && !(char)std::path::Path::is_dir::h9ac0db933706da51(v1, v2))
    {
        std::fs::read_dir::hc2c2ae837dd15969(&v3, v1, v2);
        if (v7 == 2)
        {
            a0[1] = v6;
            a0[0] = 0x8000000000000000;
            v9 = ::0x4b4db0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h29e0dfde41425c59(&v0);
            return v9;
        }
        v6 = *((long long *)&v3);
        v7 = v4;
        ::0x4b4da0::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hebbd623bb86d8c58(&v6);
    }
    a0[2] = v2;
    a0[0] = v0;
    v9 = v1;
    a0[1] = v9;
    return v9;
}
