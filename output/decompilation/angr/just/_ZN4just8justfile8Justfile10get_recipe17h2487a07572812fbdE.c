long long just::justfile::Justfile::get_recipe(unsigned long long a0[89], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[89];  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long *v4;  // rax
    unsigned long v5;  // rdi

    v4 = a0[87].get(a0[88], a1, a2);
    v5 = (!v4 ? 0 : *(v4) + 16);
    v0[0] = a0;
    v1 = a1;
    v2 = a2;
    return (!v4 ? 0 : *(v4) + 16).or_else(&v0);
}
