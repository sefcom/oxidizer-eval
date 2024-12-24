fn uu_tr::operation::SqueezeOperation::new(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x30], Other Possible Types: i256
    let v2: i64;  // rdx

    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(a0, &v0, v2);
    *((a0 + 48) as &i8) = 0;
    return a0;
}
