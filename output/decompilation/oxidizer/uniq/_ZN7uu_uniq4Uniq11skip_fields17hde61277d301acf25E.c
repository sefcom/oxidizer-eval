fn uu_uniq::Uniq::skip_fields(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x78], Other Possible Types: u64
    let v1: u64;  // [bp-0x78]
    let v2: u64;  // [bp-0x78]
    let v3: u128;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: Result<struct24, struct24>;  // [bp-0x48]
    let v7: Result<struct24, struct24>;  // [bp-0x48]
    let v9: struct24;  // r8
    let v10: struct24;  // r15
    let v12: u64;  // rsi

    if !a1 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a3, a4);
        return;
    }
    v0 = struct16 {
        field_0: a3
        field_8: a4 + a3
    };
    if !a2 {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v9);
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
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0);
    v5 = *((&v7 as &char + 16) as &i64);
    v3 = v7 as i128;
    if !v5 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    a3 = v4;
    v0 = struct16 {
        field_0: a3
        field_8: v5 + a3
    };
    if v10 >= a2 {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v9);
        return;
    }
    loop {
        v0 = v2;
        <usize as core::iter::range::Step>::forward_unchecked(v10, v12);
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0) || !((v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0), v5 = *((&v6 as &char + 16) as &i64), v3 = v6 as i128 as u128, v5)) {
            break;
        }
        a3 = v4;
        v0 = struct16 {
            field_0: a3
            field_8: v5 + a3
        };
        v2 = v1;
        if v10 >= a2 {
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v9);
            return;
        }
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
