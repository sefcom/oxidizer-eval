fn starship::modules::custom::handle_shell(a0: &struct16, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x40]
    let v1: void*;  // [bp-0x38]
    let v3: struct72;  // rax
    let v4: struct16;  // ebp
    let v5: u64;  // r12
    let v6: struct24;  // rsi
    let v7: u64;  // rax

    v3 = std::path::Path::file_stem(a1, a2);
    v4 = vvar_52{reg 56} & -0x100 | 1;
    if !v3 {
        return v4 as u64;
    }
    v0 = core::str::converts::from_utf8(v3, a2);
    match v0 {
        Err(_) => {
            return v4 as u64;
        },
        Ok(_) => {
            v5 = *((&v0 as &char + 16) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "pwsh") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "powershell") as u8 {
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "cmd") as u8 {
                    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "nu");
                    if !(v7 as u8 & (!a3) as u8 as u8) {
                        return (v7 as u32 & -0x100 | (v7 as u8 ^ 1) as u32) as u64;
                    }
                } else if a3 {
                    return 0;
                }
                std::process::Command::arg(a0, v6, 2);
                return 0;
            }
            if a3 {
                return v4 as u64;
            }
            std::process::Command::arg(a0, "-NoProfile");
            std::process::Command::arg(a0, "-Command");
            std::process::Command::arg(a0, "-");
            return v4 as u64;
        },
    }
}
