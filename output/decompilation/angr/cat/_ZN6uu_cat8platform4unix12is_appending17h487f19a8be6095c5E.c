long long uu_cat::platform::unix::is_appending()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v2;  // edx

    v0 = 4;
    return (int)(unsigned int)nix::fcntl::fcntl(1, &v0).unwrap_or_default(v2) >> 10 & 1;
}
