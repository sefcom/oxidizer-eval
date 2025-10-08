char uu_install::mode::chmod(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    v1 = std::fs::set_permissions(a0, a1, a2);
    if (v1)
        uu_install::mode::chmod::{{closure}}(a0, a1, v1);
    return v1;
}
