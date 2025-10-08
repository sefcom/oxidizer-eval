long long fish::builtins::ulimit::getrlimit(struct_0 *a0, unsigned int a1)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    a1 >> 31.unwrap(&g_14d4ff0);
    nix::sys::resource::getrlimit(&v0, a1);
    if (*((int *)&v0) == 1)
    {
        fish::wutil::perror("getrlimit", 9);
        v3 = 0;
    }
    else
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        v3 = 1;
    }
    a0->field_0 = v3;
    return v3;
}
