fn just::executor::Executor::error(a0: i64, a1: i64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: alloc::string::String;  // [bp-0x80], Other Possible Types: struct24
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x60]
    let v3: iNone;  // [bp-0x58]
    let v5: u64;  // [bp-0x48]
    let v6: u64;  // [bp-0x38]
    let v9: i64;  // rbx
    let v10: struct24;  // rbp

    v6 = a2;
    if *(a1 as &i64) {
        if *((a1 + 16) as &i64) {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((a1 + 16) as &i64), *((a1 + 24) as &i64));
            v5 = v1;
            v3 = *(&v0.field_0 as &i128);
        }
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(a1 as &i64), *((a1 + 8) as &i64));
        return struct80 {
            field_0: 43
            padding_1: <UNKNOWN>
            field_8: a2
            field_16: a3
            field_24: v2
            field_32: v3
            field_48: v5
            field_56: *(&v0.field_0 as &i128)
            field_72: v1
        };
    } else {
        v0 = <alloc::string::String as core::clone::Clone>::clone(*((a1 + 8) as &i64) + 24);
        while (v10) {
            alloc::string::String::push(&v0, 32);
            v10 -= 48;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, *((v9 + 8) as &i64), *((v9 + 16) as &i64) + *((v9 + 8) as &i64));
        }
        return struct56 {
            field_0: 41
            padding_1: <UNKNOWN>
            field_8: a2
            field_16: a3
            field_24: v2
            field_32: *(&v0.vec.buf.inner.cap as &i128)
            field_48: v1
        };
    }
}
