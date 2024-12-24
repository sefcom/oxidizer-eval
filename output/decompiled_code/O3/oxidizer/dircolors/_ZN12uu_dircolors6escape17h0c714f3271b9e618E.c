fn uu_dircolors::escape(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct8;  // [sp-0x58], Other Possible Types: struct16, void*, u64
    let v1: u64;  // [sp-0x50]
    let v2: void*;  // [sp-0x48]
    let v3: u64;  // [sp-0x40]
    let v4: u64;  // [sp-0x38]
    let v8: u64;  // rdx
    let v9: u32;  // ebp
    let v10: u64;  // rdi
    let v11: u64;  // rsi
    let v12: u64;  // rdx
    let v13: u128;  // xmm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a1;
    v4 = a2 + a1;
    if !core::str::validations::next_code_point(&v3) as i32 {
        v13 = *(&v0 as &i128);
        return struct24 {
            field_0: v13
            field_16: v2
        };
    }
    v9 = v8;
    switch (v8) {
    case 39:
        v10 = &g_416d80;
        v11 = &anon.82c3ed8cdb07ba982e54791b0c97d0cf.178.llvm.541762227079851447;
LABEL_4bcdd6:
        v0 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v10, v11), v12);
        if !core::str::validations::next_code_point(&v3) as i32 {
            vvar_148{reg 224} = *(&v0 as &i128);
            return struct24 {
                field_0: v13
                field_16: v2
            };
        }
        break;
    case 58:
        if 32 != 92 {
            v10 = &g_423625;
            v11 = &g_423627;
            goto LABEL_4bcdd6;
        }
    default:
        v0 = alloc::string::String::push(v9, v8);
    }
}
