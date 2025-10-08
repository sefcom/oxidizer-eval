long long fish::parser::Parser::set_var_and_fire(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, void* a4)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x60]
    unsigned long long v3;  // rax

    v3 = a0 + 472.set(a1, a2, a3, a4);
    if ((char)v3)
        return v3;
    v0.to_vec(a1, a2);
    v1.variable_set(&v0);
    fish::event::fire(a0, &v1);
    return v3 & 4294967295;
}
