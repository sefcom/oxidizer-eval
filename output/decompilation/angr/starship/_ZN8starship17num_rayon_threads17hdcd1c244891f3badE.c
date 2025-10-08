long long starship::num_rayon_threads()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0 = v2;
    if (!((char)starship::num_configured_starship_threads() & 1))
        return starship::num_rayon_threads::{{closure}}();
    return v3;
}
