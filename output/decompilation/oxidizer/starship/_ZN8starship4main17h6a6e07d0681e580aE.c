fn starship::main() -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0xb18], Other Possible Types: struct_0 *
    let v1: u128;  // [bp-0xb18]
    let v2: u64;  // [bp-0xb10]
    let v3: core::result::Result<(), std::io::error::Error>;  // [bp-0xaf8]
    let v4: i64;  // [bp-0xad8]
    let v5: u64;  // [bp-0xac8]
    let v6: core::fmt::Arguments;  // [bp-0xab8], Other Possible Types: struct40, u64
    let v7: std::env::Args;  // [bp-0x9e8], Other Possible Types: struct40
    let v8: Result<struct208, struct9>;  // [bp-0x918], Other Possible Types: u64
    let v9: i64;  // [bp-0x910], Other Possible Types: u64
    let v10: i64;  // [bp-0x908]
    let v11: u64;  // [bp-0x900]
    let v12: &str;  // [bp-0x8f8]
    let v13: u64;  // [bp-0x30]
    let v14: u64;  // [bp-0x28]
    let v15: u64;  // [bp-0x20]
    let v16: u64;  // [bp-0x18]
    let v17: u64;  // [bp-0x10]
    let v19: u64;  // r15
    let v20: u64;  // r14
    let v21: u64;  // r13
    let v22: u64;  // r12
    let v23: u64;  // rbx
    let v24: u32;  // edi
    let v25: iNone;  // xmm0

    v17 = v19;
    v16 = v20;
    v15 = v21;
    v14 = v22;
    v13 = v23;
    starship::logger::init();
    starship::init_global_threadpool();
    rayon_core::spawn::spawn();
    v8 = clap_builder::derive::Parser::try_parse();
    if &v8 != "\r" {
        memcpy(&v6, &v8, 208);
        v0 = &v6;
        v2 = <starship::Cli as core::fmt::Debug>::fmt;
        v8 = "Parsed arguments: ";
        v9 = 1;
        v12 = "\x02";
        v10 = &v0;
        v11 = 1;
        v7 = struct40 {
            field_0: "starship"
            field_16: "starship"
            field_32: log::__private_api::loc("src/main.rs")
        };
        log::__private_api::log(&v8, &v7);
    }
    v4 = v9;
    v6 = clap_builder::error::Error<F>::print(&v4);
    v24 = 0;
    if (*((v9 + 249) as &i8) & 29) != 12 {
        v5 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v7 = std::env::args();
        v25 = *(&v7.inner.inner.iter.buf as &i128);
        v6 = struct40 {
            field_0: v25
            field_16: *(&v7.inner.inner.iter.cap as &i128)
            field_32: 1
        };
        core::iter::traits::iterator::Iterator::collect(&v7, &v6);
        v0 = core::fmt::rt::Argument {
            ty: &v7
        };
        v6 = core::fmt::Arguments {
            pieces: ["\nNOTE:\n    passed arguments: ", "\n"]
            args: [v1]
            fmt: 0
        };
        v3 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v5, &v6);
    }
    std::process::exit(v24); /* do not return */
}
