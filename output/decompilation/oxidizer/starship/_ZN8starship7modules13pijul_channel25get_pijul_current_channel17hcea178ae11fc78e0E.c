fn starship::modules::pijul_channel::get_pijul_current_channel(a1: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0xb8]
    let v1: u64;  // [bp-0xb0]
    let v2: &str;  // [bp-0xa8]
    let v3: core::str::pattern::CharSearcher;  // [bp-0x98]
    let v4: struct24;  // [bp-0x98]
    let v5: struct16;  // [bp-0x98]
    let v6: struct32;  // [bp-0x88]
    let v7: struct24;  // [bp-0x78]
    let v8: Option<struct48>;  // [bp-0x60], Other Possible Types: struct66
    let v9: u64;  // [bp-0x60]
    let v10: struct32;  // [bp-0x50]
    let v11: u128;  // [bp-0x40]
    let v13: core::option::Option<&str>;  // xmm0
    let v14: struct24;  // rax
    let v15: u32;  // rdx

    v8 = starship::context::Context::exec_cmd(a1, "pijul", "channel", 1);
    if (((0 ^ v8 as i64) & (0 ^ -(v9))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v13 = v8 as i128;
    v7 = v11;
    v6 = v10;
    v5 = v13;
    v0 = v5;
    v2 = v6.field_0;
    v3 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v1, v2);
    v8 = struct66 {
        field_0: 0
        field_8: v2
        field_16: *(&v3.haystack.data_ptr as &i128)
        field_32: *(&v3.finger as &i128)
        field_48: v7
        field_64: 0
    };
    v14 = core::iter::traits::iterator::Iterator::try_fold(&v8);
    if !v14 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, v15);
    return Some(struct24 {
        field_0: *(&v4.field_0 as &i128)
        field_16: v4.field_16
    });
}
