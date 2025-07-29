long long uu_tail::follow::files::FileHandling::get_mut_metadata(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = a0.get_mut(a1, a2);
    if (*(v3) != 2)
        return v3;
    return 0;
}
