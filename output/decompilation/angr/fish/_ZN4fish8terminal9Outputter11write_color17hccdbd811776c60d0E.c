long long fish::terminal::Outputter::write_color(unsigned long long a0, char a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x34]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x2f], Other Possible Types: unsigned short
    char v3;  // [bp-0x2d]
    char v4;  // [bp-0x2c]
    unsigned long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v6 = a2;
    v0 = a2;
    if (((char)v6 == 2 & 2 <= (fish::terminal::get_color_support() & 255)))
    {
        if (fish::screen::only_grayscale())
        {
            v7 = (unsigned long long)v0.is_grayscale();
            if ((char)v7)
                return v7;
        }
        v8 = v6 & 4294967295.to_color24();
        v4 = a1;
        v2 = v8;
        v3 = (v8 & 4294967295) >> 16;
        v1 = 13;
    }
    else
    {
        v2 = fish::terminal::index_for_color(v6 & 4294967295);
        v1 = 12;
    }
    return a0.write_command(&v1);
}
