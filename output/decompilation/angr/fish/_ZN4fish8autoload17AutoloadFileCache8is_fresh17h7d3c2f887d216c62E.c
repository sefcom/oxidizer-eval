char fish::autoload::AutoloadFileCache::is_fresh(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0x8]

    v0 = a2;
    v1 = a3;
    return v0.saturating_duration_since(a0, a1) < 15;
}
