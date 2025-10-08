long long fish::terminal::index_for_color(unsigned long long a0)
{
    unsigned long long v1;  // 4096

    v1 = a0;
    if ((char)v1 != 1)
    {
        v1 = a0 & 4294967295;
        if ((fish::terminal::get_color_support() & 1))
            return a0 & 4294967295.to_term256_index();
    }
    return (unsigned long long)v1.to_name_index();
}
