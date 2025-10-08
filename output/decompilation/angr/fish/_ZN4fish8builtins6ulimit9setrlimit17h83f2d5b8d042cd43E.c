long long fish::builtins::ulimit::setrlimit(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    a0 >> 31.unwrap(&g_14d5008);
    return nix::sys::resource::setrlimit(a0, a1, a2);
}
