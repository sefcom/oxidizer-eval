long long zoxide::cmd::edit::<impl zoxide::cmd::cmd::Edit>::get_fzf(struct_0 *a0)
{
    char v0;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x1d0]
    char v2;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1c0]
    unsigned long long v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1b0]
    unsigned long long v6;  // [bp-0x1a8]
    unsigned long long v7;  // [bp-0x1a0]
    unsigned long long v8;  // [bp-0x198]
    unsigned long long v9;  // [bp-0x190]
    unsigned long long v10;  // [bp-0x188]
    unsigned long long v11;  // [bp-0x180]
    unsigned long long v12;  // [bp-0x178]
    unsigned long long v13;  // [bp-0x170]
    unsigned long long v14;  // [bp-0x168]
    unsigned long long v15;  // [bp-0x160]
    unsigned long long v16;  // [bp-0x158]
    unsigned long long v17;  // [bp-0x150]
    unsigned long long v18;  // [bp-0x148]
    unsigned long long v19;  // [bp-0x140]
    unsigned long long v20;  // [bp-0x138]
    unsigned long long v21;  // [bp-0x130]
    unsigned long long v22;  // [bp-0x128]
    unsigned long long v23;  // [bp-0x120]
    unsigned long long v24;  // [bp-0x118]
    unsigned long long v25;  // [bp-0x110]
    unsigned long long v26;  // [bp-0xf8]
    unsigned long long v27;  // [bp-0xf0]
    char v28;  // [bp-0xe8]

    v0.new();
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        memcpy(&v28, &v2, 208);
        v26 = v0;
        v27 = v1;
        v0 = "--exact--no-sort--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide";
        v1 = 7;
        v2 = "--no-sort--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide edit r";
        v3 = 9;
        v4 = "--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide edit reload),tab:down";
        v5 = 262;
        v6 = "--cycle--keep-right--border=sharp--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge t";
        v7 = 7;
        v8 = "--keep-right--border=sharp--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to conti";
        v9 = 12;
        v10 = "--border=sharp--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v11 = 14;
        v12 = "--border-label=  zoxide-edit  --header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v13 = 30;
        v14 = "--header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v15 = 86;
        v16 = "--info=inline--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v17 = 13;
        v18 = "--layout=reverse";
        v19 = 16;
        v20 = "--padding=1,0,0,0--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v21 = 17;
        v22 = "--color=label:bold--tabstop=1current database is not empty, specify --merge to continue anyway";
        v23 = 18;
        v24 = "--tabstop=1current database is not empty, specify --merge to continue anyway";
        v25 = 11;
        v26.args(&v0);
        v26.enable_preview();
        a0.spawn(&v26);
        return core::ptr::drop_in_place<zoxide::util::Fzf>(&v26);
    }
    a0->field_8 = v1;
    a0->field_0 = 1;
    return -(v0);
}
