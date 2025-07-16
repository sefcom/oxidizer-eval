fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x50]
    let v1: u128;  // [bp-0x40]
    let v3: void*;  // r13
    let v5: u64;  // rbp
    let v6: u32;  // edx
    let v7: u32;  // r14d
    let v8: u8;  // bl
    let v9: u32;  // r14d
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: core::option::Option<u32>;  // rax:rax
    let v13: core::option::Option<u32>;  // rax:rax

    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v3 = *(a3 as &i64);
    v12 = core::str::validations::next_code_point(&v1) as u128;
    if let None = v12 {
        return struct16 {
            field_0: *(a0 as &i64) + a2
            field_32: <UNKNOWN>
        };
    }
    do {
        v9 = v7;
        if v9 - 9 < 5 || v9 == 32 || v9 >= 128 && core::unicode::unicode_data::white_space::lookup(v9) {
            *(a4 as &i8) = 0;
        } else if !v8 {
            *(a4 as &i8) = 1;
            v0 += 1;
            *((a0 + 24) as &u64) = v0;
            v8 = 1;
        }
        if v9 - 12 < 2 {
LABEL_4ba78b:
            v5 = core::cmp::max_by(v3, v5);
            *((a0 + 32) as &u64) = v5;
            v3 = 0;
        } else {
            if v9 == 9 {
                continue;
            }
            if v9 == 10 {
                goto LABEL_4ba78b;
            }
            v10 = (v9 < 127 ? 32 <= v9 : (v9 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v9)));
        }
    } while ((*(a3 as &void*) = v3, v13 = core::str::validations::next_code_point(&v1) as u128, v7 = v6, v13 as i32));
    return struct16 {
        field_0: *(a0 as &i64) + a2
        field_32: <UNKNOWN>
    };
}
