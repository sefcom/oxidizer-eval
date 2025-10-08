long long fish::color::term256_color_for_rgb(unsigned int a0)
{
    unsigned long long v1;  // rbx

    v1 = fish::color::convert_color(a0, &g_a15058, 240);
    if ((char)__CFADD__(v1, 16))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d5a38); /* do not return */
    0x100 <= v1 + 16.unwrap(&g_14d5a50);
    return v1 + 16 & 4294967295;
}
