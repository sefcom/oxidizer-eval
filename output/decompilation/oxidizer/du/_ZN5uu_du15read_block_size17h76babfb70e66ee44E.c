fn uu_du::read_block_size(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: Option<Result<struct32, struct8>>;  // [sp-0xc8], Other Possible Types: u256
    let v1: u64;  // [sp-0xa8], Other Possible Types: Result<struct24, struct8>, struct32
    let v2: u64;  // [sp-0xa0]
    let v3: u64;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: void*;  // [sp-0x78]
    let v8: u64;  // [sp-0x70]
    let v9: u128;  // [sp-0x68]
    let v10: u64;  // [sp-0x58]
    let v11: Result<struct24, struct8>;  // [sp-0x50], Other Possible Types: u256
    let v13: u256;  // ymm0
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u128;  // xmm0

    if a1 {
        v0 = uucore::parser::parse_size::parse_size_u64(a1, a2);
        if v0 as i32 == 3 {
            return struct16 {
                field_0: v18
                field_8: v17
            };
        }
        v1 = struct32 {
            field_0: v19
            field_16: *((&v0 as &char + 16) as &i128)
        };
        uu_du::read_block_size::{{closure}}(a1, a2, &v1);
    } else {
        v1 = &g_41cd1d;
        v2 = 13;
        v3 = &g_41cd2a;
        v4 = 10;
        v5 = &g_41cd34;
        v6 = 9;
        v7 = 0;
        v8 = 3;
        loop {
            v14 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v14 {
                break;
            }
            v11 = std::env::var(v14, v15);
            if !(!v11 as i64) {
                goto LABEL_0x4f1de0;
            }
            v10 = *((&v11 as &char + 24) as &i64);
            v16 = *((&v11 as &char + 8) as &i128);
            v13 = v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
            v9 = v16;
            v0 = uucore::parser::parse_size::parse_size_u64(*((&v9 as &char + 8) as &i64), *((&v11 as &char + 24) as &i64));
        }
        v1 = std::env::var("POSIXLY_CORRECT");
        if v1 {
            return struct16 {
                field_0: 0
                field_8: 0x400
            };
        }
        return struct16 {
            field_0: 0
            field_8: 0x200
        };
    }
}
