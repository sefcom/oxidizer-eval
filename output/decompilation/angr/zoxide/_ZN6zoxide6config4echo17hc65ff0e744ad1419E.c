long long zoxide::config::echo()
{
    char v0;  // [bp-0x18]

    std::env::var_os(&v0, "_ZO_ECHOCLICOLORkeywords", 8);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        return 0;
    return zoxide::config::resolve_symlinks::{{closure}}(&v0);
}
