fn bat::assets::assets_metadata::AssetsMetadata::load_from_folder(a0: i64, a1: void*, a2: u64) -> long long {
    let v0: struct24;  // [sp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: struct41;  // [bp-0x120]
    let v4: i64;  // [bp-0xf8]
    let v5: u128;  // [bp-0xf0]
    let v6: u128;  // [bp-0xe0]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v9: core::fmt::rt::Argument;  // xmm0
    let v10: iNone;  // xmm0
    let v11: iNone;  // xmm1
    let v12: Result<struct4, struct8>;  // xmm2

    v3 = bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder(a1, a2);
    if &v3 == "\r" {
        v9 = *(&v3.field_8 as &i128);
        return struct48 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v9
            field_24: v3.field_24
            field_40: v4
        };
    } else if v3.field_0 == 6 {
        v10 = *(&v3.field_0 as &i128);
        v11 = *(&v3.field_16 as &i128);
        v12 = *((&v3.field_24 as &char + 8) as &i128);
        return struct80 {
            field_0: v10
            field_16: v11
            field_32: v12
            field_48: v5
            field_64: v6
        };
    } else {
        v0 = std::path::Path::join(a1, a2, "syntaxes.bin");
        v7 = std::fs::metadata(v1, v2);
        if v7 as i64 != 2 {
            return struct32 {
                field_0: 13
                padding_1: <UNKNOWN>
                field_8: 0x8000000000000000
                padding_16: <UNKNOWN>
                field_40: <UNKNOWN>
            };
        }
        v0 = std::path::Path::join(a1, a2, "themes.bin");
        v7 = std::fs::metadata(v1, v2);
        if v7 as i64 == 2 {
            *((a0 + 8) as &i64) = 9223372036854775809;
        }
        return struct32 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: 0x8000000000000000
            padding_16: <UNKNOWN>
            field_40: <UNKNOWN>
        };
    }
}
