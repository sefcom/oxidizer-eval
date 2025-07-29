long long uu_ls::dired::calculate_and_update_positions(unsigned long long a0[3], unsigned long a1, unsigned long a2)
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax

    v1 = a0[1] + a0[2] * 16 - 16;
    if (!a0[2])
        v1 = 0;
    v2 = v1.map_or();
    return uu_ls::dired::update_positions(a0, a1 + v2 + 2, a2 + a1 + v2 + 2);
}
