long long fish::autoload::AutoloadFileCache::new(unsigned long long a0)
{
    void* v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    void* v2;  // [bp-0x8]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    return a0.with_dirs(&v0);
}
