long long uu_yes::args_into_buffer(unsigned long long a0, unsigned long long *a1)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0x58]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    if (!*(a1))
        return a0.spec_extend("y\n", &g_41723e);
    v1.map(a1);
    itertools::free::intersperse(&v0, &v1);
    if (!v0.next())
        return a0.push();
    do
    {
        a0.spec_extend(v3, v4 + v3);
        v3 = v0.next();
    } while (v3);
    return a0.push();
}
