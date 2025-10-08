long long starship::modules::pulumi::pulumi_home_dir(void* a0)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    int v4;  // [bp-0x28], Other Possible Types: char
    char v5;  // [bp-0x18]
    unsigned long long v7;  // rax

    v0.get_env("PULUMI_HOMEError in module `pulumi`:\n", 11);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v4.to_vec(v1, v2);
        *((long long *)&a0[16]) = *((long long *)&v5);
        *(a0) = v4;
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    core::ptr::drop_in_place<regex::error::Error>(&v0);
    v7 = v3.get_home();
    if (*((long long *)&v3) != 0x8000000000000000)
        return (unsigned long long)starship::modules::pulumi::pulumi_home_dir::{{closure}}(a0, &v3);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v7;
}
