fn starship::config::_::<impl serde_core::de::Deserialize for starship::config::Either<A,B>>::deserialize(a0: i64, a1: i64) -> double {
    let v0: u64;  // [bp-0x60]
    let v1: u64;  // [bp-0x60]
    let v2: i8;  // [bp-0x5f]
    let v3: &str;  // [bp-0x5c]
    let v4: i8;  // [bp-0x58], Other Possible Types: u128
    let v5: u128;  // [bp-0x58]
    let v6: struct24;  // [bp-0x50], Other Possible Types: char
    let v7: Option<struct48>;  // [bp-0x48]
    let v8: Result<struct24, struct24>;  // [bp-0x40]
    let v9: struct24;  // [bp-0x40], Other Possible Types: u64
    let v10: i64;  // [bp-0x30]
    let v11: struct72;  // [bp-0x28]
    let v12: u32;  // [bp-0x27]
    let v13: &str;  // [bp-0x24]
    let v14: struct24;  // [bp-0x20]
    let v15: &str;  // [bp-0x18]
    let v17: u8;  // al
    let v19: <anon>;  // xmm0lq
    let v20: u64;  // rdx
    let v21: struct16;  // xmm0lq

    serde_core::de::Deserializer::__deserialize_content_v1(&v0, a1);
    v17 = v0;
    if v17 == 22 {
        return struct24 {
            field_0: 2
            field_8: *(&v4 as &i128)
        };
    }
    v13 = v3;
    v12 = *(&v2 as &i32);
    v11 = v17;
    v14 = *(&v4 as &i64);
    v15 = *(&v6 as &i128);
    v8 = serde_core::de::impls::<impl serde_core::de::Deserialize for alloc::vec::Vec<T>>::deserialize(&v11);
    if (((0 ^ v8 as i64) & (0 ^ -(v9))) >> 63) as char {
        v4 = *((&v8 as &char + 8) as &i128);
        v0 = 2;
        v9 = <starship::config::VecOr<T> as serde_core::de::Deserialize>::deserialize(&v11);
        if v9.field_0 == 0x8000000000000000 {
            v19 = *(&v9.field_8 as &i128);
            v4 = *(&v9.field_8 as &i128);
            v0 = 2;
            return struct24 {
                field_0: 2
                field_8: <serde_core::de::value::Error as serde_core::de::Error>::custom("data did not match any variant of untagged enum Either")
                field_16: v20
            };
        }
        v7 = v10;
        v21 = *(&v9.field_0 as &i128);
        v5 = *(&v9.field_0 as &i128);
        v1 = 1;
    } else {
        v7 = v10;
        v21 = v8 as i128;
        v5 = v8 as i128;
        v1 = 0;
    }
    return struct32 {
        field_0: v1
        field_8: v5 as i64
        field_16: v6
        field_24: v7
    };
}
