long long zoxide::util::current_dir(unsigned long long a0)
{
    char v0;  // [bp-0x28]

    std::env::current_dir(&v0);
    return a0.context(&v0);
}
