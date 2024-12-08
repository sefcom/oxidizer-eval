long long uu_ls::dired::calculate_and_update_positions::h1784af61f57010e5(unsigned long long a0[3], unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    void* v2;  // rcx
    unsigned long long v3;  // rax

    v1 = a0[2];
    v2 = (v1 - 1) * 16 + a0[1];
    if (1 > v1)
        v2 = 0;
    v3 = core::option::Option$LT$T$GT$::map_or::h40b02cc4a0b460e3(v2);
    return uu_ls::dired::update_positions::h8161300f4f972423(a0, a1 + v3 + 2, a2 + a1 + v3 + 2);
}
