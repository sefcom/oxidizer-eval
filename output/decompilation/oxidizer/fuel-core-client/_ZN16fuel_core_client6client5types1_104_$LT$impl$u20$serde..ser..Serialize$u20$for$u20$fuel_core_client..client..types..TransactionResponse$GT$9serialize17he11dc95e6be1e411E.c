fn fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionResponse>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct48;  // [bp-0x78]
    let v1: iNone;  // [bp-0x68]
    let v2: iNone;  // [bp-0x58]
    let v3: Result<struct24, struct9>;  // [bp-0x48]
    let v4: struct48;  // [bp-0x48]
    let v5: u128;  // [bp-0x48]
    let v6: u64;  // [bp-0x40]
    let v7: iNone;  // [bp-0x38]
    let v8: iNone;  // [bp-0x28]
    let v10: u64;  // rax

    v3 = <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct("TransactionResponse");
    if v3 as i64 == 9223372036854775810 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v6
        };
    }
    v0 = v4;
    v10 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v0, a1 + 136) as u64;
    if v10 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v10
        };
    }
    v10 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v0, a1) as u64;
    if !v10 {
        v8 = v2;
        v7 = v1;
        v5 = *(&v0.field_0 as &i128);
        <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end(a0, &v3);
        return;
    }
    return struct16 {
        field_0: 6
        padding_1: <UNKNOWN>
        field_8: v10
    };
}
