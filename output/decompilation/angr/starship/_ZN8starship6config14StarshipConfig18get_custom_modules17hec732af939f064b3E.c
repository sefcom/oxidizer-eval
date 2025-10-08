long long starship::config::StarshipConfig::get_custom_modules(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rax

    v0 = v2;
    v3 = a0.get_config(&g_11f2768, 1);
    if (!v3)
    {
        return 0;
    }
    else if (9223372036854775813 < *(v3))
    {
        return v3;
    }
    else
    {
        return 0;
    }
}
