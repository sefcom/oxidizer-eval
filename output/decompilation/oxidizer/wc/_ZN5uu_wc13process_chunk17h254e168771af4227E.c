fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x64]
    let v1: u64;  // [bp-0x60]
    let v2: core::slice::iter::Iter<u8>;  // [bp-0x40]
    let v5: u64;  // r13
    let v6: u32;  // eax
    let v7: u64;  // rbp
    let v8: core::option::Option<u32>;  // r15
    let v9: struct9;  // r12
    let v10: u64;  // rbp
    let v11: core::option::Option<u32>;  // r15
    let v12: u64;  // r13
    let v14: u32;  // edx
    let v16: u64;  // r13
    let v17: u32;  // r14d
    let v18: core::option::Option<u32>;  // r15
    let v19: u64;  // rbp
    let v21: u64;  // rax
    let v22: Result<struct24, struct9>;  // r13
    let v23: u64;  // r15
    let v25: u64;  // r15
    let v26: u64;  // r13
    let v27: core::option::Option<u32>;  // rax:rax

    v2 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v0 = *(a4 as &i8);
    v5 = *(a3 as &i64);
    v27 = core::str::validations::next_code_point(&v2) as u128;
    v1 = *((a0 + 24) as &i64);
    v7 = *((a0 + 32) as &i64);
    v8 = *((a0 + 16) as &i64);
    v9 = *((a0 + 8) as &i64) + 1;
    v10 = v7;
    v11 = v8;
    v12 = v5;
    loop {
        v16 = v26;
        v17 = v14;
        v18 = v25;
        v19 = vvar_69{reg 56};
        if v17 - 9 < 5 || v17 == 32 || v17 >= 128 && core::unicode::unicode_data::white_space::lookup(v17) {
            *(a4 as &i8) = 0;
            v0 = 0;
        } else if !v0 as i8 {
            *(a4 as &i8) = 1;
            v1 += 1;
            *((a0 + 24) as &u64) = v1;
            v0 = v1 & -0x100 | 1;
        }
        if v17 - 12 >= 2 {
            if v17 == 9 {
                *(a3 as &u64) = (v16 & -8) + 8;
                goto LABEL_4ba3de;
            }
            if v17 == 10 {
                goto LABEL_4ba425;
            }
            v21 = (v17 < 127 ? 32 <= v17 : (v17 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v17)));
LABEL_4ba4ac:
            *(a3 as &Result<struct24, struct9>) = v22;
            if v17 == 10 {
                v23 = v18 + 1;
                return struct40 {
                    field_0: *(a0 as &i64) + a2
                    field_8: v9
                    field_16: v23
                    padding_24: <UNKNOWN>
                    field_32: v6 as u64
                };
            }
LABEL_4ba3de:
            v9 += 1;
        } else {
LABEL_4ba425:
            v19 = core::cmp::max_by(v16, v19);
            *((a0 + 32) as &u64) = v19;
            v22 = 0;
            goto LABEL_4ba4ac;
        }
    }
}
