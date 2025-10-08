fn bat::syntax_mapping::builtin::build_matcher_dynamic(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: void*;  // [bp-0xd8], Other Possible Types: struct8
    let v1: u64;  // [bp-0xd0]
    let v2: void*;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u128;  // [bp-0xb8]
    let v5: Result<struct96, struct65>;  // [bp-0xa8]
    let v6: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xa8]
    let v7: Option<struct248>;  // [bp-0xa0]
    let v8: struct88;  // [bp-0x90]
    let v9: iNone;  // [bp-0x80]
    let v10: struct32;  // [bp-0x70]
    let v11: struct72;  // [bp-0x60]
    let v12: u64;  // [bp-0x50]
    let v13: u128;  // [bp-0x48]
    let v15: Option<struct24>;  // r14
    let v16: struct32;  // rdx
    let v17: struct32;  // rbp
    let v18: struct32;  // rbp
    let v24: u64;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    if a2 {
        loop {
            v18 = v17;
            if !(*((v15 - 8) as &i8) & 1) {
                v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(*(v15 as &i64));
                v15 += 24;
                v17 = v18 - 24;
                if v18 == 24 {
                    break;
                }
            } else {
                v6 = std::env::var(v15, v16);
                v13 = *((&v6 as &char + 16) as &i128);
                v4 = v13;
                v3 = v7;
                v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v4 as i32);
                v15 += 24;
                v17 = v18 - 24;
                if v18 == 24 {
                    break;
                }
            }
        }
    }
    v5 = bat::syntax_mapping::make_glob_matcher(0x1, 0);
    return struct96 {
        field_0: v24
        field_8: *((&v5 as &char + 8) as &i128)
        field_24: v8
        field_40: v9
        field_56: v10
        field_72: v11
        field_88: v12
    };
}
