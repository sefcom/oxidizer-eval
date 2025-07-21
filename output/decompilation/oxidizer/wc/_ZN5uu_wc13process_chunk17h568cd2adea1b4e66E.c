fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v2: u64;  // r12
    let v3: u32;  // eax
    let v4: struct64;  // r13
    let v5: struct32;  // r15
    let v6: u64;  // rbp
    let v7: struct32;  // r15
    let v8: struct64;  // r13
    let v9: u64;  // r12
    let v11: struct16;  // edx
    let v13: u64;  // r12
    let v14: struct64;  // r13
    let v15: struct16;  // r14d
    let v16: struct32;  // r15
    let v18: u64;  // rax
    let v19: void*;  // r12
    let v20: u64;  // r15
    let v22: struct32;  // r15
    let v23: struct64;  // r13
    let v24: u64;  // r12
    let v25: core::option::Option<u32>;  // rax:rax

    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v2 = *(a3 as &i64);
    v25 = core::str::validations::next_code_point(&v0) as u128;
    v4 = *((a0 + 32) as &i64);
    v5 = *((a0 + 16) as &i64);
    v6 = *((a0 + 8) as &i64) + 1;
    v7 = v5;
    v8 = v4;
    v9 = v2;
    loop {
        v13 = v24;
        v14 = v23;
        v15 = v11;
        v16 = v22;
        if v15 - 12 >= 2 {
            if v15 == 9 {
                *(a3 as &u64) = (v13 & -8) + 8;
                goto LABEL_4ba66e;
            }
            if v15 == 10 {
                goto LABEL_4ba698;
            }
            v18 = (v15 < 127 ? 32 <= v15 : (v15 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v15 as u64)));
LABEL_4ba6cd:
            *(a3 as &void*) = v19;
            if v15 == 10 {
                v20 = v16 + 1;
                return struct40 {
                    field_0: *(a0 as &i64) + a2
                    field_8: v6
                    field_16: v20
                    padding_24: <UNKNOWN>
                    field_32: v3 as u64
                };
            }
LABEL_4ba66e:
            v6 += 1;
        } else {
LABEL_4ba698:
            v14 = core::cmp::max_by(v13, v14);
            *((a0 + 32) as &struct64) = v14;
            v19 = 0;
            goto LABEL_4ba6cd;
        }
    }
}
