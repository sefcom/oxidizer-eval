long long starship::modules::azure::get_config_file_location(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x48]
    int v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x38]
    int v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x18]

    v3.get_env("AZURE_CONFIG_DIRcredentials.jsonelvish_indicator<no description>", 16);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        v2 = *((long long *)&v4);
        v1 = v3;
    }
    return a0.or_else(&v1, a1);
}
