long long starship::modules::aws::get_config(unsigned long long a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx

    v0 = v2;
    a1.get_or_try_init(a0);
    if (!((char)(((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63)))
        return a1;
    return 0;
}
