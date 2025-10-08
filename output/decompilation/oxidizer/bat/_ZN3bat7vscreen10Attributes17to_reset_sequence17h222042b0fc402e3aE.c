fn bat::vscreen::Attributes::to_reset_sequence(a0: &struct24, a1: i64) -> u64 {
    let v0: alloc::string::String;  // [bp-0x28]
    let v1: struct8;  // [bp-0x28]
    let v2: Result<struct24, struct16>;  // [bp-0x18]
    let v4: u64;  // rdx

    v0 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(17, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs");
    v2 = 0;
    if a1 {
        v1 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&g_5a2feb);
    }
    return struct24 {
        field_0: v1
        field_8: v4
        field_16: 0
    };
}
