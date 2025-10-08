fn fuel_core_keygen::serialize_option_to_string(a0: u64, a1: i64) -> void {
    let v0: struct24;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]

    if *(a1 as &i32) != 1 {
        <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_none(a0);
        return;
    }
    v0 = <T as alloc::string::ToString>::to_string(a1 + 8);
    <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_str(a0, v1, v0.field_16);
    return;
}
