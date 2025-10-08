long long just::settings::Settings::shell_command(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    char v3;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe8]
    char v7;  // [bp-0xe0]

    v3.shell(a1, a2);
    v3.new(v3, v4);
    v0 = v5;
    v1 = v6;
    v2 = *((long long *)&v7);
    v3.args(&v0);
    return memcpy(a0, &v3, 224);
}
