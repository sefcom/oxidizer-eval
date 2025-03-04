long long uu_realpath::canonicalize_relative::h9315a0e677658306(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    unsigned long v0;  // [sp-0x68]
    unsigned long long v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    unsigned long v6;  // [sp-0x38]
    char v7;  // [sp-0x30]
    unsigned long long v9;  // rax

    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&v3, a1, a2, a3, a4);
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
    if ((char)a3 == 1 && !(char)std::path::Path::is_dir::h9ac0db933706da51(v1, v2))
    {
        std::fs::read_dir::h4b97a66205288110(&v3, v1, v2);
        if (v7 == 2)
        {
            a0[1] = v6;
            a0[0] = 0x8000000000000000;
            v9 = ::0x4b4d60::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&v0);
            return v9;
        }
        v6 = *((long long *)&v3);
        v7 = v4;
        ::0x4b4d50::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h8145669f43335f0d(&v6);
    }
    a0[2] = v2;
    a0[0] = v0;
    v9 = v1;
    a0[1] = v9;
    return v9;
}
