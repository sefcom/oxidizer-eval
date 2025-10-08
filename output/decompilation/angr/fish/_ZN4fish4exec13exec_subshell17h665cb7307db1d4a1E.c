long long fish::exec::exec_subshell(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    return fish::exec::exec_subshell_internal(a0, a1, a2, 0, a3, &(char)v0, a4, 0);
}
