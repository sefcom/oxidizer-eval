long long fish::env_universal_common::encode_serialized(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    if (!a2)
        return a0.to_vec(&g_550fb4, 1);
    return fish::wcstringutil::join_strings(a0, a1, a2, 30);
}
