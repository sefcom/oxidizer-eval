long long fd::cli::Opts::strip_cwd_prefix(struct_0 *a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (!a0->field_b0 && !a0->field_c8)
    {
        v3 = a0->field_1f7.map_or();
        if (!(char)v3)
        {
            return fd::construct_config::{{closure}}(a1, a2);
        }
        else if ((unsigned int)v3 == 1)
        {
            return v3 & 0xffffffffffffff00 | 1;
        }
    }
    return 0;
}
