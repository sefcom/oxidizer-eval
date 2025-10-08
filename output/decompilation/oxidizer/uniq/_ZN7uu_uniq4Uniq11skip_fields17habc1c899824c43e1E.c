fn uu_uniq::Uniq::skip_fields(a0: u64, a1: u8, a2: u64, a3: void*, a4: u32) -> int {
    let v0: struct16;  // [bp-0x58]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x58]
    let v3: u8;  // [bp-0x48]
    let v4: void*;  // [bp-0x40]
    let v5: i8;  // [bp-0x38]
    let v7: u64;  // r8
    let v10: i64;  // rbp

    if !(a1 & 1) {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a3, a4);
        return;
    }
    v0 = struct16 {
        field_0: a3
        field_8: a4 + a3
    };
    if !a2 {
        core::iter::traits::iterator::Iterator::collect(a0, a3, v7);
        return;
    } else if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0) {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    } else {
        core::iter::traits::iterator::Iterator::collect(&v3, &v0);
        a3 = v4;
        if !*(&v5 as &i64) {
            return struct24 {
                field_0: 0
                field_8: 1
                field_16: 0
            };
        }
        v0 = struct16 {
            field_0: a3
            field_8: *(&v5 as &i64) + a3
        };
        if a2 == 1 {
            core::iter::traits::iterator::Iterator::collect(a0, a3, v7);
            return;
        }
        loop {
            v10 -= 1;
            v0 = v1;
            if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0) {
                break;
            }
            core::iter::traits::iterator::Iterator::collect(&v3, &v0);
            a3 = v4;
            if !*(&v5 as &i64) {
                break;
            }
            v0 = struct16 {
                field_0: a3
                field_8: *(&v5 as &i64) + a3
            };
            v1 = v2;
            if v10 == 1 {
                core::iter::traits::iterator::Iterator::collect(a0, a3, v7);
                return;
            }
        }
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
}
