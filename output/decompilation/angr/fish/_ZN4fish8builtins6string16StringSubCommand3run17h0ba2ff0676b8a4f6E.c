long long fish::builtins::string::StringSubCommand::run(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0 = v2;
    return (((char)a0.run_impl(a1, a2, a3, a4) & 1) ? v3 * 0x100000000 + 1 : 0);
}
