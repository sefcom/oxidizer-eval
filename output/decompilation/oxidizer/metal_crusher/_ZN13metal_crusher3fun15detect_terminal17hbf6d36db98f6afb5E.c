fn metal_crusher::fun::detect_terminal() -> long long {
    let v0: u64;  // [bp-0x1a8]
    let v1: u64;  // [bp-0x1a0]
    let v2: u128;  // [bp-0x198]
    let v3: &str;  // [bp-0x190]
    let v4: u64;  // [bp-0x188]
    let v5: i64;  // [bp-0x178]
    let v6: u64;  // [bp-0x170]
    let v7: struct112;  // [bp-0x168]
    let v8: alloc::string::String;  // [bp-0xf8]
    let v9: u64;  // [bp-0xe8]
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v11: u64;  // [bp-0xd8]
    let v12: i64;  // [bp-0xd0]
    let v13: u64;  // [bp-0xc8]
    let v14: void*;  // [bp-0xc0]
    let v16: u64;  // rax
    let v17: u64;  // rdx
    let v18: u64;  // rcx
    let v19: u64;  // r8
    let v20: u64;  // rbx

    v7 = struct112 {
        field_0: "kgx"
        field_16: "ghostty"
        field_32: "konsole"
        field_48: "alacritty"
        field_64: "gnome-terminal"
        field_80: "xterm"
        field_96: 0
        field_104: 6
    };
    loop {
        v16 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v7);
        if !v16 {
            break;
        }
        v0 = v16;
        v1 = v17;
        v5 = &v0;
        v6 = <&T as core::fmt::Display>::fmt;
        v10 = "/usr/bin/";
        v11 = 1;
        v14 = 0;
        v12 = &v5;
        v13 = 1;
        v8 = core::option::Option<T>::map_or_else(&v10, v17, v18, v19);
        v2 = *(&v8.vec.buf.inner.cap as &i128);
        v4 = v9;
        v10 = std::fs::metadata(v3, v9);
        if v10 as i64 != 2 {
            v20 = v0;
        }
    }
    return v20;
}
