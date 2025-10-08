fn uu_chroot::parse_userspec(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x80]
    let v1: u64;  // [bp-0x70]
    let v2: void*;  // [bp-0x68]
    let v3: u32;  // [bp-0x60]
    let v4: void*;  // [bp-0x58]
    let v5: u64;  // [bp-0x50]
    let v6: struct24;  // [bp-0x48]
    let v8: u8;  // cl
    let v9: core::option::Option<(&str, &str)>;  // rax
    let v10: u8;  // al
    let v11: void*;  // r13
    let v12: u64;  // r12
    let v13: u64;  // r14

    v9 = core::str::<impl str>::split_once(a1, a2, v8);
    if v2 {
        v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, 1, 0);
        v11 = v4;
        v12 = v5;
        v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, 1, 0);
        if v10 {
            v13 = 0x8000000000000000;
            if !v9 as u8 {
                v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, v11, v12);
            }
        } else if v9 as u8 {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, v2, v3);
            return struct8 {
                field_0: 9223372036854775809
            };
        } else {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
            v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, v12);
            return struct48 {
                field_0: *(&v0.field_0 as &i128)
                field_16: v1
                field_24: *(&v6.field_0 as &i128)
                field_40: v6.field_16
            };
        }
    } else {
        v13 = 0x8000000000000000;
        if a2 {
            v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a1, a2);
        }
    }
    return struct8 {
        field_0: v13
    };
}
