long long fish::wchar_ext::WExt::strip_prefix(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v1 = 102.count();
    v2 = a0.as_ref(a1);
    if (!fish::wchar_ext::iter_prefixes_iter(102, v2, v2 + v3 * 4))
        return 0;
    return a0.slice_from(a1, v1);
}
