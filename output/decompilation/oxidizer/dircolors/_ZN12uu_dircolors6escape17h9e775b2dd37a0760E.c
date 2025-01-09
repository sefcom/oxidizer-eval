fn uu_dircolors::escape(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: struct8;  // [sp-0x58], Other Possible Types: struct16, void*
    let v1: u64;  // [sp-0x50]
    let v2: void*;  // [sp-0x48]
    let v3: u64;  // [sp-0x40]
    let v4: u64;  // [sp-0x38]
    let v8: u64;  // rdx
    let v9: u32;  // ebp
    let v10: u64;  // rdi
    let v11: u64;  // rsi
    let v12: u32;  // rdx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a1;
    v4 = a2 + a1;
    if !core::str::validations::next_code_point(&v3) as i32 {
        return struct24 {
            field_0: v13
            field_16: v2
        };
    }
    v9 = v8;
    match (v8) {
        39 => {
            v10 = &g_416cc0;
            v11 = &anon.84df56382e2e566cd8a063a5d0153d3b.161.llvm.4004663911042702431;
LABEL_4bccf6:
            v0 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v10, v11), v12);
            if !core::str::validations::next_code_point(&v3) as i32 {
                return struct24 {
                    field_0: v13
                    field_16: v2
                };
            }
            break;
        }
        58 => {
            if 32 != 92 {
                v10 = &g_42352d;
                v11 = &g_42352f;
                goto LABEL_4bccf6;
            }
        }
        _ => {
            v0 = alloc::string::String::push(v9);
        }
    }
}
