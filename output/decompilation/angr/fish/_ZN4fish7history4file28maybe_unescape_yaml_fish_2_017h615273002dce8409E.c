long long fish::history::file::maybe_unescape_yaml_fish_2_0(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    if (!(char)a1.fold(a1 + a2))
    {
        a0[1] = a1;
        a0[2] = a2;
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    return fish::history::file::unescape_yaml_fish_2_0(a0, a1, a2);
}
