long long uu_dd::Dest::discard_cache(char a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    if (a0 != 1)
        return 29;
    return nix::fcntl::posix_fadvise::posix_fadvise();
}
