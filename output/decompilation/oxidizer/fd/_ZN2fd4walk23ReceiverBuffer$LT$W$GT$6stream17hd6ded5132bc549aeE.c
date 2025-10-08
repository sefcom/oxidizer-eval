fn fd::walk::ReceiverBuffer<W>::stream(a0: &struct25) -> u64 {
    let v0: struct32;  // [bp-0x2d8]
    let v1: struct24;  // [bp-0x2b8]
    let v2: Option<struct312>;  // [bp-0x2a0]
    let v3: Option<struct312>;  // [bp-0x2a0]
    let v4: u8;  // [bp-0x168]
    let v6: u64;  // rax

    *(&a0[128] as &i8) = 1;
    v1 = struct24 {
        field_0: a0[56] as i128
        field_16: a0[72] as i64
    };
    *(&a0[56] as &i64) = 0;
    *(&a0[64] as &i64) = 8;
    *(&a0[72] as &i64) = 0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    if let Some(_) = v2 {
        do {
            memcpy(&v4, &v2, 312);
            v6 = fd::walk::ReceiverBuffer<W>::print(a0, &v4) as u64;
            if v6 as u8 != 6 {
                return v6 & 4294967295;
            }
            v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v3 as i32 != 4);
    }
    return fd::walk::ReceiverBuffer<W>::flush(a0);
}
