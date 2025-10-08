long long fd::cli::Opts::gen_completions(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x18]
    char v1;  // [bp-0x17]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    if (a1 == 6)
    {
        a0->field_1 = 5;
    }
    else
    {
        fd::cli::Opts::gen_completions::{{closure}}(&v0, a1);
        if ((v0 & 1))
        {
            v4 = *((long long *)&v2);
            a0->field_8 = v4;
            a0->field_0 = 1;
            return v4 & 0xffffffffffffff00 | 1;
        }
        a0->field_1 = v1;
    }
    a0->field_0 = 0;
    return 0;
}
