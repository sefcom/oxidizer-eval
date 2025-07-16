fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x60]
    let v1: u128;  // [bp-0x40]
    let v3: core::option::Option<u32>;  // r13
    let v5: struct24;  // r12
    let v6: u64;  // rbp
    let v7: u32;  // edx
    let v8: u32;  // r14d
    let v9: u8;  // r15b
    let v10: u32;  // r14d
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: core::option::Option<u32>;  // rax:rax
    let v14: core::option::Option<u32>;  // rax:rax

    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v3 = *(a3 as &i64);
    v14 = core::str::validations::next_code_point(&v1) as u128;
    if let None = v14 {
        return struct16 {
            field_0: *(a0 as &i64) + a2
            field_32: <UNKNOWN>
        };
    }
    do {
        v10 = v8;
        if v10 - 9 < 5 || v10 == 32 || v10 >= 128 && core::unicode::unicode_data::white_space::lookup(v10) {
            *(a4 as &i8) = 0;
        } else if !v9 {
            *(a4 as &i8) = 1;
            v0 += 1;
            *((a0 + 24) as &u64) = v0;
            v9 = 1;
        }
        if v10 - 12 >= 2 {
            if v10 == 9 {
                v3 = (v3 & -8) + 8;
                *(a3 as &core::option::Option<u32>) = v3;
                continue;
            }
            if v10 == 10 {
                goto LABEL_4baac9;
            }
            v11 = (v10 < 127 ? 32 <= v10 : (v10 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v10)));
LABEL_4bab47:
            *(a3 as &core::option::Option<u32>) = v3;
            if v10 == 10 {
                v5 += 1;
                *((a0 + 16) as &struct24) = v5;
            }
        } else {
LABEL_4baac9:
            v6 = core::cmp::max_by(v3, v6);
            *((a0 + 32) as &u64) = v6;
            v3 = 0;
            goto LABEL_4bab47;
        }
    } while ((v13 = core::str::validations::next_code_point(&v1) as u128, v8 = v7, v13 as i32));
    return struct16 {
        field_0: *(a0 as &i64) + a2
        field_32: <UNKNOWN>
    };
}
