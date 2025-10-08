fn fd::output::print_entry_format(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: Result<struct24, struct24>;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: core::fmt::rt::Argument;  // [bp-0x70]
    let v4: u128;  // [bp-0x70]
    let v5: core::fmt::Arguments;  // [bp-0x60]
    let v6: Result<struct24, struct24>;  // [bp-0x30]
    let v8: u64;  // rax
    let v9: void*;  // r8
    let v10: u64;  // rdx

    v8 = fd::dir_entry::DirEntry::stripped_path(a1, *((a2 + 487) as &i8));
    v0 = fd::fmt::FormatTemplate::generate(a3, v8, v10, v9, *((a2 + 376) as &i64));
    v6 = alloc::string::String::from_utf8_lossy(v1, v2);
    v3 = core::fmt::rt::Argument {
        ty: &v6
    };
    v5 = core::fmt::Arguments {
        pieces: [&g_470810]
        args: [v4]
        fmt: 0
    };
    return std::io::Write::write_fmt(a0, &v5);
}
