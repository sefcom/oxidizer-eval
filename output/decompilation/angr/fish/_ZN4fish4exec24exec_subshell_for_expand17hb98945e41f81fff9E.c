long long fish::exec::exec_subshell_for_expand(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp-0x1]
    unsigned long v3;  // rax

    v0 = v3;
    v1 = 1;
    return (!v1 ? 0 : (unsigned int)fish::exec::exec_subshell_internal(a0, a1, a2, a3, a4, &v1, 1, 1));
}
