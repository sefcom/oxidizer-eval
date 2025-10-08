fn zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_fzf() -> Result<struct32, struct8> {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x1f0]
    let v1: struct176;  // [bp-0x1d8], Other Possible Types: struct224
    let v2: u64;  // [bp-0x1d8]
    let v3: u64;  // [bp-0x1d0]
    let v4: u64;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: u8;  // [bp-0xe8]

    v1 = zoxide::util::Fzf::new();
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return Err(v3);
    }
    memcpy(&v6, &v1 as u8, 208);
    v4 = v1.field_0;
    v5 = v3;
    v0 = zoxide::config::fzf_opts();
    if v0.field_0 == 0x8000000000000000 {
        v1 = struct176 {
            field_0: "--exact"
            field_16: "--no-sort"
            field_32: "--bind=ctrl-z:ignore,btab:up,tab:down"
            field_48: "--cycle"
            field_64: "--keep-right"
            field_80: "--border=sharp"
            field_96: "--height=45%"
            field_112: "--info=inline"
            field_128: "--layout=reverse"
            field_144: "--tabstop=1"
            field_160: "--exit-0"
        };
        std::process::Command::args(&v4, &v1);
        zoxide::util::Fzf::enable_preview(&v4);
    } else {
        std::process::Command::env(&v4, &v0);
    }
    zoxide::util::Fzf::spawn(a0, &v4);
    return;
}
