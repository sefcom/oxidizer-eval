fn uu_uniq::handle_extract_obs_skip_fields(a1: i64, a2: i32, a3: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xaa]
    let v1: u8;  // [bp-0xa9]
    let v2: void*;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: void*;  // [bp-0x98]
    let v5: u8;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: struct24;  // [bp-0x78], Other Possible Types: struct40
    let v9: u64;  // [bp-0x68]
    let v10: struct24;  // [bp-0x50]
    let v11: core::fmt::rt::Argument;  // [bp-0x40]
    let v12: struct24;  // [bp-0x38]

    v2 = 0;
    v3 = 4;
    v4 = 0;
    v1 = 0;
    v0 = 0;
    v8 = struct40 {
        field_0: a1
        field_8: a1 + a2 as u64
        field_16: &v0
        field_24: &v1
        field_32: &v2
    };
    core::iter::traits::iterator::Iterator::collect(&v5, &v8);
    if !v4 {
        v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        return Some(struct24 {
            field_0: v8.field_0
            field_16: v9
        });
    }
    if v0 {
        *(a3 as &i64) = 0x8000000000000000;
        if v7 <= 1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    } else {
        v10 = core::iter::traits::iterator::Iterator::collect(0x4, 4 + v4 * 4);
        if *(a3 as &i64) != 0x8000000000000000 {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v10, a3[8] as i64, a3[16] as i64 + a3[8] as i64);
        }
        *(&a3[16] as &core::fmt::rt::Argument) = v11;
        *(a3 as &u128) = v10.field_0;
        if v7 <= 1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v12 = core::iter::traits::iterator::Iterator::collect(v6, v6 + v7 * 4);
    return Some(struct24 {
        field_0: v12.field_0
        field_16: v12.field_16
    });
}
