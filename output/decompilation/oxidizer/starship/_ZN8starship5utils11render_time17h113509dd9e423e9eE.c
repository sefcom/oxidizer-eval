fn starship::utils::render_time(a1: i64, a2: i64, a3: i8, a4: i64, a5: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x134]
    let v1: i64;  // [bp-0x130]
    let v2: struct24;  // [bp-0x128], Other Possible Types: struct32
    let v3: Option<struct56>;  // [bp-0x118]
    let v4: struct24;  // [bp-0x110]
    let v5: u64;  // [bp-0x100], Other Possible Types: unsigned long
    let v6: u64;  // [bp-0xf8]
    let v7: u64;  // [bp-0xf0]
    let v8: struct128;  // [bp-0xe8]
    let v9: struct24;  // [bp-0x68], Other Possible Types: u8
    let v10: &str;  // [bp-0x58]
    let v11: struct24;  // [bp-0x48]
    let v13: struct24;  // rsi
    let v14: u64;  // rdx
    let v15: core::fmt::rt::Argument;  // rax
    let v16: core::str::pattern::CharSearcher;  // rcx
    let v19: u64;  // rdx
    let v20: struct361;  // rsi
    let v21: struct40;  // rax
    let v22: Option<struct24>;  // rax
    let v23: core::str::pattern::CharSearcher;  // rax
    let v24: Result<struct48, struct32>;  // rcx
    let v25: struct24;  // r13

    if !(a3 & (!a1 && !a2)) && (_ccall(2, 16, 0, a2 ^ (999 < a1) as u8 as u64, (999 < a1) as u8 as u64) || a3) {
        v0 = a3;
        v15 = __udivti3(a1, a2, 1000, 0, a4, a5);
        v16 = v15;
        v6 = a1 - (v15 * 1000) as u64;
        v20 = (v19 * 0x4000000000000000 | v16 >> 2) + (v19 >> 2) + (((v19 * 0x4000000000000000 | v16 >> 2) + (v19 >> 2) <= (v19 * 0x4000000000000000 | v16 >> 2) ? 1 : 0) & 1);
        v7 = a2 - (v19 * 1000 + v15 / 18446744073709552) - (a1 < (v15 * 1000) as u64);
        v21 = __udivti3(a1, a2, 60000, 0, a2 - (v19 * 1000 + v15 / 18446744073709552) - (a1 < (v15 * 1000) as u64), a5);
        v22 = __udivti3(a1, a2, 3600000, 0, a4, a5);
        v23 = __udivti3(a1, a2, 0x5265c00, 0, a4, a5);
        v25 = v0.field_0;
        v8 = struct128 {
            field_0: v23
            field_8: v19
            field_16: "d"
            field_32: (v22 as u32 & 7) as u64 + ((v19 >> 3) + (v19 * 0x2000000000000000 | v22 >> 3) + (((v19 >> 3) + (v19 * 0x2000000000000000 | v22 >> 3) <= v19 >> 3 ? 1 : 0) & 1)) % 3 * 8
            field_40: 0
            field_48: "h"
            field_64: (v21 as u32 & 3) as u64 + ((v19 >> 2) + (v19 * 0x4000000000000000 | v21 >> 2) + (((v19 >> 2) + (v19 * 0x4000000000000000 | v21 >> 2) <= v19 >> 2 ? 1 : 0) & 1)) % 15 * 4
            field_72: 0
            field_80: "m"
            field_96: (v16 as u32 & 3) as u64 + (v20 - ((v20 / 15) as u32 * 15) as u64) * 4
            field_104: 0
            field_112: "s"
        };
        v2 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v25 * 5 + v24, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs");
        v3 = 0;
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v8, &v9, &v2);
        if !v25 as u8 {
            *((v1 + 16) as &unsigned long) = v5;
            *(v1 as &u128) = v4.field_0;
            return;
        }
        v10 = v5;
        v9 = v4.field_0;
        v2 = <T as alloc::string::SpecToString>::spec_to_string(&v6);
        v11 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v9, v19);
        <alloc::string::String as core::ops::arith::Add<&str>>::add(a0, &v11, &g_5434d1);
        return;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, v13, v14);
    return;
}
