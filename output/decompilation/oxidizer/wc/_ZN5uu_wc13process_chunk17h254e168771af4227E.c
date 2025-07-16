fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x64]
    let v1: u64;  // [bp-0x60]
    let v2: u128;  // [bp-0x40]
    let v5: u64;  // r13
    let v6: u32;  // eax
    let v7: u64;  // rbp
    let v8: core::option::Option<u32>;  // r15
    let v9: Result<struct12, struct8>;  // r12
    let v10: u64;  // rbp
    let v11: core::option::Option<u32>;  // r15
    let v12: u64;  // r13
    let v13: Result<struct12, struct8>;  // r12
    let v15: u32;  // edx
    let v16: u32;  // r14d
    let v17: Result<struct12, struct8>;  // r12
    let v18: u64;  // r13
    let v19: u32;  // r14d
    let v20: core::option::Option<u32>;  // r15
    let v21: u64;  // rbp
    let v23: u64;  // r15
    let v24: u64;  // r13
    let v25: u64;  // r12
    let v26: u64;  // rax
    let v27: void*;  // r13
    let v28: struct24;  // r15
    let v30: core::option::Option<u32>;  // rax:rax

    v2 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v0 = *(a4 as &i8);
    v5 = *(a3 as &i64);
    v30 = core::str::validations::next_code_point(&v2) as u128;
    v1 = *((a0 + 24) as &i64);
    v7 = *((a0 + 32) as &i64);
    v8 = *((a0 + 16) as &i64);
    v9 = *((a0 + 8) as &i64) + 1;
    v10 = v7;
    v11 = v8;
    v12 = v5;
    v13 = v9;
    loop {
        loop {
            v17 = v13;
            v18 = v12;
            v19 = v16;
            v20 = v11;
            v21 = v10;
            if v19 - 9 < 5 || v19 == 32 || v19 >= 128 && core::unicode::unicode_data::white_space::lookup(v19) {
                *(a4 as &i8) = 0;
                v0 = 0;
            } else if !v0 as i8 {
                *(a4 as &i8) = 1;
                v1 += 1;
                *((a0 + 24) as &u64) = v1;
                v0 = v1 & -0x100 | 1;
            }
            if v19 - 12 >= 2 {
                if v19 == 9 {
                    *(a3 as &u64) = (v18 & -8) + 8;
                    v10 = vvar_69{reg 56};
                    v11 = v23;
                    v16 = v15;
                    v12 = v24;
                    v13 = v25;
                    continue;
                }
                if v19 == 10 {
                    goto LABEL_4ba425;
                }
                v26 = (v19 < 127 ? 32 <= v19 : (v19 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v19)));
LABEL_4ba4ac:
                *(a3 as &void*) = v27;
                v10 = vvar_69{reg 56};
                v11 = v23;
                v16 = v15;
                v12 = v24;
                v13 = v25;
                if v19 == 10 {
                    break;
                }
            } else {
LABEL_4ba425:
                v21 = core::cmp::max_by(v18, v21);
                *((a0 + 32) as &u64) = v21;
                v27 = 0;
                goto LABEL_4ba4ac;
            }
        }
        v28 = v20 + 1;
        return struct32 {
            field_0: *(a0 as &i64) + a2
            field_8: v17
            field_16: v28
            field_32: <UNKNOWN>
        };
        v10 = vvar_69{reg 56};
        v11 = v23;
        v12 = v24;
        v13 = v25;
    }
}
