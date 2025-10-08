long long starship::modules::os::get_edition(unsigned long long *a0, unsigned long long a1[7])
{
    if (!((char)(((0 ^ a1[4]) & (0 ^ -(a1[4]))) >> 63)))
        return a0.to_vec(a1[5], a1[6]);
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
