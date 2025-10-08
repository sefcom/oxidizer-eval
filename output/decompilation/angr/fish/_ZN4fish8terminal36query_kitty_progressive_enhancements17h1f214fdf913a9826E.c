long long fish::terminal::query_kitty_progressive_enhancements(unsigned long long a0)
{
    char v0;  // [bp-0x20]

    std::env::var_os(&v0, "TERMLANGmathtruePATHYankkMSGsmsckentsnlqkundkendkRESmsgrkNXTkprtkrescwin.", 4);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)) && (char)fish::terminal::query_kitty_progressive_enhancements::{{closure}}(&v0))
        return 0;
    return (unsigned long long)a0.write_bytes(&g_550f88, 4) & 0xffffffffffffff00 | 1;
}
