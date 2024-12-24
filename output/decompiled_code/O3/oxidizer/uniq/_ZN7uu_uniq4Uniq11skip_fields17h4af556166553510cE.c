fn uu_uniq::Uniq::skip_fields(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i128;  // [sp-0x68]
    let v3: i64;  // [sp-0x58]
    let v4: i192;  // [sp-0x48], Other Possible Types: struct24
    let v6: i64;  // r8
    let v7: i64;  // r15
    let v8: struct8;  // rax
    let v9: i128;  // xmm0
    let v10: i256;  // ymm0
    let v11: i256;  // ymm0
    let v12: i128;  // xmm0

    if !a1 {
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a3, a4);
    }
    v6 = a4 + a3;
    v0 = a3;
    v1 = v6;
    if !a2 {
        v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v6);
        return v8;
    }
    v7 = <usize as core::iter::range::Step>::forward_unchecked(0);
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all();
    if v8 as u8 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0);
    v3 = *((&v4 as &char + 16) as &i64);
    v9 = v4;
    v11 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9;
    v2 = v9;
    if !v3 {
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = 0;
    }
    a3 = *((&v2 as &char + 8) as &i64);
    v0 = a3;
    v1 = v3 + a3;
    if v7 >= a2 {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v6);
        return v8;
    }
    loop {
        v7 = <usize as core::iter::range::Step>::forward_unchecked(v7);
        if !(!<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all() as u8) || !((v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0), v3 = *((&v4 as &char + 16) as &i64), v12 = v4, v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 as u128 as u256, v2 = v12, v3)) {
            break;
        }
        a3 = *((&v2 as &char + 8) as &i64);
        v0 = a3;
        v1 = v3 + a3;
        if v7 >= a2 {
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v6);
            return v8;
        }
    }
}
