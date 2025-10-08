long long fd::determine_ls_command(unsigned long long a0, char a1)
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp-0x1]
    unsigned long v3;  // rax

    v0 = v3;
    v1 = a1;
    fd::determine_ls_command::{{closure}}(a0, &v1);
    return v0;
}
