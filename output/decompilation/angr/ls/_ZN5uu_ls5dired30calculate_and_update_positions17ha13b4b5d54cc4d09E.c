long long uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(unsigned long long a0[3], unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    void* v2;  // rcx
    unsigned long long v3;  // rax

    v1 = a0[2];
    v2 = (v1 - 1) * 16 + a0[1];
    if (1 > v1)
        v2 = 0;
    v3 = core::option::Option$LT$T$GT$::map_or::h6db8c3714c85d15c(v2);
    return uu_ls::dired::update_positions::h1dc8b030d29268c5(a0, a1 + v3 + 2, a2 + a1 + v3 + 2);
}
