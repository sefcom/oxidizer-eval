long long fish::util::get_rng_seed()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned int v4;  // edx

    v0 = std::time::SystemTime::now();
    v1 = v4;
    v2.duration_since(&v0, 0, 0);
    return v2.unwrap_or_default() * 0x3b9aca00 + v4;
}
