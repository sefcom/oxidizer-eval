long long uu_hashsum::uu_app_bits(unsigned long long a0)
{
    char v0;  // [bp-0x2d8]

    uu_hashsum::uu_app_common(&v0);
    uu_hashsum::uu_app_opt_bits(a0, &v0);
    return a0;
}
