fn uu_sort::Line::create(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: &struct8, a6: void*) -> u64 {
    let v0: u64;  // [sp-0xb0]
    let v1: u64;  // [sp-0xa0]
    let v2: &u64;  // [sp-0x90]
    let v3: &u64;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: u64;  // [sp-0x78]
    let v6: u64;  // [sp-0x70]
    let v7: u64;  // [sp-0x68]
    let v8: &struct_0;  // [sp-0x60]
    let v9: struct8;  // [sp-0x58]
    let v10: i8;  // [bp-0x50]
    let v11: i8;  // [bp-0x48]
    let v12: u8;  // [bp-0x40]
    let v13: u8;  // [bp-0x38]
    let v14: struct8;  // rax
    let v15: u256;  // ymm0
    let v16: u64;  // rbx
    let v17: u64;  // r14
    let v18: u64;  // rax
    let v19: u64;  // rcx

    a5->field_10 = 0;
    if a6->field_60 {
        uu_sort::tokenize(a1, a2, a6->field_78, a5);
    }
    v4 = a6->field_8;
    v5 = a6->field_10 * 56 + v4;
    v0 = a1;
    v6 = a1;
    v1 = a2;
    v7 = a2;
    v8 = a5;
    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v14 {
        return struct24 {
            field_0: v0
            field_8: v1
            field_16: a3
        };
    }
    v3 = a4 + 3;
    v2 = a4 + 6;
    do {
        v9 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v6, v14);
        v16 = *(&v10 as &i64);
        v17 = *(&v11 as &i64);
        v18 = v13;
        v19 = (3 <= (v18 - 2 & 4294967295 & 255 & 255 & 255) ? 1 : v18 - 2 & 4294967295 & 255 & 4294967295 & 4294967295);
        if v19 == 2 {
            if !*((v9.field_0 + 55) as &i8) {
                continue;
            }
        } else {
            if v19 != 1 {
                v15 = v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
                alloc::vec::Vec<T,A>::push(v2, v16);
            } else {
                alloc::vec::Vec<T,A>::push(v3, *(&v12 as &i64), v18 & 1);
            }
        }
        alloc::vec::Vec<T,A>::push(a4, v16, v17);
    } while ((v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v14));
}
