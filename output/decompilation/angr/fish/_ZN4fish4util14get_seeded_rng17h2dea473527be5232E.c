long long fish::util::get_seeded_rng(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    a0.seed_from_u64(a1 ^ a2);
    return a0;
}
