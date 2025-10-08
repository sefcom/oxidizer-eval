long long fish::io::begin_filling(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned long long v2;  // rax

    v2 = a0.new();
    v0 = a1;
    return fish::io::fd_monitor().add(a1, v2, &g_14db810);
}
