char uu_cat::is_appending()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v2;  // edx

    std::io::stdio::stdout();
    v0 = 4;
    return ~((char)nix::fcntl::fcntl(1, &v0)) & (char)(v2 >> 10) & 1;
}
