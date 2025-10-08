fn uu_head::parse::process_num_block(a1: i64, a2: i32, a3: i32, a4: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xec]
    let v2: u128;  // [bp-0xe8]
    let v3: u128;  // [bp-0xe8]
    let v4: u128;  // [bp-0xe8]
    let v5: u64;  // [bp-0xd8]
    let v6: struct24;  // [sp-0xd0], Other Possible Types: struct16
    let v8: struct16;  // [bp-0xd0]
    let v9: struct24;  // [bp-0xb8], Other Possible Types: u8
    let v10: u8;  // [bp-0xb7]
    let v11: u64;  // [bp-0xa8]
    let v14: u64;  // [bp-0x80]
    let v15: u64;  // [bp-0x70]
    let v18: alloc::string::String;  // [bp-0x48]
    let v20: u64;  // rax
    let v21: u32;  // 4096
    let v22: u8;  // bl
    let v23: core::fmt::Arguments;  // r13b
    let v24: u32;  // r12d
    let v26: i32;  // edx
    let v27: u64;  // r14
    let v28: core::option::Option<(usize, char)>;  // bpl
    let v33: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v33 = core::num::<impl usize>::from_ascii_radix(&v9, a1, a2);
    if v9 == 1 {
        v20 = -1;
        if v10 != 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v14 = v20;
    v15 = v20;
    v0 = 0;
    do {
        v24 = v21;
        match (v24) {
            100 | 101 | 102 | 103 | 104 | 105 | 106 | 108 | 110 | 111 | 112 | 114 | 115 | 116 | 117 | 119 | 120 | 121 => {
LABEL_465674:
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            113 => {
                <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a4);
                v23 = 1;
                v21 = v26;
                if v21 != 0x110000 {
                    continue;
                }
                break;
            }
            118 => {
                <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a4);
                v22 = 1;
                v21 = v26;
                if v21 == 0x110000 {
                    goto LABEL_465717;
                }
                continue;
            }
            _ => {
                if v24 {
                    goto LABEL_465674;
                }
                break;
            }
        }
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a4);
        v21 = v26;
    } while (a3 != 0x110000);
    v6 = struct24 {
        field_0: 0
        field_8: ""
    };
    if !(v23 & 1) {
        v27 = v14;
        if !(v22 & 1) {
            goto LABEL_465757;
        }
        goto LABEL_465717;
    }
    v27 = v14;
    v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-q");
    v5 = v11;
    v2 = *(&v9.field_0 as &i128);
    v6 = alloc::vec::Vec<T,A>::push(&v2, "src/uu/head/src/parse.rs");
    if !(v22 & 1) {
        goto LABEL_465757;
    }
LABEL_465717:
    v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-v");
    v5 = v11;
    v3 = *(&v9.field_0 as &i128);
    v6 = alloc::vec::Vec<T,A>::push(&v2, "src/uu/head/src/parse.rs");
LABEL_465757:
    if (v0 as i8 & 1) {
        v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-z");
        v5 = v11;
        v3 = *(&v9.field_0 as &i128);
        v6 = alloc::vec::Vec<T,A>::push(&v2, "src/uu/head/src/parse.rs");
    }
    if let None = v28 {
        v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-n");
        v5 = v11;
        v4 = *(&v9.field_0 as &i128) as u128;
        v6 = alloc::vec::Vec<T,A>::push(&v3 as u64, "src/uu/head/src/parse.rs");
        v18 = format!("{}", &v15);
        v8 = alloc::vec::Vec<T,A>::push(&v18, "src/uu/head/src/parse.rs");
        return Some(struct24 {
            field_0: *(&v8.field_0 as &i128)
            field_16: 0
        });
    }
}
