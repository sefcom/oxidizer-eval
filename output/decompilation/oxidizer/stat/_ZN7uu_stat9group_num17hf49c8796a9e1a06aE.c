fn uu_stat::group_num(a0: i64, a1: core::option::Option<&str>, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x50], Other Possible Types: u32
    let v1: void*;  // [bp-0x38]
    let v4: u64;  // rdx
    let v5: u8;  // al
    let v6: i64;  // r13
    let v7: u64;  // 4096
    let v8: &str;  // r13
    let v10: core::option::Option<&str>;  // rax
    let v11: i64;  // r12
    let v13: core::option::Option<&str>;  // rax
    let v15: &mut [u8];  // rax:rdx

    v0 = 0;
    v15 = core::char::methods::encode_utf8_raw(45, &v0, a2);
    v5 = core::slice::<impl [T]>::starts_with(a1, a2, v15.data_ptr, v15.length);
    if !v5 {
        v0 = struct24 {
            field_0: a1
            field_8: a1 + a2
            field_16: 1
        };
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::take::Take<I> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, a1) {
            core::panicking::panic("assertion failed: is_negative || s.chars().take(1).all(|c| c.is_ascii_digit())"); /* do not return */
        }
    }
    v0 = struct24 {
        field_0: a1
        field_8: a1 + a2
        field_16: 1
    };
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, a1) {
        core::panicking::panic("assertion failed: s.chars().skip(1).all(|c| c.is_ascii_digit())"); /* do not return */
    } else if a2 < 4 {
        *(&v1[8] as &core::option::Option<&str>) = a1;
        *(&v1[16] as &u64) = a2;
        *(v1 as &i64) = 0x8000000000000000;
        return 0x8000000000000000;
    } else {
        v6 = a2 - 1;
        v0 = struct24 {
            field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(v6 / 3, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs")
            field_8: v4
            field_16: 0
        };
        v7 = a2;
        if v5 {
            alloc::string::String::push(&v0, 45);
            v8 = 1;
            a1 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a1, a2) as u64;
            v6 = v4 - 1;
            v7 = v4;
        }
        v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(-(v6 / 3 * 3) + v6 + 1, a1, v7) as u64;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v10, v4 + v10);
        while (1 - v7 + v11 != 4) {
            alloc::string::String::push(&v0, 44);
            v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v11 - 3, v11, a1, v7) as u64;
            v11 += 3;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v13, v4 + v13);
        }
        *(&v1[16] as &i64) = 0;
        *(v1 as &i128) = *(&v0.field_0 as &i128);
        return 0;
    }
}
