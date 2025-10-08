long long zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_first(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x98]
    char *v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5[3];  // [bp-0x70]
    unsigned int v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    unsigned long long v13[3];  // rdx
    unsigned long long v14[3];  // r12
    unsigned long long v15;  // rax

    v0 = std::io::stdio::stdout();
    if (((char)a1.next().context("no match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 14) & 1))
        return v14;
    if (!((char)(((0 ^ a0->field_18) & (0 ^ -(a0->field_18))) >> 63)))
    {
        while (true)
        {
            if (!(char)v14[1].equal(v14[2], a0->field_20, a0->field_28))
                break;
            v14 = v13;
            if (((char)a1.next().context("you are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 33) & 1))
                return v13;
        }
    }
    if (a0->field_4b)
    {
        v4 = a2;
        v15 = 1;
    }
    else
    {
        v15 = 0;
    }
    v3 = v15;
    v5[0] = v14;
    v6 = 32;
    v1 = &v3;
    v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
    v7 = &g_534950;
    v8 = 2;
    v11 = 0;
    v9 = &v1;
    v10 = 1;
    return v0.write_fmt(&v7).pipe_exit("stdoutcould not read selection from fzfno match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 6);
}
