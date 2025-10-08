long long starship::modules::haskell::get_version(unsigned long long a0, unsigned long long a1[25])
{
    char v0;  // [bp-0x30]

    starship::modules::haskell::get_snapshot(&v0, a1);
    return a0.or_else(&v0, a1);
}
