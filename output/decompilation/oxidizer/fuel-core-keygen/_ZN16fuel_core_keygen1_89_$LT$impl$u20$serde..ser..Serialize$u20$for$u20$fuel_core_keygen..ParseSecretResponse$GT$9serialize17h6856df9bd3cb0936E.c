fn fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::ParseSecretResponse>::serialize(a0: u64, a1: i64) -> int {
    let v0: Result<struct24, struct9>;  // [bp-0x88]
    let v1: i64;  // [bp-0x88]
    let v2: u128;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: iNone;  // [bp-0x78]
    let v5: iNone;  // [bp-0x68]
    let v6: u64;  // [bp-0x50]
    let v7: u64;  // [bp-0x48]
    let v8: iNone;  // [bp-0x40]
    let v9: iNone;  // [bp-0x30]
    let v11: u64;  // rax

    v0 = <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct("ParseSecretResponse");
    if v0 as i64 == 9223372036854775810 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v3
        };
    }
    v8 = v4;
    v9 = v5;
    v6 = v0 as i64;
    v7 = v3;
    if *((a1 + 88) as &i8) {
        v11 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v6, a1 + 88) as u64;
        if v11 {
            return struct16 {
                field_0: 6
                padding_1: <UNKNOWN>
                field_8: v11
            };
        }
    }
    if *(a1 as &i64) {
        v1 = a1;
        v11 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v6, &v1) as u64;
        if v11 {
            return struct16 {
                field_0: 6
                padding_1: <UNKNOWN>
                field_8: v11
            };
        }
    }
    v11 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v6, a1 + 121) as u64;
    if !v11 {
        v5 = v9;
        v4 = v8;
        v2 = *(&v6 as &i128);
        <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end(a0, &v2);
        return;
    }
    return struct16 {
        field_0: 6
        padding_1: <UNKNOWN>
        field_8: v11
    };
}
