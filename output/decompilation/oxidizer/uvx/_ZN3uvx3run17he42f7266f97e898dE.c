fn uvx::run(a0: i64) -> int {
    let v0: u64;  // [bp-0x158]
    let v1: u8;  // [bp-0x150]
    let v2: u32;  // [bp-0x148]
    let v3: u64;  // [bp-0x140]
    let v4: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>;  // [bp-0x138], Other Possible Types: struct24
    let v5: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x110], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>, std::env::ArgsOs, struct16, struct224
    let v6: Result<struct24, struct16>;  // [bp-0x110], Other Possible Types: u64
    let v7: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>;  // [bp-0x110]
    let v8: u64;  // [bp-0x108]
    let v10: u64;  // rbx
    let v11: u64;  // rax
    let v13: u64;  // rdx

    v5 = std::env::current_exe();
    v10 = v8;
    if (((0 ^ v5 as i64) & (0 ^ -(v6))) >> 63) as char {
        return struct16 {
            field_0: 1
            padding_4: <UNKNOWN>
            field_8: v10
        };
    }
    v11 = std::path::Path::parent(v10, *((&v5 as &char + 16) as &i64));
    if !v11 {
        return struct16 {
            field_0: 1
            padding_4: <UNKNOWN>
            field_8: std::io::error::Error::new(0, "Could not determine the location of the `uvx` binary")
        };
    }
    v6 = uvx::get_uv_path(v11, v13, uvx::get_uvx_suffix(v10, *((&v5 as &char + 16) as &i64)), v13);
    match v6 {
        Ok(_) => {
            v0 = *((&v6 as &char + 16) as &i64);
            v5 = std::env::args_os();
            v4 = v7;
            v5 = core::iter::traits::iterator::Iterator::chain(&v4, v13);
            core::iter::traits::iterator::Iterator::collect(&v1, &v5);
            v4 = struct24 {
                field_0: v5.b as i64
                field_8: v8
                field_16: v0
            };
            v5 = std::process::Command::new(&v4);
            v5 = std::process::Command::args(v2, v3);
            return struct16 {
                field_0: 1
                padding_4: <UNKNOWN>
                field_8: uvx::exec_spawn(&v5)
            };
        },
        Err(_) => {
            return struct16 {
                field_0: 1
                padding_4: <UNKNOWN>
                field_8: v8
            };
        },
    }
}
