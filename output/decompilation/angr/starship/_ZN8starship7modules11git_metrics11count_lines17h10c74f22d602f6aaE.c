long long starship::modules::git_metrics::count_lines(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    uint128_t v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2[3];  // [bp-0x14]

    v0 = 0;
    v1 = 0;
    starship::modules::git_metrics::diff_two_opt(&v2, a0, a1, &v0, a3, a0, a1, a2, a3, a4, a5);
    return v2.map_or();
}
