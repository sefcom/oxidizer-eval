fn uu_uname::UNameOutput::display(a0: &struct24, a1: &struct24) -> int {
    let v0: void*;  // [sp-0xa8], Other Possible Types: struct16, struct8
    let v1: u64;  // [sp-0xa0]
    let v2: void*;  // [sp-0x98]
    let v3: u64;  // [sp-0x90]
    let v4: &u64;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: u64;  // [sp-0x78]
    let v7: u64;  // [sp-0x70]
    let v8: u64;  // [sp-0x68]
    let v9: u64;  // [sp-0x60]
    let v10: u64;  // [sp-0x58]
    let v11: u64;  // [sp-0x50]
    let v12: void*;  // [sp-0x48]
    let v13: u64;  // [sp-0x40]
    let v14: void*;  // [sp-0x38]
    let v15: void*;  // [sp-0x28]
    let v18: &u64;  // rcx
    let v19: &u64;  // rcx
    let v20: void*;  // rdx
    let v21: void*;  // r8
    let v22: void*;  // r9
    let v23: void*;  // r10
    let v24: void*;  // r11
    let v25: void*;  // r14
    let v26: void*;  // r15
    let v27: &u64;  // rax
    let v29: u32;  // rdx

    if *(a1) == 0x8000000000000000 {
        v18 = 0;
    } else {
        v18 = a1;
    }
    v19 = v18;
    v20 = a1 + 3;
    if a1[3] == 0x8000000000000000 {
        v20 = 0;
    }
    v0 = 0;
    v21 = a1 + 6;
    if a1[6] == 0x8000000000000000 {
        v21 = 0;
    }
    v22 = a1 + 9;
    if a1[9] == 0x8000000000000000 {
        v22 = 0;
    }
    v23 = a1 + 12;
    if a1[12] == 0x8000000000000000 {
        v23 = 0;
    }
    v1 = 1;
    v24 = a1 + 15;
    if a1[15] == 0x8000000000000000 {
        v24 = 0;
    }
    v25 = a1 + 18;
    if a1[18] == 0x8000000000000000 {
        v25 = 0;
    }
    v26 = a1 + 21;
    if a1[21] == 0x8000000000000000 {
        v26 = 0;
    }
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
        v27 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v3);
        return struct24 {
            field_0: v28
            field_16: v2
        };
        v0 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v27[1], v27[2] + v27[1]), v29);
        v0 = alloc::string::String::push();
    }
}
