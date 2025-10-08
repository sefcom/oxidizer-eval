long long fish::wchar_ext::WExt::find(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = a0.as_ref(a1);
    return fish::common::subslice_position(v3, v4, a2.as_ref(a3), v4);
}
