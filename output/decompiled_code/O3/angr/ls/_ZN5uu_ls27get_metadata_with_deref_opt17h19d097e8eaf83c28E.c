long long uu_ls::get_metadata_with_deref_opt::h19d097e8eaf83c28(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]

    if (!a3)
    {
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v0, a1, a2);
        if (*((int *)&v0) != 2)
        {
            memcpy(a0, &v0, 176);
            return a0;
        }
    }
    else
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v0, a1, a2);
        if (*((int *)&v0) != 2)
        {
            memcpy(a0, &v0, 176);
            return a0;
        }
    }
    a0[1] = *((long long *)&v1);
    a0[0] = 2;
    return a0;
}
