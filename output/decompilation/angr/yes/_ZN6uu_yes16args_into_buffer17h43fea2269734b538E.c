long long uu_yes::args_into_buffer(unsigned long long a0, unsigned long long *a1)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0x58]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    if (!*(a1))
        return a0.append_elements("y\n: \nTry ' --help' for more information.\n", 2, &g_562e98);
    v1.map(a1);
    itertools::free::intersperse(&v0, &v1, " /mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/yes/src/yes.rs", 1);
    if (!v0.next())
        return a0.push(10, &g_562e68);
    do
    {
        a0.append_elements(v3, v4, &g_562e80);
        v3 = v0.next();
    } while (v3);
    return a0.push(10, &g_562e68);
}
