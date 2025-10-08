long long fish::builtins::fish_indent::fish_indent(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x28]

    v0.collect(a2, a3 * 16 + a2);
    return fish::builtins::fish_indent::do_indent(a1, &v0);
}
