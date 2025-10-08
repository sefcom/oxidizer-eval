fn uu_cp::copy_fifo(a0: u64, a1: u64, a2: u64, a3: u8, a4: u32) -> long long {
    let v0: u32;  // [bp-0xe4]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v2: Option<struct1>;  // [bp-0xe0]
    let v3: iNone;  // [bp-0xd0]
    let v4: u128;  // [bp-0xc0]
    let v6: u64;  // rax
    let v7: u64;  // rax

    v0 = a4;
    v1 = std::fs::metadata(a1, a2);
    if let Ok(_) = v1 {
        v2 = uu_cp::OverwriteMode::verify(a3, a1, a2, v0 as i8);
        match v2 {
            Some(_) => {
                return struct56 {
                    field_0: v2
                    field_16: v3
                    field_32: v4
                    field_48: *((&v1 as &char + 48) as &i64)
                };
            },
            None => {
                v6 = std::fs::remove_file(a1 as u32, a2 as u32);
                if v6 {
                    return struct16 {
                        field_0: 9223372036854775809
                        field_8: v6
                    };
                }
            },
        }
    }
    v7 = uucore::features::fs::make_fifo(a1, a2);
    if v7 {
        return uu_cp::copy_fifo::{{closure}}(a0, a1, a2, v7) as u64;
    }
    return struct8 {
        field_0: 9223372036854775820
    };
}
