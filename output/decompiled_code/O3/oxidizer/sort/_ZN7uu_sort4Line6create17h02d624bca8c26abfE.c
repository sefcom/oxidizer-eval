fn uu_sort::Line::create(a0: &u64, a1: u64, a2: u64, a3: u64, a4: &u64, a5: &struct_2) -> u64 {
    let v0: u64;  // [sp-0xb0]
    let v1: u64;  // [sp-0xa0]
    let v2: &u64;  // [sp-0x90]
    let v3: &u64;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: u64;  // [sp-0x78]
    let v6: u64;  // [sp-0x70]
    let v7: u64;  // [sp-0x68]
    let v8: struct8;  // [sp-0x58], Other Possible Types: &struct_0
    let v9: i8;  // [bp-0x50]
    let v10: i8;  // [bp-0x48]
    let v11: u8;  // [bp-0x40]
    let v12: u8;  // [bp-0x38]
    let v13: &struct_1;  // [bp+0x8]
    let v14: &struct_1;  // r14
    let v15: struct8;  // rax
    let v16: u256;  // ymm0
    let v17: u64;  // rbx
    let v18: u64;  // r14
    let v19: u64;  // rax
    let v20: u64;  // rcx
    let v21: u64;  // rdx

    v14 = v13;
    a5->field_10 = 0;
    if v14->field_60 {
        uu_sort::tokenize(a1, a2, v14->field_78, a5);
    }
    v4 = v14->field_8;
    v5 = v14->field_10 * 56 + v4;
    v0 = a1;
    v6 = a1;
    v1 = a2;
    v7 = a2;
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v15 {
        return struct24 {
            field_0: v0
            field_8: v1
            field_16: a3
        };
    }
    v3 = a4 + 3;
    v2 = a4 + 6;
    do {
        v8 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v6, v15);
        v17 = v9;
        v18 = v10;
        v19 = v12;
        v20 = (3 <= (v19 - 2 & 4294967295 & 255 & 255 & 255) ? 1 : v19 - 2 & 4294967295 & 255 & 4294967295 & 4294967295);
        if v20 == 2 {
            if !v8->field_37 {
                continue;
            }
        } else {
            if v20 != 1 {
                v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
                alloc::vec::Vec<T,A>::push(v2, v17, v21);
            } else {
                alloc::vec::Vec<T,A>::push(v3, *(&v11 as &i64), v19 & 1);
            }
        }
        alloc::vec::Vec<T,A>::push(a4, v17, v18);
    } while ((v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v15));
}
