fn uu_stat::precision_trunc(a0: i64, a1: u64, a2: u64) -> int {
    let v0: struct24;  // [bp-0xd0]
    let v1: Result<struct24, struct24>;  // [bp-0xd0]
    let v2: Result<struct24, struct24>;  // [bp-0xd0]
    let v3: core::fmt::rt::Argument;  // [bp-0xc0], Other Possible Types: u64
    let v4: struct24;  // [bp-0xa0]
    let v5: u64;  // [bp-0x98]
    let v6: u64;  // [bp-0x90]
    let v7: u128;  // [bp-0x88]
    let v8: struct24;  // [bp-0x78], Other Possible Types: u64
    let v9: alloc::string::String;  // [bp-0x48], Other Possible Types: u192
    let v12: u64;  // r15
    let v13: u64;  // r14
    let v14: u64;  // rdx
    let v15: u64;  // rax
    let v18: u64;  // rdx
    let v20: u64;  // rdx
    let v24: u128;  // xmm0

    v4 = <T as alloc::string::SpecToString>::spec_to_string(&vvar_87{reg 224});
    v12 = v5;
    v13 = v6;
    if (core::str::<impl str>::find(v12, v13) & 1) {
        if a1 {
            if a1 == 1 {
                return struct24 {
                    field_0: v4.field_0
                    field_16: v6
                };
            }
            if a2 {
                v15 = v13 - v14;
                if a2 >= v15 {
                    v2 = alloc::slice::<impl [T]>::repeat(a2 - v15 + 1);
                    v8 = v3;
                    v7 = v2 as i128;
                    v9 = format!("{}{}", &v4, &v7);
LABEL_474903:
                    *((a0 + 16) as &i64) = *((&v9 as &char + 16) as &i64);
                }
                v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v14 + a2 + 1, v12, v13) as u64, a2);
            } else {
                v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v18, v12, v13) as u64, a2);
            }
        } else {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v20, v12, v13) as u64, a2);
        }
        return struct24 {
            field_0: v24
            field_16: v3
        };
    } else {
        if !a1 || a1 == 1 || !a2 {
            return struct24 {
                field_0: v4.field_0
                field_16: v6
            };
        }
        v1 = alloc::slice::<impl [T]>::repeat(a2);
        v8 = v3;
        v7 = v1 as i128;
        v9 = format!("{}.{}", &v4, &v7);
        goto LABEL_474903;
    }
}
