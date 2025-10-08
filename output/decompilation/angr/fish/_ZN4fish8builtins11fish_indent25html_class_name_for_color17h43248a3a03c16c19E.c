long long fish::builtins::fish_indent::html_class_name_for_color(unsigned int a0)
{
    if ((a0 >> 16 & 255) > 14)
        return "f";
    return g_10e21d8[a0 >> 16 & 15] + (char *)&g_10e21d8[0];
}
