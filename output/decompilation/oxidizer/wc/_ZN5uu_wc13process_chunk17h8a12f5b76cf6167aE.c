fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x60]
    let v1: u128;  // [bp-0x40]
    let v4: u64;  // r13
    let v5: u32;  // eax
    let v6: core::option::Option<u32>;  // rbp
    let v7: u64;  // r12
    let v8: core::option::Option<u32>;  // rbp
    let v9: u64;  // r13
    let v10: u64;  // r12
    let v12: u32;  // edx
    let v13: u32;  // r14d
    let v14: u8;  // r15b
    let v15: u64;  // r12
    let v16: u64;  // r13
    let v17: u32;  // r14d
    let v19: u64;  // r13
    let v20: u64;  // r12
    let v21: i64;  // r13
    let v23: u64;  // r13
    let v24: core::option::Option<u32>;  // rax:rax

    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v4 = *(a3 as &i64);
    v24 = core::str::validations::next_code_point(&v1) as u128;
    v0 = *((a0 + 24) as &i64);
    v6 = *((a0 + 32) as &i64);
    v7 = *((a0 + 8) as &i64) + 1;
    v8 = v6;
    v9 = v4;
    v10 = v7;
    loop {
        loop {
            do {
                v15 = v10;
                v16 = v9;
                v17 = v13;
                if v17 - 9 < 5 || v17 == 32 || v17 >= 128 && core::unicode::unicode_data::white_space::lookup(v17) {
                    *(a4 as &i8) = 0;
                } else if !v14 {
                    *(a4 as &i8) = 1;
                    v0 += 1;
                    v14 = 1;
                    return struct32 {
                        field_0: *(a0 as &i64) + a2
                        field_8: v15
                        field_24: <UNKNOWN>
                        field_32: v0
                    };
                }
            } while ((v8 = vvar_62{reg 56}, v13 = v12, v9 = v19, v10 = v20, v17 - 12 < 2));
            if v17 != 9 {
                v8 = vvar_62{reg 56};
                v13 = v12;
                v9 = v19;
                v10 = v20;
                if v17 != 10 {
                    break;
                }
            } else {
                v21 = (v16 & -8) + 8;
                v8 = vvar_62{reg 56};
                v9 = v19;
                v10 = v20;
            }
        }
        v23 = v16 + (v17 < 127 ? 32 <= v17 : (v17 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v17)));
        v8 = vvar_62{reg 56};
        v13 = v12;
        v9 = v19;
        v10 = v20;
    }
}
