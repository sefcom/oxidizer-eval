fn zoxide::util::tmpfile(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v8: void*;  // [bp-0x60]
    let v9: struct24;  // [bp-0x58]
    let v13: struct16;  // rbp
    let v14: &u8;  // rdx

    v8 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    v13 = 0;
    v9 = struct24 {
        field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(0x10, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs")
        field_8: v14
        field_16: 0
    };
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_418e9c, &g_418ea0);
    loop {
        alloc::string::String::push(&v9, std::thread::local::LocalKey<T>::with());
    }
}
