fn uu_uniq::Uniq::cmp_key(a0: i64, a1: i64, a2: i64, a3: &struct24) -> u64 {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x78], Other Possible Types: struct24
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: struct24;  // [bp-0x60]
    let v4: u64;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: Result<struct24, struct24>;  // [bp-0x48]
    let v8: u64;  // [bp-0x40]
    let v10: void*;  // rcx
    let v11: u64;  // r12
    let v12: void*;  // r12
    let v13: u64;  // r13
    let v14: u32;  // eax
    let v15: u64;  // r12
    let v16: u64;  // r13
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v20: u64;  // rdi

    v7 = uu_uniq::Uniq::skip_fields(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2);
    v11 = *((&v7 as &char + 16) as &i64);
    v12 = v11 - v10;
    v13 = (v11 > v10 ? v8 + v10 : 1);
    v0 = core::str::converts::from_utf8(v13, v12);
    match v0 {
        Err(_) => {
            v0 = struct24 {
                field_0: v13
                field_8: v12 + v13
                field_16: <UNKNOWN>
            };
            v14 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_4f57a8) as u32;
        },
        Ok(_) => {
            v15 = v1;
            v16 = v2 + v15;
            v17 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v15, v16);
            v18 = v17;
            if *((a0 + 32) as &i8) {
                v18 = *((a0 + 40) as &i64);
            }
            v20 = v18;
            v4 = v15;
            v5 = v16;
            v6 = core::cmp::Ord::min(v20, v17);
            if *((a0 + 52) as &i8) {
                v0 = v3;
                v14 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_4f5770) as u32;
            } else {
                v14 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v4, &g_4f5738) as u32;
            }
        },
    }
    return v14;
}
