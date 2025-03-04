fn uu_dircolors::escape(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x58], Other Possible Types: struct8, struct16
    let v1: void*;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v5: u32;  // ecx
    let v6: u64;  // rdx
    let v7: u32;  // ebp
    let v8: u64;  // rdi
    let v9: u64;  // rsi

    v0 = 0;
    v0 = 1;
    v1 = 0;
    v2 = a1;
    v3 = a2 + a1;
    if !core::str::validations::next_code_point(&v2) as i32 {
        return struct24 {
            field_0: v10
            field_16: v1
        };
    }
    v5 = 32;
    v7 = v6;
    match (v6) {
        39 => {
            v8 = &g_416cc0;
            v9 = &anon.84df56382e2e566cd8a063a5d0153d3b.161.llvm.4004663911042702431;
LABEL_4bccf6:
            v0 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8, v9), a2);
            v5 = v7;
            if !core::str::validations::next_code_point(&v2) as i32 {
                return struct24 {
                    field_0: v10
                    field_16: v1
                };
            }
            break;
        }
        58 => {
            if v5 != 92 {
                v8 = &g_42352d;
                v9 = &g_42352f;
                goto LABEL_4bccf6;
            }
        }
        _ => {
            v0 = alloc::string::String::push(v7);
        }
    }
}
