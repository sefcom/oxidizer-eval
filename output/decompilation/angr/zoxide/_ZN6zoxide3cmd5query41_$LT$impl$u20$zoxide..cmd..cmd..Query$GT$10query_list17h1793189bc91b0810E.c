long long zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_list(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x98]
    char *v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    void* v3;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5[3];  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    unsigned long long v13;  // rax
    void* v14;  // rax
    unsigned long long v15[3];  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17[3];  // r13

    v7 = std::io::stdio::stdout();
    v0 = v7.lock();
    if ((a0->field_4b & 1))
    {
        if ((char)(((0 ^ a0->field_18) & (0 ^ -(a0->field_18))) >> 63))
        {
            do
            {
                v13 = a1.next();
                if (!v13)
                    goto LABEL_490261;
                v3 = 1;
                v4 = a2;
                v5 = v13;
                v6 = 32;
                v1 = &v3;
                v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
                v7 = &g_534950;
                v8 = 2;
                v11 = 0;
                v9 = &v1;
                v10 = 1;
                v14 = v0.write_fmt(&v7).pipe_exit("stdoutcould not read selection from fzfno match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 6);
            } while (!v14);
        }
        else
        {
            while (true)
            {
                v15 = a1.next();
                if (!v15)
                    break;
                if ((char)v15[1].equal(v15[2], a0->field_20, a0->field_28))
                    continue;
                v3 = 1;
                v4 = a2;
                v5[0] = v15;
                v6 = 32;
                v1 = &v3;
                v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
                v7 = &g_534950;
                v8 = 2;
                v11 = 0;
                v9 = &v1;
                v10 = 1;
                if (v0.write_fmt(&v7).pipe_exit("stdoutcould not read selection from fzfno match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 6))
                    goto LABEL_49025c;
            }
        }
        goto LABEL_49025c;
    }
    else if ((char)(((0 ^ a0->field_18) & (0 ^ -(a0->field_18))) >> 63))
    {
        do
        {
            v16 = a1.next();
            if (!v16)
                goto LABEL_490261;
            v5 = v16;
            v3 = 0;
            v6 = 32;
            v1 = &v3;
            v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
            v7 = &g_534950;
            v8 = 2;
            v11 = 0;
            v9 = &v1;
            v10 = 1;
            v14 = v0.write_fmt(&v7).pipe_exit("stdoutcould not read selection from fzfno match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 6);
        } while (!v14);
LABEL_49025c:
    }
    else
    {
        while (true)
        {
            v17 = a1.next();
            if (!v17)
                break;
            if ((char)v17[1].equal(v17[2], a0->field_20, a0->field_28))
                continue;
            v5[0] = v17;
            v3 = 0;
            v6 = 32;
            v1 = &v3;
            v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
            v7 = &g_534950;
            v8 = 2;
            v11 = 0;
            v9 = &v1;
            v10 = 1;
            if (v0.write_fmt(&v7).pipe_exit("stdoutcould not read selection from fzfno match foundyou are already in the only match--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path", 6))
                goto LABEL_49025c;
        }
LABEL_490261:
        v14 = 0;
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v14;
}
