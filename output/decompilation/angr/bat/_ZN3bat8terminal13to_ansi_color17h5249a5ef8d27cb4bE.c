long long bat::terminal::to_ansi_color(unsigned long long a0, char a1)
{
    void* v0;  // [bp-0x8]
    unsigned int v2;  // ecx

    v2 = (unsigned int)a0 >> 24;
    if (v2 == 1)
    {
        return 21;
    }
    else if (!v2)
    {
        if (((char)a0 & 248))
            return (unsigned int)a0 * 0x100 | 18;
        return g_4857a0[(unsigned int)a0 & 7];
    }
    else
    {
        if (a1)
            return (unsigned int)a0 * 0x100 | 19;
        v0 = 0;
        return (int)ansi_colours::ansi256_from_rgb(a0) * 0x100 | 18;
    }
}
