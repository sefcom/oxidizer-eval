fn uu_sort::Line::create(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: i64, a6: i64) -> long long {
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x80]
    let v1: i64;  // [bp-0x78]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: u8;  // [bp-0x50]
    let v7: struct24;  // [bp-0x40]
    let v8: struct24;  // [bp-0x38]
    let v9: struct16;  // rcx, Other Possible Types: u64
    let v10: struct24;  // rax
    let v11: core::fmt::Arguments;  // rsi
    let v12: i64;  // rbp
    let v13: u64;  // r13
    let v14: u64;  // r13
    let v15: struct9;  // eax
    let v16: u64;  // rcx
    let v17: u64;  // r13
    let v18: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rax:rdx
    let v19: u64;  // [bp-0x48]

    v9 = a2;
    *((a5 + 16) as &i64) = 0;
    if !*((a6 + 96) as &i8) {
        if !*((a6 + 152) as &i8) {
            goto LABEL_4d0b15;
        }
LABEL_4d0ad4:
        v0 = a1;
        v10 = *((a6 + 16) as &i64);
        if v10 {
            goto LABEL_4d0b5f;
        }
    } else {
        uu_sort::tokenize(a1, a2, *((a6 + 120) as &i32), a5);
        v9 = a2;
        if *((a6 + 152) as &i8) {
            goto LABEL_4d0ad4;
        }
LABEL_4d0b15:
        if !core::str::pattern::Pattern::is_contained_in(a1, v9) {
            v18 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v5, a1);
        }
        alloc::vec::Vec<T,A>::push(a4 + 72, v11);
        v0 = a1;
        v10 = *((a6 + 16) as &i64);
        if v10 {
LABEL_4d0b5f:
            v12 = *((a6 + 8) as &i64);
            v4 = *((a5 + 8) as &i64);
            v3 = a4 + 24;
            v2 = a4 + 48;
            v13 = v10 * 56;
            do {
                v14 = v13;
                uu_sort::FieldSelector::get_selection(&v5, v12, v0, v9, v4, *((a5 + 16) as &i64));
                v15 = v8.field_0;
                v16 = (3 <= (v15 - 2 & 255) as u64 ? 1 : (v15 - 2) as u64);
                if !v16 {
                    alloc::vec::Vec<T,A>::push(v2, v5);
                } else if v16 == 1 {
                    alloc::vec::Vec<T,A>::push(v3, v7, v15 as u64);
                    alloc::vec::Vec<T,A>::push(a4, v5, v19, "src/uu/sort/src/sort.rs");
                } else if *((v12 + 55) as &i8) {
                    alloc::vec::Vec<T,A>::push(a4, v5, v19, "src/uu/sort/src/sort.rs");
                }
                v12 += 56;
                v17 = v14 - 56;
                v13 = v17;
            } while (v14 != 56);
        }
    }
    *(v1 as &core::slice::iter::Iter<u8>) = v0;
    *((v1 + 8) as &struct16) = v9;
    *((v1 + 16) as &u64) = a3;
    return a3;
}
