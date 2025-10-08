char fish::wchar_ext::WExt::starts_with(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdx

    v1 = a0.index(a1);
    return fish::wchar_ext::iter_prefixes_iter(a2, v1, v1 + v2 * 4);
}
