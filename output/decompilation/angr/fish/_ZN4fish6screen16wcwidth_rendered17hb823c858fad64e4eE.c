long long fish::screen::wcwidth_rendered(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return fish::fallback::fish_wcwidth(fish::screen::rendered_character(a0));
}
