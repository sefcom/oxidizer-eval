char fish::builtins::shared::builtin_exists(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return fish::builtins::shared::builtin_lookup(a0, a1);
}
