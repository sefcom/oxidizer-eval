long long uu_env::parse_program_opt(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x10]

    if (!a0->field_99)
    {
        v0.to_vec("cannot specify --null (-0) with command-: uu_env(uutils coreutils) 0.0.30Set each NAME to VALUE in the environment and run COMMAND{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]A mere - implies -i. If no COMMAND, print the resulting environment.ignor", 39);
        v1 = 125;
        return v0.new();
    }
    a0->padding_0[72].push(a1, a2, &g_510850);
    return 0;
}
