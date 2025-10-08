fn uu_seq::numberparse::compute_num_digits(a0: i64, a1: i64, a2: i64, a3: i64) -> void {
    let v0: alloc::string::String;  // [bp-0x138]
    let v1: struct104;  // [bp-0x120]
    let v2: i64;  // [bp-0x118]
    let v3: u128;  // [bp-0x110]
    let v4: u128;  // [bp-0x100]
    let v5: u128;  // [bp-0xf0]
    let v6: u128;  // [bp-0xe0]
    let v7: u128;  // [bp-0xd0]
    let v8: u64;  // [bp-0xc0]
    let v9: struct122;  // [bp-0xb8], Other Possible Types: u32
    let v12: u64;  // r12
    let v14: u64;  // rdx
    let v15: core::option::Option<&str>;  // rax
    let v16: u64;  // r15
    let v17: u64;  // rax
    let v18: u64;  // r13
    let v19: i64;  // r15
    let v20: u64;  // rbp
    let v21: void*;  // r12
    let v23: u64;  // rax
    let v24: u128;  // xmm0
    let v26: u64;  // r13
    let v27: u64;  // rcx
    let v28: u64;  // rbx
    let v29: core::result::Result<i64, core::num::error::ParseIntError>;  // rax:rdx
    let v30: &mut [u8];  // rax:rdx

    v0 = alloc::str::<impl str>::to_lowercase(a1, a2);
    v12 = core::str::<impl str>::trim_start_matches(v0);
    v9 = 0;
    v30 = core::char::methods::encode_utf8_raw(43, &v9, a2);
    v15 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v30.data_ptr, v30.length, v12, v14) as u64;
    match v15 {
        None => {
            v16 = v14;
            if let None = v15 {
                goto LABEL_4713ff;
            }
LABEL_4713fe:
            v17 = v15;
        },
        Some(_) => {
            v16 = v14;
            if let Some(_) = v15 {
                goto LABEL_4713fe;
            }
LABEL_4713ff:
            v17 = v12;
        },
    }
    if !core::slice::<impl [T]>::starts_with(v17, v16, "0x") && !core::slice::<impl [T]>::starts_with(v17, v16, "-0x") {
        v1 = core::str::pattern::StrSearcher::new(v17, v16, "e");
        v9 = struct122 {
            field_0: *(&v1.field_0 as &i128)
            field_16: v3
            field_32: v4
            field_48: v5
            field_64: v6
            field_80: v7
            field_96: v8
            field_104: 0
            field_112: v16
            field_120: 1
        };
        core::iter::traits::iterator::Iterator::collect(&v1, &v9);
        v18 = v1.field_16;
        v19 = v2;
        if (core::str::<impl str>::find(*(v19 as &i64), *((v19 + 8) as &i64)) & 1) {
            if v14 {
                v20 = v14;
                if v14 == 1 {
                    v20 = core::slice::<impl [T]>::starts_with(*(v19 as &i64), *((v19 + 8) as &i64), "-") + 1;
                }
            }
            v21 = ~(v14) + *((v19 + 8) as &i64);
            if v18 != 2 {
                goto LABEL_471625;
            }
LABEL_4715b7:
            v29 = core::num::<impl i64>::from_ascii_radix(&v9, *((v19 + 16) as &i64), *((v19 + 24) as &i64));
        } else {
            v20 = *((v19 + 8) as &i64);
            v21 = 0;
            if v18 == 2 {
                goto LABEL_4715b7;
            }
LABEL_471625:
            v23 = v20;
        }
        v24 = *(a3 as &i128);
        return struct64 {
            field_0: 1
            field_8: v21
            field_16: v24
            field_32: a3[16] as i128
            field_48: a3[32] as i64
            field_56: v23
        };
    }
    v26 = a3[8] as i64;
    v28 = a3 + 16;
    return struct64 {
        field_0: v27
        field_8: 0
        field_16: *(a3 as &i64)
        field_24: v26
        field_32: *(v28 as &i128)
        field_48: *((v28 + 16) as &i64)
        field_56: 0
    };
}
