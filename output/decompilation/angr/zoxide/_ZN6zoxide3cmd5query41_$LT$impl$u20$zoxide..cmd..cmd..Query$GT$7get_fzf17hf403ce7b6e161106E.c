long long zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_fzf(struct_0 *a0)
{
    char v0;  // [bp-0x1f0], Other Possible Types: unsigned long
    char v1;  // [bp-0x1e8]
    char v2;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1d0]
    char v4;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x1c0]
    unsigned long long v6;  // [bp-0x1b8]
    unsigned long long v7;  // [bp-0x1b0]
    unsigned long long v8;  // [bp-0x1a8]
    unsigned long long v9;  // [bp-0x1a0]
    unsigned long long v10;  // [bp-0x198]
    unsigned long long v11;  // [bp-0x190]
    unsigned long long v12;  // [bp-0x188]
    unsigned long long v13;  // [bp-0x180]
    unsigned long long v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x170]
    unsigned long long v16;  // [bp-0x168]
    unsigned long long v17;  // [bp-0x160]
    unsigned long long v18;  // [bp-0x158]
    unsigned long long v19;  // [bp-0x150]
    unsigned long long v20;  // [bp-0x148]
    unsigned long long v21;  // [bp-0x140]
    unsigned long long v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x130]
    unsigned long long v24;  // [bp-0xf8]
    unsigned long long v25;  // [bp-0xf0]
    char v26;  // [bp-0xe8]

    v2.new();
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
    {
        a0->field_8 = v3;
        a0->field_0 = 1;
        return -(v2);
    }
    memcpy(&v26, &v4, 208);
    v24 = v2;
    v25 = v3;
    zoxide::config::fzf_opts(&v0);
    if (v0 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, *((long long *)&v1));
        v2 = "--exact--no-sort--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide";
        v3 = 7;
        v4 = "--no-sort--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide edit r";
        v5 = 9;
        v6 = "--bind=ctrl-z:ignore,btab:up,tab:down--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path";
        v7 = 37;
        v8 = "--cycle--keep-right--border=sharp--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge t";
        v9 = 7;
        v10 = "--keep-right--border=sharp--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to conti";
        v11 = 12;
        v12 = "--border=sharp--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v13 = 14;
        v14 = "--height=45%path not found in database: _ZO_DATA_DIR must be an absolute path";
        v15 = 12;
        v16 = "--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v17 = 13;
        v18 = "--layout=reverse";
        v19 = 16;
        v20 = "--tabstop=1current database is not empty, specify --merge to continue anyway";
        v21 = 11;
        v22 = "--exit-0KEYWORDSCommands\n";
        v23 = 8;
        v24.args(&v2);
        v24.enable_preview();
    }
    else
    {
        v24.env(&v0);
    }
    a0.spawn(&v24);
    return core::ptr::drop_in_place<zoxide::util::Fzf>(&v24);
}
