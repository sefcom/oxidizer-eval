fn uu_head::parse::process_num_block(a1: i64, a2: i64, a3: i32, a4: i64) -> : struct17 {
    let a0: i64;  // rsi
    let v0: i32;  // [bp-0xfc]
    let v1: iNone;  // [bp-0xf8]
    let v2: iNone;  // [bp-0xe0]
    let v8: iNone;  // [bp-0xc8]
    let v9: iNone;  // [bp-0xc8]
    let v11: i64;  // [bp-0x98]
    let v12: i64;  // [bp-0x90]
    let v13: i64;  // [bp-0x88]
    let v14: i64;  // [bp-0x80]
    let v16: iNone;  // [bp-0x70]
    let v17: i64;  // [bp-0x68]
    let v23: i64;  // r15
    let v24: i64;  // rdi
    let v25: i64;  // rbx
    let v26: i64;  // rbp
    let v27: i32;  // 4096
    let v30: i32;  // r12d
    let v31: i64;  // rax
    let v32: i32;  // edx
    let v33: i32;  // edx

    v23 = a3 as u64;
    v25 = v24;
    v16 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a0, a1);
    match v16 {
        Err(_) => {
            *((v24 + 8) as &i64) = 0;
            *((v24 + 16) as &i8) = 1;
        },
        Ok(v12) => {
            v11 = v24;
            v14 = v12;
            v0 = 0;
            v26 = 0;
            v13 = 0;
            v27 = a2;
            loop {
                v30 = v27;
                match (v30) {
                    100 | 101 | 102 | 103 | 104 | 105 | 106 | 108 | 110 | 111 | 112 | 114 | 115 | 116 | 117 | 119 | 120 | 121 => {
LABEL_4be7ac:
                        *((v11 + 8) as &i64) = 0;
                        *((v11 + 16) as &i8) = 0;
                        *(v11 as &i64) = 1;
                        return;
                    }
                    _ => {
                        if !(!v30) {
                            goto LABEL_4be7ac;
                        }
                        break;
                    }
                }
                v0 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v23) as u64 as u32 & -0x100 | 1;
                v31 = 0;
                v32 = v33;
                if v32 == 0x110000 {
                    v8 = std::sys::os_str::bytes::Slice::to_owned("-v");
                    v1 = v9;
                    v2 = alloc::vec::Vec<T,A>::push(&v1);
                    break;
                }
                v13 = v31;
                v27 = v32;
            }
        },
    }
    *(v25 as &i64) = 1;
    return;
}
