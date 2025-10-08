long long fish::wutil::fstat(void* a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc4]
    char v1;  // [bp-0xc0]

    if (a1 == -1)
        core::option::expect_failed("fd != -1\\", 8, &g_14c1498); /* do not return */
    v0 = a1;
    v1.metadata(&v0);
    return memcpy(a0, &v1, 176);
}
