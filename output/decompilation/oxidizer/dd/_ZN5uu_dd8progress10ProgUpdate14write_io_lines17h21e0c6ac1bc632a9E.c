fn uu_dd::progress::ProgUpdate::write_io_lines(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x54]
    let v1: core::option::Option<&str>;  // [bp-0x50], Other Possible Types: u384
    let v2: core::time::Duration;  // [bp-0x50]
    let v3: &str;  // [bp-0x48], Other Possible Types: core::option::Option<&str>
    let v4: u64;  // [bp-0x40], Other Possible Types: struct_0 *
    let v5: u64;  // [bp-0x38]
    let v6: void*;  // [bp-0x30]
    let v7: i64;  // [bp-0x20]
    let v8: u64;  // [bp-0x18]
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: core::result::Result<u64, std::io::error::Error>;  // eax

    v10 = uu_dd::progress::ReadStat::report(a0 + 16, a1);
    if v10 {
        return v10;
    }
    v11 = uu_dd::progress::WriteStat::report(a0 + 48, a1);
    if v11 {
        return v11;
    }
    v12 = *((a0 + 40) as &i32);
    match v12 {
        Ok(_) => {
            return 0;
        },
        Err(_) => {
            match v12 {
                Err(_) => {
                    v1 = "1 truncated record\n";
                    v3 = 1;
                    v4 = 8;
                    v5 = 0 as u128;
                },
                Ok(_) => {
                    v0 = v12;
                    v7 = &v0;
                    v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v2 = &g_5622e8.secs;
                    v3 = 2;
                    v6 = 0;
                    v4 = &v7;
                    v5 = 1;
                },
            }
            vvar_113{stack -80} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5176257, None), vvar_92{stack -80}), ((5176301, None), vvar_99{stack -80})]}), 16: &[core::fmt::rt::Argument] OrderedDict()})
            return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1);
        },
    }
}
