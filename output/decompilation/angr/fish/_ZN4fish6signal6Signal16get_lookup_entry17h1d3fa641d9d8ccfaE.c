long long fish::signal::Signal::get_lookup_entry(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = &g_14e21e0;
    v1 = &g_14e2810;
    return v0.find(a0);
}
