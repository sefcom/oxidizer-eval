fn spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::PointerWidth>::serialize(a0: u64, a1: i64, a2: u64) -> long long {
    let v1: u64;  // r9
    let v2: u64;  // r8
    let v3: u64;  // 4096

    if *(a1 as &i8) {
        v1 = &g_412573;
        v2 = 1;
        v3 = a0;
    } else {
        v1 = &g_41256e;
        v2 = 0;
        v3 = a0;
    }
    <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(v3, a2, "PointerWidth", v2, v1, 5);
    return a0;
}
