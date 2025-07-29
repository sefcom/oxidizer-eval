fn flealib::commandprocessor::_::<impl serde::ser::Serialize for flealib::commandprocessor::FleaConfig>::serialize(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: u128;  // [bp-0x208]
    let v1: u64;  // [bp-0x1f8]
    let v2: struct42;  // [bp-0x1f0]
    let v3: Option<struct24>;  // [bp-0x1f0], Other Possible Types: u192
    let v4: Option<struct24>;  // [bp-0x1f0], Other Possible Types: u192
    let v5: u64;  // [bp-0x1f0]
    let v6: u64;  // [bp-0x1e0]
    let v7: u64;  // [bp-0x1d8]
    let v8: u64;  // [bp-0x108]
    let v9: u128;  // [bp-0x100]
    let v10: u64;  // [bp-0xf0]
    let v11: u8;  // [bp-0xe8]

    v2 = <toml::ser::Serializer as serde::ser::Serializer>::serialize_struct(a2, "FleaConfig", 9);
    v0 = v2.field_8;
    v1 = v7;
    if v2.field_0 == 9223372036854775809 {
        return struct24 {
            field_0: v0
            field_16: v1
        };
    }
    memcpy(&v11, &v2 as u8, 200);
    v9 = v0;
    v10 = v1;
    v8 = v2.field_0;
    v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "ftp_user", a1);
    if let Some(_) = v3 {
        return struct24 {
            field_0: v3 as i128
            field_16: v6
        };
    }
    v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "ftp_pass", a1 + 24);
    if let None = v3 {
        v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "ftp_address", a1 + 48);
        if let None = v3 {
            v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "ftp_folder", a1 + 72);
            if let None = v3 {
                v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "smtp_user_name", a1 + 96);
                if let None = v3 {
                    v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "smtp_pass", a1 + 120);
                    if let None = v3 {
                        v3 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "smtp_host", a1 + 144);
                        if let None = v3 {
                            v4 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "email_address_to", a1 + 168);
                            if let Some(_) = v4 {
                                return struct24 {
                                    field_0: v5
                                    field_8: *((&v4 as &char + 8) as &i128)
                                };
                            }
                            v4 = <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::serialize_field(&v8, "email_address_from", a1 + 192);
                            if let None = v4 {
                                memcpy(&v4, &v8, 232);
                                <toml::ser::map::SerializeDocumentTable as serde::ser::SerializeStruct>::end(a0, &v4);
                                return a0;
                            }
                            return struct24 {
                                field_0: v5
                                field_8: *((&v4 as &char + 8) as &i128)
                            };
                        }
                    }
                }
            }
        }
    }
    return struct24 {
        field_0: v3 as i128
        field_16: v6
    };
}
