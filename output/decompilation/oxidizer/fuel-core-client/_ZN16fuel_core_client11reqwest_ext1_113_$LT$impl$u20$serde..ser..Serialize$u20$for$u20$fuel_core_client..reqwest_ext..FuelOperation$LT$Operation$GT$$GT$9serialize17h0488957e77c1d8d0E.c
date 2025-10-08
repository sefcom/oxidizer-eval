fn fuel_core_client::reqwest_ext::_::<impl serde::ser::Serialize for fuel_core_client::reqwest_ext::FuelOperation<Operation>>::serialize(a0: i64, a1: &u64) -> long long {
    let v0: struct10;  // [bp-0x28]
    let v1: u128;  // [bp-0x28]
    let v2: u32;  // [bp-0x24]
    let v3: u64;  // [bp-0x20]
    let v4: u8;  // [bp-0x18]
    let v5: u32;  // [bp-0x17]
    let v6: u32;  // [bp-0x14]
    let v7: u64;  // [bp-0x10]
    let v9: u8;  // al
    let v10: u64;  // rax
    let v11: u64;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_map(a1);
    v9 = v0.field_0;
    if v9 == 2 {
        return v3;
    }
    v6 = v2;
    v5 = *((&v0.field_0 as &char + 1) as &i32);
    v4 = v9;
    v7 = v3;
    v10 = <cynic::operation::Operation<QueryFragment,Variables> as serde::ser::Serialize>::serialize(a0, &v4);
    if v10 {
        return v10;
    }
    v11 = serde::ser::SerializeMap::serialize_entry(&v4, *((a0 + 80) as &i32), *((a0 + 84) as &i32));
    if !v11 {
        v1 = *(&v4 as &i128);
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeMap>::end(&v0);
        return 0;
    }
    return v11;
}
