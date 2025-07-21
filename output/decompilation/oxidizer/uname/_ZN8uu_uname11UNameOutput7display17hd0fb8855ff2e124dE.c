fn uu_uname::UNameOutput::display(a1: &struct24) -> : struct24 {
    let a0: i64;  // rsi
    let v0: void*;  // [bp-0xa8]
    let v2: void*;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: u64;  // [bp-0x68]
    let v9: u64;  // [bp-0x60]
    let v10: u64;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v12: void*;  // [bp-0x48]
    let v13: u64;  // [bp-0x40]
    let v14: void*;  // [bp-0x38]
    let v15: void*;  // [bp-0x28]
    let v18: alloc::string::String;  // rcx
    let v19: alloc::string::String;  // rcx
    let v20: u64;  // rdx
    let v21: u64;  // r8
    let v22: u64;  // r9
    let v23: u64;  // r10
    let v24: u64;  // r11
    let v25: u64;  // r14
    let v26: u64;  // r15
    let v27: core::option::Option<char>;  // rax
    let v29: i64;  // rdi
    let v30: &[u8];  // rax:rdx

    if *(a0 as &i64) == 0x8000000000000000 {
        v18 = 0;
    } else {
        v18 = a0;
    }
    v19 = v18;
    v20 = a0 + 24;
    v0 = 0;
    v21 = a0 + 48;
    v2 = 0;
    v3 = 1;
    v4 = v19;
    v5 = v20;
    v6 = v21;
    v7 = v22;
    v8 = v23;
    v9 = v24;
    v10 = v25;
    v11 = v26;
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v15 = 0;
    loop {
        v27 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v3) as u64;
        if !v27 {
            break;
        }
        v30 = core::slice::iter::Iter<T>::make_slice(*((v27 + 8) as &i64));
        alloc::vec::Vec<T,A>::append_elements(&v0, v30.ptr, a1);
        alloc::string::String::push(&v0, a0 as u8);
    }
    *((v29 + 16) as &i64) = 0;
    *(v29 as &i128) = *(&v0 as &i128);
    return;
}
