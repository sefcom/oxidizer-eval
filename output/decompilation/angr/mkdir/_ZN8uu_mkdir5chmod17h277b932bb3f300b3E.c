long long uu_mkdir::chmod(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    return std::fs::set_permissions(a0, a1, a2).map_err_context(a0, a1);
}
