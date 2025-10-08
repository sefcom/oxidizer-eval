char fish::builtins::fish_indent::char_is_escaped(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)fish::wcstringutil::count_preceding_backslashes(a0, a1, a2) & 1;
}
