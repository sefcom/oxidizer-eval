fn uu_uname::UNameOutput::display(a1: &struct24) -> : struct24 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0xa8]
    let v2: void*;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: void*;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: i64;  // [bp-0x78]
    let v7: i64;  // [bp-0x70]
    let v8: i64;  // [bp-0x68]
    let v9: i64;  // [bp-0x60]
    let v10: i64;  // [bp-0x58]
    let v11: i64;  // [bp-0x50]
    let v12: i64;  // [bp-0x48]
    let v13: i64;  // [bp-0x40]
    let v14: void*;  // [bp-0x38]
    let v15: void*;  // [bp-0x28]
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rdi
    let v22: i64;  // r8
    let v23: i64;  // r9
    let v24: i64;  // r10
    let v25: i64;  // r11
    let v26: i64;  // r14
    let v27: core::option::Option<char>;  // rax

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        v18 = 0;
    } else {
        v18 = a1;
    }
    v19 = v18;
    v20 = a1 + 24;
    v0 = 0;
    v21 = a1 + 48;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v5 = 8;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = v23;
    v11 = v24;
    v12 = v25;
    v13 = v26;
    v14 = 0;
    v15 = 0;
    loop {
        v27 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v3) as u64;
        if !v27 {
            break;
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, *((v27 + 8) as &i64), *((v27 + 16) as &i64) + *((v27 + 8) as &i64));
        alloc::string::String::push(&v0, a1 as u8);
    }
    return struct24 {
        field_0: *(&v0 as &i128)
        field_16: 0
    };
}
