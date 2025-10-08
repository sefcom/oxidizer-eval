fn zoxide::cmd::edit::<impl zoxide::cmd::cmd::Edit>::get_fzf(a0: u64) -> int {
    let v0: struct208;  // [bp-0x1d8], Other Possible Types: struct224
    let v1: struct16;  // [bp-0x1d8], Other Possible Types: u64
    let v2: u64;  // [bp-0x1d0]
    let v3: struct16;  // [bp-0xf8]
    let v4: u8;  // [bp-0xe8]

    v0 = zoxide::util::Fzf::new();
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        memcpy(&v4, &v0 as u8, 208);
        v3 = v1;
        v0 = struct208 {
            field_0: "--exact"
            field_16: "--no-sort"
            field_32: "--bind=btab:up,ctrl-r:reload(zoxide edit reload),ctrl-d:reload(zoxide edit delete {2..}),ctrl-w:reload(zoxide edit increment {2..}),ctrl-s:reload(zoxide edit decrement {2..}),ctrl-z:ignore,double-click:ignore,enter:abort,start:reload(zoxide edit reload),tab:down"
            field_48: "--cycle"
            field_64: "--keep-right"
            field_80: "--border=sharp"
            field_96: "--border-label=  zoxide-edit  "
            field_112: "--header=ctrl-r:reload   \tctrl-d:delete\nctrl-w:increment\tctrl-s:decrement\n\n SCORE\tPATH"
            field_128: "--info=inline"
            field_144: "--layout=reverse"
            field_160: "--padding=1,0,0,0"
            field_176: "--color=label:bold"
            field_192: "--tabstop=1"
        };
        std::process::Command::args(&v3, &v0);
        zoxide::util::Fzf::enable_preview(&v3);
        zoxide::util::Fzf::spawn(a0, &v3);
        return;
    }
    return struct16 {
        field_0: 1
        padding_4: <UNKNOWN>
        field_8: v2
    };
}
