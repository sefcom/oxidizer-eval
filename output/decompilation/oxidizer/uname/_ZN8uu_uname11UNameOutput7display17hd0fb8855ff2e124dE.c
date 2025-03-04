fn uu_uname::UNameOutput::display(a0: &struct24, a1: &struct24) -> int {
    let v0: void*;  // [sp-0xa8], Other Possible Types: u64, struct8
    let v1: struct16;  // [sp-0xa8]
    let v2: u64;  // [sp-0xa0]
    let v3: void*;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: &u64;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: u64;  // [sp-0x78]
    let v8: u64;  // [sp-0x70]
    let v9: u64;  // [sp-0x68]
    let v10: u64;  // [sp-0x60]
    let v11: u64;  // [sp-0x58]
    let v12: u64;  // [sp-0x50]
    let v13: void*;  // [sp-0x48]
    let v14: u64;  // [sp-0x40]
    let v15: void*;  // [sp-0x38]
    let v16: void*;  // [sp-0x28]
    let v18: &u64;  // rcx
    let v19: void*;  // rdx
    let v20: void*;  // r8
    let v21: void*;  // r9
    let v22: void*;  // r10
    let v23: void*;  // r11
    let v24: void*;  // r14
    let v25: void*;  // r15
    let v26: &u64;  // rax
    let v27: u32;  // rdx
    let v28: u128;  // xmm0

    v18 = a1;
    if *(a1) == 0x8000000000000000 {
        v18 = 0;
    }
    v19 = a1 + 3;
    if a1[3] == 0x8000000000000000 {
        v19 = 0;
    }
    v0 = 0;
    v20 = a1 + 6;
    if a1[6] == 0x8000000000000000 {
        v20 = 0;
    }
    v21 = a1 + 9;
    if a1[9] == 0x8000000000000000 {
        v21 = 0;
    }
    v22 = a1 + 12;
    if a1[12] == 0x8000000000000000 {
        v22 = 0;
    }
    v2 = 1;
    v23 = a1 + 15;
    if a1[15] == 0x8000000000000000 {
        v23 = 0;
    }
    v24 = a1 + 18;
    if a1[18] == 0x8000000000000000 {
        v24 = 0;
    }
    v25 = a1 + 21;
    if a1[21] == 0x8000000000000000 {
        v25 = 0;
    }
    v3 = 0;
    v4 = 1;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = v23;
    v11 = v24;
    v12 = v25;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v16 = 0;
    loop {
        v26 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v4);
        if !v26 {
            break;
        }
        v1 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v26[1], v26[2] + v26[1]), v27);
        v0 = alloc::string::String::push();
    }
    v28 = *(&v0 as &i128);
    return struct24 {
        field_0: v28
        field_16: v3
    };
}
