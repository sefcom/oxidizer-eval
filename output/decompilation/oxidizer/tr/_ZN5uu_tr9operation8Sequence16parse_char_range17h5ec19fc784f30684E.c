fn uu_tr::operation::Sequence::parse_char_range(a1: i64, a2: i64) -> Result<struct32, struct32> {
    let a0: i64;  // rdi
    let v0: struct33;  // [bp-0x38]
    let v1: u8;  // [bp-0x20]
    let v2: u128;  // [bp-0x18]
    let v4: u64;  // rax
    let v5: u64;  // rcx
    let v6: u8;  // cc_dep1
    let v7: u8;  // cc_dep2
    let v8: u128;  // xmm0
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // r8
    let v12: u32;  // edx
    let v13: void*;  // rax

    v2 = struct16 {
        field_0: &g_41e5cc
        field_8: 1
    };
    v0 = nom::sequence::separated_pair::{{closure}}(&v2, a1, a2);
    if v0.field_0 as i32 != 3 {
        v8 = *(&v0.field_0 as &i128);
        v9 = 1;
        return struct48 {
            field_0: v10
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    v4 = v1;
    v5 = (&v0.field_24)[1];
    v6 = v4;
    v7 = v5;
    *((a0 + 8) as &i128) = *(&v0.field_8 as &i128);
    *((a0 + 24) as &u64) = v11;
    *((a0 + 32) as &u32) = v12;
    *((a0 + 36) as &u32) = v4;
    v13 = 0;
}
