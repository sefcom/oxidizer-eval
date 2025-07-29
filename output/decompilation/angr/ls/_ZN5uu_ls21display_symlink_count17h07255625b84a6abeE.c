long long uu_ls::display_symlink_count(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = a1;
    a0.spec_to_string(&v0);
    return v0;
}
