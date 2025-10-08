fn fuel_core_client::client::from_strings_errors_to_std_error(a0: i64) -> u64 {
    let v0: struct24;  // [bp-0x78]
    let v1: struct24;  // [bp-0x58]
    let v2: struct24;  // [bp-0x58]
    let v3: struct32;  // [bp-0x40]
    let v4: struct24;  // [bp-0x20]

    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Response errors");
    v0 = v2;
    v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v3, &v0);
    return std::io::error::Error::new(40, &v4);
}
