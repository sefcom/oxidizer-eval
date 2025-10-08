fn zoxide::main() -> long long {
    let v0: struct64;  // [bp-0xc0]
    let v1: struct9;  // [bp-0xb8]
    let v2: i64;  // [bp-0xb0]
    let v3: core::result::Result<(), std::io::error::Error>;  // [bp-0xa8]
    let v4: std::io::stdio::Stderr;  // [bp-0xa0]
    let v5: core::fmt::rt::Argument;  // [bp-0x98]
    let v6: u128;  // [bp-0x98]
    let v7: core::fmt::Arguments;  // [bp-0x88]
    let v8: struct80;  // [bp-0x58]
    let v10: &void*;  // rax
    let v11: u32;  // ebx

    std::env::remove_var("RUST_LIB_BACKTRACE");
    std::env::remove_var("RUST_BACKTRACE");
    v8 = clap_builder::derive::Parser::parse();
    v10 = <zoxide::cmd::cmd::Cmd as zoxide::cmd::Run>::run(&v8) as u64;
    if v10 {
        v1 = anyhow::error::<impl anyhow::Error>::downcast(v10);
        if v1.field_0 == 1 {
            v0 = v2;
            v4 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v5 = core::fmt::rt::Argument {
                ty: &v0
            };
            v7 = core::fmt::Arguments {
                pieces: ["zoxide: ", "\n"]
                args: [v6]
                fmt: 0
            };
            v3 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v4, &v7);
        }
    }
    return v11;
}
