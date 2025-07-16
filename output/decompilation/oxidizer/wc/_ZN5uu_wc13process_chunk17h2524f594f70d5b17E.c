fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x40]
    let v2: void*;  // r12
    let v4: u64;  // rbp
    let v5: u64;  // r13
    let v6: u32;  // edx
    let v7: core::result::Result<u64, std::io::error::Error>;  // r14d
    let v8: u32;  // r14d
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: core::option::Option<u32>;  // rax:rax
    let v12: core::option::Option<u32>;  // rax:rax

    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v2 = *(a3 as &i64);
    v11 = core::str::validations::next_code_point(&v0) as u128;
    if let None = v11 {
        return struct16 {
            field_0: *(a0 as &i64) + a2
            field_32: <UNKNOWN>
        };
    }
    do {
        v8 = v7;
        if v8 - 12 >= 2 {
            if v8 == 9 {
                v2 = (v2 & -8) + 8;
                *(a3 as &void*) = v2;
                continue;
            }
            if v8 == 10 {
                goto LABEL_4ba2dc;
            }
            v9 = (v8 < 127 ? 32 <= v8 : (v8 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v8)));
LABEL_4ba311:
            *(a3 as &void*) = v2;
            if v8 == 10 {
                v4 += 1;
                *((a0 + 16) as &u64) = v4;
            }
        } else {
LABEL_4ba2dc:
            v5 = core::cmp::max_by(v2, v5);
            *((a0 + 32) as &u64) = v5;
            v2 = 0;
            goto LABEL_4ba311;
        }
    } while ((v12 = core::str::validations::next_code_point(&v0) as u128, v6 = v6, v12 as i32));
    return struct16 {
        field_0: *(a0 as &i64) + a2
        field_32: <UNKNOWN>
    };
}
