long long fish::builtins::argparse::is_implicit_int(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x10]

    if (!a0)
        return 0;
    fish::wutil::wcstoi::fish_wcstol(&v0, a1, a2);
    return v0 ^ 1;
}
