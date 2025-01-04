long long uu_cp::copydir::build_dir::h8f7105fdecd19cc9(unsigned long long a0[2], char a1, char a2, unsigned long long a3, char a4)
{
    unsigned int v0;  // [sp-0x20]
    char v1;  // [sp-0x1c]
    unsigned int v3;  // ecx
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v1 = a4;
    v3 = (!a2 ? 0 : 18);
    if (a1)
        v3 = 63;
    v0 = ((int)uucore::features::mode::get_umask::hd2aa58752ad993fa() & 511 | v3) ^ 511;
    v5 = std::fs::DirBuilder::create::hd1163c4ef941f4c8(&v0, a3, v4);
    if (!v5)
    {
        v6 = 13;
    }
    else
    {
        a0[1] = v5;
        v6 = 2;
    }
    a0[0] = v6;
    return v6;
}
