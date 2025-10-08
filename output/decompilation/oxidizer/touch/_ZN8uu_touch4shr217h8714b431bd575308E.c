fn uu_touch::shr2(a1: &str) -> : struct24 {
    let a0: i64;  // rdi
    let v0: Option<struct32>;  // [bp-0x50]
    let v1: struct24;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v5: u64;  // rsi
    let v6: u64;  // rdx

    v0 = core::str::<impl str>::split_at_checked(v5, v6, v6 - 2);
    v1 = struct24 {
        field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(v6, 1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs")
        field_8: v6
        field_16: 0
    };
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, v3, *((&v0 as &char + 24) as &i64) + v3);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1, v1.field_0, v2 + v1.field_0);
    return struct24 {
        field_0: *(&v1.field_0 as &i128)
        field_16: 0
    };
}
