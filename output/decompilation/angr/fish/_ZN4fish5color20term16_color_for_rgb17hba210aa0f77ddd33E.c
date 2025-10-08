long long fish::color::term16_color_for_rgb(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = fish::color::convert_color(a0, &g_a15018, 16);
    0x100 <= v1.unwrap(&g_14d5a20);
    return v1 & 4294967295;
}
