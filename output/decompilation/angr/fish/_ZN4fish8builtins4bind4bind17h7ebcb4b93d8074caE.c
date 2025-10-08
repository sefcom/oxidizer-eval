long long fish::builtins::bind::bind(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2], unsigned int a3)
{
    char v0;  // [bp-0x78]
    unsigned long long v2;  // rax

    v0.new();
    v2 = v0.bind(a0, a1, a2, a3);
    core::ptr::drop_in_place<fish::builtins::bind::BuiltinBind>(&v0);
    return v2;
}
