fn bat::assets::assets_metadata::AssetsMetadata::save_to_folder(a0: i64, a1: u64, a2: void*, a3: u32) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x40]
    let v1: core::fmt::rt::Argument;  // [bp-0x3c]
    let v2: core::fmt::rt::Argument;  // [bp-0x38]
    let v3: struct24;  // [bp-0x30]
    let v5: u64;  // rax

    v3 = std::path::Path::join(a2, a3, "metadata.yaml");
    v0 = std::fs::File::create(&v3);
    match v0 {
        Err(_) => {
            return struct16 {
                field_0: 0
                padding_1: <UNKNOWN>
                field_8: v2
            };
        },
        Ok(_) => {
            v5 = serde_yaml::ser::to_writer(v1 as u64, a1);
            if !v5 {
                return struct1 {
                    field_0: 13
                };
            }
            return struct16 {
                field_0: 6
                padding_1: <UNKNOWN>
                field_8: v5
            };
        },
    }
}
