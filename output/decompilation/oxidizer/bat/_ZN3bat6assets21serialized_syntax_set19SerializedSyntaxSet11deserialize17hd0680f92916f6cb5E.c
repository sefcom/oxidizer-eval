fn bat::assets::serialized_syntax_set::SerializedSyntaxSet::deserialize(a0: u64, a1: void*) -> long long {
    let v0: struct104;  // [bp-0x68]
    let v2: u64;  // rbx
    let v3: u64;  // r14
    let v4: u64;  // rax

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        return bat::assets::asset_from_cache(a0, a1[8] as i64, a1[16] as i64);
    }
    v0 = struct104 {
        field_0: bat::assets::asset_from_contents(a1[8] as i64, a1[16] as i64, "n/a")
        field_88: v2
        field_96: v3
    };
    v4 = core::result::Result<T,E>::expect(a0 + 8, &v0) as u64;
    return struct8 {
        field_0: 0
    };
}
