long long starship::modules::dotnet::estimate_dotnet_version(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x49]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // rax
    struct_0 *v4;  // rax
    unsigned int v5;  // ecx
    char *v6;  // rsi

    v0 = 2;
    v1 = a2;
    v2 = a3 * 32 + a2;
    v3 = v1.find(&v0);
    v4 = v3.or_else(a2, a3).or_else(a2, a3);
    if (!v4)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v5 = v4->field_18;
    if (v5 != 2)
    {
        if (v5 == 3)
            return starship::modules::dotnet::get_latest_sdk_from_cli(a0, a1);
        starship::modules::dotnet::try_find_nearby_global_json(&v1, a4, a5, a6, a7);
        v6 = &v1;
    }
    else
    {
        starship::modules::dotnet::get_pinned_sdk_version_from_file(&v1, v4->field_8, v4->field_10);
        v6 = &v1;
    }
    return a0.or_else(v6, a1);
}
