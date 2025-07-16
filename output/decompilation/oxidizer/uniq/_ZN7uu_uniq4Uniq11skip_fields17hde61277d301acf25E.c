fn uu_uniq::Uniq::skip_fields(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct24, struct24> {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x78]
    let v1: struct24;  // [bp-0x70]
    let v2: u128;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: struct24;  // [bp-0x48]
    let v6: struct24;  // [bp-0x48]
    let v8: struct24;  // r8
    let v9: u64;  // r15
    let v11: u64;  // rsi

    if !a1 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a3, a4);
        return;
    }
    v0 = a3;
    v1 = v8;
    if !a2 {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v8);
        return;
    }
    <usize as core::iter::range::Step>::forward_unchecked(0, a1);
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0) {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0);
    v4 = v6.field_16;
    v2 = v6.field_0;
    if !v4 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    a3 = v3;
    v0 = a3;
    v1 = v8;
    if v9 >= a2 {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v8);
        return;
    }
    loop {
        <usize as core::iter::range::Step>::forward_unchecked(v9, v11);
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0) || !((v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0), v4 = v5.field_16, v2 = v5.field_0, v4)) {
            break;
        }
        a3 = v3;
        v0 = a3;
        v1 = v8;
        if v9 >= a2 {
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v8);
            return;
        }
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
