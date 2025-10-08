fn fd::print_completions(a1: i32) -> : struct2 {
    let a0: i64;  // rdi
    let v0: core::option::Option<alloc::string::String>;  // [bp-0x308]
    let v1: u64;  // [bp-0x308]
    let v2: &u8;  // [bp-0x300]
    let v3: u64;  // [bp-0x2f8]
    let v4: std::io::stdio::Stdout;  // [bp-0x2f0]
    let v5: std::env::Args;  // [bp-0x2e8], Other Possible Types: struct712
    let v6: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x2e8]
    let v7: core::fmt::Arguments;  // [bp-0x2e0]
    let v9: struct24;  // r15
    let v10: u64;  // r14
    let v11: core::fmt::Arguments;  // r15
    let v12: u64;  // rax
    let v13: u64;  // rdx

    v5 = std::env::args();
    v0 = <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v5);
    v9 = &g_47b4bb;
    v10 = 2;
    v11 = &g_47b4bb;
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v12 = std::path::Path::file_stem(v2, v3);
        v11 = v9;
        if v12 {
            v6 = core::str::converts::from_utf8(v12, v13);
            if let Ok(_) = v6 {
                v11 = v7;
            }
        }
    }
    v5 = <fd::cli::Opts as clap_builder::derive::CommandFactory>::command();
    v5 = clap_builder::builder::command::Command::build();
    v4 = std::io::stdio::stdout();
    clap_complete::aot::generator::generate(a1, &v5, v11, v10, &v4);
    return struct2 {
        field_0: 0x200
    };
}
