fn fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::NewKeyResponse>::serialize(a0: u64, a1: i64) -> int {
    let v0: struct48;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: iNone;  // [bp-0x78]
    let v3: iNone;  // [bp-0x68]
    let v4: Result<struct24, struct9>;  // [bp-0x58]
    let v5: struct48;  // [bp-0x58], Other Possible Types: u128
    let v6: i64;  // [bp-0x58]
    let v7: iNone;  // [bp-0x48]
    let v8: iNone;  // [bp-0x38]
    let v10: u64;  // rax

    v4 = <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct("NewKeyResponse");
    if v4 as i64 == 9223372036854775810 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v1
        };
    }
    v0 = v5;
    v10 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v0, a1 + 88) as u64;
    if v10 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v10
        };
    }
    if *((a1 + 120) as &i8) {
        v10 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v0, a1 + 120) as u64;
        if !v10 {
            goto LABEL_481c06;
        }
    } else {
LABEL_481c06:
        if *(a1 as &i64) {
            v6 = a1;
            v10 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v0, &v6) as u64;
            if !v10 {
                goto LABEL_481c22;
            }
        } else {
LABEL_481c22:
            v10 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v0, a1 + 153) as u64;
            if !v10 {
                v8 = v3;
                v7 = v2;
                v5 = *(&v0.field_0 as &i128);
                <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end(a0, &v5);
                return;
            }
        }
    }
    return struct16 {
        field_0: 6
        padding_1: <UNKNOWN>
        field_8: v10
    };
}
