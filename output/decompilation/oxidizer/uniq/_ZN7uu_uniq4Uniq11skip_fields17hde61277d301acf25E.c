fn uu_uniq::Uniq::skip_fields(a0: &struct24, a1: u32, a2: u32, a3: u64, a4: u64) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: iNone;  // [sp-0x68]
    let v3: i64;  // [sp-0x58]
    let v4: struct24;  // [sp-0x48]
    let v6: i64;  // r8
    let v7: i64;  // r15
    let v8: struct8;  // rax
    let v9: struct8;  // rax
    let v10: iNone;  // xmm0
    let v11: iNone;  // ymm0
    let v12: iNone;  // ymm0
    let v13: iNone;  // xmm0

    if !a1 {
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a3, a4);
    }
    v6 = a4 + a3;
    v0 = a3;
    v1 = v6;
    if !a2 {
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v6);
        return v9;
    }
    v7 = <usize as core::iter::range::Step>::forward_unchecked(0);
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all();
    if v8 as u8 {
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = 0;
        return v9;
    }
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0);
    v3 = v4.field_16;
    v10 = *(&v4.field_0 as &i128);
    v12 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10 as u256;
    v2 = v10;
    if v3 {
        a3 = (&v2)[8] as i64;
        v0 = a3;
        v1 = v3 + a3;
        if v7 >= a2 {
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v6);
            return v9;
        }
        loop {
            v7 = <usize as core::iter::range::Step>::forward_unchecked(v7);
            if !(!<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all() as u8) || !((v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, 0), v3 = v4.field_16, v13 = *(&v4.field_0 as &i128), v12 = v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13 as u256, v2 = v13, v3)) {
                break;
            }
            a3 = (&v2)[8] as i64;
            v0 = a3;
            v1 = v3 + a3;
            if v7 >= a2 {
                <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a3, v6);
                return v9;
            }
        }
    }
    *(a0 as &i64) = 0;
    *((a0 + 8) as &i64) = 1;
    *((a0 + 16) as &i64) = 0;
    return v9;
}
