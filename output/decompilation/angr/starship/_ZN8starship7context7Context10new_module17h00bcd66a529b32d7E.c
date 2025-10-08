long long starship::context::Context::new_module(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v5;  // rdx

    v0 = v2;
    v3 = a1 + 488.get_module_config(a2, a3);
    a0.new(a2, a3, starship::modules::description(a2, a3), v5, v3);
    return a0;
}
