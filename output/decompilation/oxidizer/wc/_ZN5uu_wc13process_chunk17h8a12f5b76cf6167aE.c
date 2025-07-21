fn uu_wc::process_chunk(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x60]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v4: u64;  // r13
    let v5: u32;  // eax
    let v6: core::option::Option<u32>;  // rbp
    let v7: Result<struct40, struct16>;  // r12
    let v8: core::option::Option<u32>;  // rbp
    let v9: u64;  // r13
    let v11: u32;  // edx
    let v13: u8;  // r15b
    let v14: u64;  // r13
    let v15: u32;  // r14d
    let v18: u64;  // rax
    let v20: u64;  // r13
    let v21: core::option::Option<u32>;  // rax:rax

    v1 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v4 = *(a3 as &i64);
    v21 = core::str::validations::next_code_point(&v1) as u128;
    v0 = *((a0 + 24) as &i64);
    v6 = *((a0 + 32) as &i64);
    v7 = *((a0 + 8) as &i64) + 1;
    v8 = v6;
    v9 = v4;
    loop {
        v14 = v20;
        v15 = v11;
        if v15 - 9 < 5 || v15 == 32 || v15 >= 128 && core::unicode::unicode_data::white_space::lookup(v15) {
            *(a4 as &i8) = 0;
        } else if !v13 {
            *(a4 as &i8) = 1;
            v0 += 1;
            v13 = 1;
            return struct40 {
                field_0: *(a0 as &i64) + a2
                field_8: v7
                padding_16: <UNKNOWN>
                field_24: v0
                field_32: v5 as u64
            };
        }
        if v15 - 12 >= 2 && v15 != 9 && v15 != 10 {
            v18 = (v15 < 127 ? 32 <= v15 : (v15 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v15)));
        }
        v7 += 1;
        v8 = vvar_62{reg 56};
    }
}
