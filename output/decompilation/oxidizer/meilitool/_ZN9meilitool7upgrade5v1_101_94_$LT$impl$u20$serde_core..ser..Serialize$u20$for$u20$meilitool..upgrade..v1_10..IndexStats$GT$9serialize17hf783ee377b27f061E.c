fn meilitool::upgrade::v1_10::_::<impl serde_core::ser::Serialize for meilitool::upgrade::v1_10::IndexStats>::serialize(a0: i64, a1: u64) -> long long {
    let v0: u8;  // [bp-0x28]
    let v1: u32;  // [bp-0x27]
    let v2: u32;  // [bp-0x24]
    let v3: u64;  // [bp-0x20]
    let v4: Result<struct9, struct8>;  // [bp-0x18]
    let v5: u32;  // [bp-0x14]
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: Result<struct24, struct16>;  // rax

    v4 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, "IndexStats", 6);
    if v4 as i8 == 2 {
        return *((&v4 as &char + 8) as &i64);
    }
    v2 = v5;
    v1 = *((&v4 as &char + 1) as &i32);
    v0 = v4 as i8;
    v3 = *((&v4 as &char + 8) as &i64);
    v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "number_of_documents", *((a0 + 32) as &i64));
    if v7 {
        return v7;
    }
    v8 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "database_size", *((a0 + 40) as &i64));
    if v8 {
        return v8;
    }
    v9 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "used_database_size", *((a0 + 48) as &i64));
    if v9 {
        return v9;
    }
    v10 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, a0 + 56);
    if v10 {
        return v10;
    }
    v11 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, a0);
    if let Ok(_) = v11 {
        return v11;
    }
}
