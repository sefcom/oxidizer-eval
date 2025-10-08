long long fish::fork_exec::spawn::Attr::new(unsigned int a0[2])
{
    char v0;  // [bp-0x158]
    unsigned int v2;  // eax

    v2 = posix_spawnattr_init(&v0);
    if (!v2)
    {
        memcpy(a0 + 1, &v0, 336);
        a0[0] = 0;
        return 0;
    }
    a0[1] = v2;
    a0[0] = 1;
    return 1;
}
