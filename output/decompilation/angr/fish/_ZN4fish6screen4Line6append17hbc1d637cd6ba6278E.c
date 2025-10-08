long long fish::screen::Line::append(unsigned long long a0, unsigned int a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]

    v3 = a2;
    v2 = fish::screen::rendered_character(a1);
    v0 = a3;
    v1 = a4;
    return a0.push(&v0);
}
