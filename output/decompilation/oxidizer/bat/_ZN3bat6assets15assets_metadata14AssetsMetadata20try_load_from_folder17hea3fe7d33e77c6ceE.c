fn bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder(a0: i64, a1: i64, a2: i64) -> double {
    let v0: Result<struct4, struct8>;  // [bp-0x48]
    let v1: struct160;  // [bp-0x44]
    let v2: u64;  // [bp-0x40]
    let v3: struct24;  // [bp-0x38]
    let v4: u64;  // [bp-0x30]
    let v5: struct16;  // [bp-0x28]
    let v6: i8;  // [bp-0x18]
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax

    v3 = std::path::Path::join(a1, a2, "metadata.yaml");
    v0 = std::fs::File::open(&v3);
    match v0 {
        Err(v8) => {
            return struct16 {
                field_0: 0
                padding_1: <UNKNOWN>
                field_8: v9
            };
        },
        Ok(_) => {
            serde_yaml::de::from_reader(&v3, v1 as u64);
            v10 = v4;
            if v3.field_0 as i64 != 9223372036854775809 {
                return struct48 {
                    field_0: 13
                    padding_1: <UNKNOWN>
                    field_8: v3.field_0 as i64
                    field_16: v4
                    field_24: v5
                    field_40: *(&v6 as &i64)
                };
            }
            return struct1 {
                field_0: 6
            };
        },
    }
}
