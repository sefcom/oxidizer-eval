long long fish::util::get_rng(unsigned long long a0)
{
    unsigned long long v2;  // rdx

    fish::util::get_seeded_rng(a0, fish::util::get_rng_seed(), v2);
    return a0;
}
