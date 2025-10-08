long long starship::modules::directory::before_root_dir(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x30]

    core::str::<impl str>::rsplit_once(&v0, a0, a1, a2, a3);
    if (!*((long long *)&v0))
        return a0;
    return *((long long *)&v0);
}
