char fish::parse_util::IndentVisitor::has_newline(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rax
    void* v4;  // rdx

    v3 = a2.try_source(a0, a1);
    if (!v3)
        v4 = 0;
    if (!v3)
        v3 = 4;
    v0 = v3;
    v1 = v3 + v4 * 4;
    return v0.try_fold().eq(1);
}
