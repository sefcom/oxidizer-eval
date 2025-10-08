fn starship::modules::ocaml::parse_opam_switch(a1: i64, a2: i64) -> : struct33 {
    let a0: i64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x88], Other Possible Types: struct24
    let v1: u64;  // [bp-0x80]
    let v2: u32;  // [bp-0x78], Other Possible Types: unsigned long
    let v3: struct20;  // [bp-0x70]
    let v4: u128;  // [bp-0x69]
    let v5: Result<struct32, struct9>;  // [bp-0x59], Other Possible Types: struct24
    let v6: struct24;  // [bp-0x59]
    let v7: u8;  // [bp-0x36]
    let v8: struct24;  // [bp-0x30]
    let v10: u64;  // rax
    let v11: struct24;  // rax

    if a2 {
        v3 = std::path::Path::components(a1, a2);
        if !v7 && v3.field_16 - 5 < 2 {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
            v5 = v2;
            v4 = *(&v0.field_0 as &i128);
            return struct40 {
                field_0: 0
                field_1: <UNKNOWN>
                field_16: v6
                field_24: <UNKNOWN>
            };
        }
        v11 = std::path::Path::file_name(a1, a2);
        if v11 {
            v0 = core::str::converts::from_utf8(v11, a2);
            if let Ok(_) = v0 {
                v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v1, v2);
                v5 = v8.field_16;
                v4 = *(&v8.field_0 as &i128) as u128;
                return struct1 {
                    field_0: 1
                };
            }
        }
    }
    *((a0 + 8) as &i64) = 0x8000000000000000;
    return;
}
