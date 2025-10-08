fn forc_crypto::address::handle_string_conversion(a1: i64) -> Result<struct33, struct9> {
    let a0: i64;  // rdi
    let v1: u64;  // [bp-0x48]
    let v2: Result<struct33, struct17>;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v8: u64;  // rdx
    let v9: u8;  // al
    let v10: u8;  // al
    let v11: iNone;  // xmm0

    v1 = core::str::converts::from_utf8(<alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(*((a1 + 8) as &i64), *((a1 + 16) as &i64)), v8);
    match v1 as u192 {
        Err(_) => {
            v1 = v3;
            v3 = v5;
            return struct16 {
                field_0: 1
                padding_1: <UNKNOWN>
                field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v1 as u192)
            };
        },
        Ok(_) => {
            v4 = v3;
            v5 = v3;
            v2 = <fuel_types::array_types::Address as core::str::traits::FromStr>::from_str(v3, v3);
            match v2 {
                Ok(_) => {
                    v11 = *((&v2 as &char + 1) as &i128);
                    *((a0 + 17) as &i128) = *((&v2 as &char + 17) as &i128);
                    *((a0 + 1) as void*) = v11;
                },
                Err(_) => {
                    v9 = 1;
                    return struct16 {
                        field_0: v10
                        padding_1: <UNKNOWN>
                        field_8: forc_crypto::address::handle_string_conversion::{{closure}}(&v4)
                    };
                },
            }
        },
    }
}
