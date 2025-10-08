long long starship::configs::os::OSConfig::get_symbol(unsigned long long a0, char a1)
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp-0x1]
    unsigned long v3;  // rax
    unsigned long long *v4;  // rax

    v0 = v3;
    v1 = a1;
    v4 = a0.get(&v1);
    if (!v4)
        return 0;
    return *(v4);
}
