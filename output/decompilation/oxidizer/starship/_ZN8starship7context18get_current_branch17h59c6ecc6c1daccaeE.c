fn starship::context::get_current_branch(a0: i64, a1: u64) -> int {
    let v0: struct96;  // [bp-0x68]
    let v1: Result<struct72, struct32>;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v4: u64;  // r14
    let v5: u64;  // rax
    let v6: u64;  // r14

    v4 = 0x8000000000000000;
    v1 = gix::repository::reference::<impl gix::types::Repository>::head_name(a1);
    v5 = v2;
    v0 = *((&v1 as &char + 16) as &i128);
    return struct24 {
        field_0: v6
        field_8: v0
    };
}
