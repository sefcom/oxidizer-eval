fn uu_cp::Attributes::parse_single_string(a1: &str) -> Result<struct24, struct12> {
    let a0: void*;  // rdi
    let v0: void*;  // [bp-0xb8]
    let v1: u32;  // [bp-0xb0]
    let v2: alloc::string::String;  // [bp-0xa8]
    let v3: i64;  // [bp-0xa0]
    let v4: i64;  // [bp-0x98]
    let v5: struct16;  // [bp-0x80]
    let v6: Result<struct4, struct8>;  // [bp-0x78]
    let v7: struct16;  // [bp-0x70]
    let v8: struct17;  // [bp-0x68]
    let v9: u128;  // [bp-0x60]
    let v10: u64;  // [bp-0x50]
    let v12: u64;  // rsi
    let v13: u64;  // rdx
    let v14: u64;  // rax
    let v15: i64;  // rax
    let v16: u64;  // rax

    v2 = alloc::str::<impl str>::to_lowercase(v12, v13);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "all") {
        return struct24 {
            field_0: v14
            field_8: 1103823438081
            field_16: 65793
        };
    }
    v1 = 0;
    v0 = 0;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "mode") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "ownership") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "timestamps") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "context") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "link") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "links") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "xattr") {
        v5 = 0;
        v6 = v3;
        v7 = v4;
        v8 = 1;
        format!("invalid attribute {}", &v5);
        *(&a0[24] as &u64) = v10;
        *(&a0[8] as &u128) = v9;
        v16 = 9223372036854775816;
    }
    *(v15 as &i16) = 257;
    *(&a0[16] as &u32) = v1;
    *(&a0[8] as &void*) = v0;
}
