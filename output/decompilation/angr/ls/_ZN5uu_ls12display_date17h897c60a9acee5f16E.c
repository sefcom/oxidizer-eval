long long uu_ls::display_date(unsigned long long a0, unsigned int a1, unsigned int a2, unsigned long a3)
{
    unsigned int v0[4];  // [bp-0x20]

    uu_ls::get_time(&v0, a1, a2);
    if (!v0[0])
        return a0.to_vec("???_-.:~/", 3);
    return (unsigned long long)a0.format(a3 + 40, &v0);
}
