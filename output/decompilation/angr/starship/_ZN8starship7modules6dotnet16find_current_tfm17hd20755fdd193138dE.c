long long starship::modules::dotnet::find_current_tfm(unsigned long long *a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x19]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v4[3];  // rax

    v0 = 1;
    v1 = a1;
    v2 = a2 * 32 + a1;
    v4 = v1.find(&v0);
    if (!v4)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    return (unsigned long long)starship::modules::dotnet::get_tfm_from_project_file(a0, v4[1], v4[2]);
}
