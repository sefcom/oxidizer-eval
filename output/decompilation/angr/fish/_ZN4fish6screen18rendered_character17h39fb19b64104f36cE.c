long long fish::screen::rendered_character(unsigned int a0)
{
    return (32 <= a0 ? a0 : a0 | 0x2400);
}
