fn uu_head::parse::process_num_block(a1: i64, a2: i64, a3: i32, a4: i64) -> : struct17 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0xfc]
    let v1: struct24;  // [bp-0xf8]
    let v2: struct16;  // [bp-0xe0]
    let v4: std::sys::os_str::bytes::Buf;  // [bp-0xc8]
    let v5: std::sys::os_str::bytes::Buf;  // [bp-0xc8], Other Possible Types: struct24
    let v6: struct24;  // [bp-0xc8]
    let v7: i64;  // [bp-0x98]
    let v8: u64;  // [bp-0x90]
    let v9: struct32;  // [bp-0x88]
    let v10: std::sys::os_str::bytes::Buf;  // [bp-0x80]
    let v12: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x70]
    let v13: u64;  // [bp-0x68]
    let v19: u64;  // r15
    let v20: i64;  // rdi
    let v21: i64;  // rbx
    let v22: u64;  // rbp
    let v23: u32;  // 4096
    let v26: u32;  // r12d
    let v27: u64;  // rax
    let v28: u32;  // edx
    let v29: u32;  // edx

    v19 = a3;
    v21 = v20;
    v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a0, a1);
    match v12 {
        Err(_) => {
            *((v20 + 8) as &i64) = 0;
            *((v20 + 16) as &i8) = 1;
        },
        Ok(v8) => {
            v7 = v20;
            v10 = v8;
            v0 = 0;
            v22 = 0;
            v9 = 0;
            v23 = a2;
            loop {
                v26 = v23;
                match (v26) {
                    100 | 101 | 102 | 103 | 104 | 105 | 106 | 108 | 110 | 111 | 112 | 114 | 115 | 116 | 117 | 119 | 120 | 121 => {
LABEL_4be7ac:
                        *((v7 + 8) as &i64) = 0;
                        *((v7 + 16) as &i8) = 0;
                        *(v7 as &i64) = 1;
                        return;
                    }
                    _ => {
                        if !(!v26) {
                            goto LABEL_4be7ac;
                        }
                        break;
                    }
                }
                v27 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v19) as u64 & -0x100 | 1;
                v0 = 0;
                v28 = v29;
                if v28 == 0x110000 {
                    break;
                }
                v9 = v27;
                v23 = v28;
            }
            v4 = std::sys::os_str::bytes::Slice::to_owned("-q");
            v1 = v5;
            v2 = alloc::vec::Vec<T,A>::push(&v1);
            v5 = std::sys::os_str::bytes::Slice::to_owned("-v");
            v1 = v6;
            v2 = alloc::vec::Vec<T,A>::push(&v1);
        },
    }
    *(v21 as &i64) = 1;
    return;
}
