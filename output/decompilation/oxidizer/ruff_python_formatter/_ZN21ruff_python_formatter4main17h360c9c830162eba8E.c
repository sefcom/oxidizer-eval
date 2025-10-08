fn ruff_python_formatter::main() -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0xb8], Other Possible Types: u64
    let v1: u64;  // [bp-0xb8]
    let v2: void*;  // [bp-0xb0]
    let v3: u64;  // [bp-0xa8]
    let v4: std::io::stdio::Stdout;  // [bp-0xa0], Other Possible Types: struct40, Result<struct24, struct16>
    let v5: std::io::stdio::Stdout;  // [bp-0xa0], Other Possible Types: u64
    let v6: void*;  // [bp-0x98]
    let v7: u64;  // [bp-0x90]
    let v8: void*;  // [bp-0x70]
    let v9: struct32;  // [bp-0x68]
    let v10: i64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: u24;  // [bp-0x4b]
    let v13: alloc::string::String;  // [bp-0x48]
    let v15: u64;  // rbx
    let v16: i64;  // r13
    let v17: u64;  // rbx
    let v18: u64;  // r13
    let v19: core::result::Result<(), std::io::error::Error>;  // rax
    let v20: u64;  // rax
    let v22: void*;  // rbx
    let v23: void*;  // r15
    let v24: core::result::Result<(), std::io::error::Error>;  // rax

    v4 as u256 = clap_builder::derive::Parser::parse();
    if v11 {
        loop {
            v17 = v15;
            std::fs::read_to_string(v16, v10);
            v0 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v16, *((v10 + 8) as &i64), *((v10 + 16) as &i64));
            v23 = v2;
            if let Err(_) = v0 {
                break;
            }
            v8 = v23;
            ruff_python_formatter::cli::format_and_debug_print(v16, v8, v3, &v4 as u256, *((v10 + 8) as &i64), *((v10 + 16) as &i64));
            v23 = v6;
            if v5 == 0x8000000000000000 {
                break;
            }
            v18 = v7;
            if v12 as i8 != 2 && (v12 as i8 & 1) {
                v5 = std::io::stdio::stdout();
                v1 = std::io::stdio::Stderr::lock(&v5);
                v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v23, v18);
                if let Err(_) = v19 {
                    v23 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v19);
                }
            } else {
                v20 = std::fs::write(v10, v23, v18);
                v23 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v20, *((v10 + 8) as &i64), *((v10 + 16) as &i64));
                if v23 {
                    break;
                }
            }
            v10 += 24;
            v16 = &v5;
            v15 = v17 - 24;
            if v17 == 24 {
                break;
            }
        }
    } else if *((&v9.field_16 as &char + 13) as &i8) == 2 || (*((&v9.field_16 as &char + 13) as &i8) & 1) {
        v4 = ruff_python_formatter::read_from_stdin();
        v23 = v6;
        if !((((0 ^ v4 as i64) & (0 ^ -(v5))) >> 63) as char) {
            v22 = v23;
            v4 = ruff_python_formatter::cli::format_and_debug_print(v22, v7, &v4 as u256, "stdin.py");
            v23 = v6;
            if let Ok(_) = v4 {
                if !*((&v9.field_16 as &char + 8) as &i8) {
                    v4 = std::io::stdio::stdout();
                    v0 = std::io::stdio::Stderr::lock(&v4) as u64;
                    v24 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v23, v7);
                    if let Err(_) = v24 {
                        v23 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v24);
                    }
                } else if !alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v23, v7, v22, v7) as u8 {
                    v4 = struct40 {
                        field_0: "Content not correctly formatted"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v23 = anyhow::__private::format_err(&v4);
                }
            }
        }
    } else {
        v13 = format!("Can only write to stdout when formatting from stdin, but you asked for {}", &v9 as u8);
        v23 = anyhow::error::<impl anyhow::Error>::msg(&v13);
    }
    return v23;
}
