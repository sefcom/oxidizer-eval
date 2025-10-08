long long fish::wchar_ext::WExt::slice_from(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a0.as_ref(a1);
    if (v2 < a2)
        core::slice::index::slice_start_index_len_fail(a2, v2, &g_14e4660); /* do not return */
    return v1 + a2 * 4;
}
