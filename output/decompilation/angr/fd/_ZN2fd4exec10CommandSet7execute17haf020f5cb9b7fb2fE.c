char fd::exec::CommandSet::execute(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, char a7)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    char *v6;  // [bp-0x8]

    v0 = a4;
    v1 = a5;
    v2 = a0;
    v3 = a0 + a1 * 24;
    v4 = a2;
    v5 = a3;
    v6 = &v0;
    return fd::exec::command::execute_commands(&v2, a6, a7);
}
