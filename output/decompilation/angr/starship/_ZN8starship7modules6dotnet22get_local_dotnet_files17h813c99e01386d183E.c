long long starship::modules::dotnet::get_local_dotnet_files(unsigned long long a0[2], unsigned long long a1)
{
    int v0;  // [bp-0x68]
    char v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    int v4;  // [bp-0x38], Other Possible Types: char
    char v5;  // [bp-0x28]
    char v6;  // [bp-0x18]
    unsigned long v8;  // rdx
    unsigned long long v9;  // rdx

    if (!((char)a1.dir_contents() & 1))
    {
        v4.files(v9);
        v2 = *((long long *)&v6);
        memcpy(&v1, &v5, 16);
        v0 = v4;
        v3 = a1;
        return a0.collect(&v0);
    }
    a0[1] = v8;
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
