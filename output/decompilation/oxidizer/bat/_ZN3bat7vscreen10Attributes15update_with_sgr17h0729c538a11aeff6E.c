fn bat::vscreen::Attributes::update_with_sgr(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u128;  // [bp-0xb0]
    let v1: u8;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: u64;  // [bp-0x90]
    let v5: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: void*;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v10: u16;  // [bp-0x38]
    let v12: u64;  // rax
    let v13: u64;  // r12
    let v14: struct24;  // r13
    let v15: struct32;  // r15
    let v16: struct9;  // rsi
    let v17: alloc::vec::Vec<u8, alloc::alloc::Global>;  // r15

    v9 = <char as core::str::pattern::Pattern>::into_searcher(0x3b, a1, a2);
    v7 = 0;
    v8 = a2;
    v10 = 1;
    *((a0 + 264) as &i8) = 1;
    v12 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v12 == 2 {
        return v12;
    }
    v6 = a0 + 168;
    v5 = a0 + 192;
    v13 = a0 + 144;
    v14 = a0 + 120;
    v3 = a0 + 24;
    v4 = a0 + 48;
    v15 = &v1;
    do {
        if (v12 & 1) {
            goto LABEL_844cd0;
        }
        v16 = v12 >> 16;
        match ((v16 & 65535) * 0x1000000000000) {
            0 => {
LABEL_844cd0:
                bat::vscreen::Attributes::sgr_reset(a0);
            }
            1 => {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v15, &g_48066c, 4);
                *((v14 + 16) as &u64) = v2;
                *(v14 as &u128) = v0;
                continue;
            }
            2 => {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v15, &g_4817dc, 4);
                *((v13 + 16) as &u64) = v2;
                *(v13 as &u128) = v0;
                continue;
            }
            3 => {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v15, &g_4802a8, 4);
                v17 = v5;
                goto LABEL_844e59;
            }
            4 => {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v15, &g_480bb4, 4);
                v17 = v6;
                goto LABEL_844e59;
            }
            22 => {
                *((a0 + 136) as &i64) = 0;
                *((a0 + 160) as &i64) = 0;
                continue;
            }
            23 => {
                *((a0 + 208) as &i64) = 0;
                continue;
            }
            24 => {
                *((a0 + 184) as &i64) = 0;
                continue;
            }
            _ => {
                if v12 - 0x1e0000 < 0xa0000 {
                    bat::vscreen::Attributes::parse_color(v15, v16 as u16, &v7);
                    *((a0 + 16) as &u64) = v2;
                    *(a0 as &u128) = v0;
                    continue;
                } else {
                    if v12 - 0x280000 < 0xa0000 {
LABEL_844e1f:
                        bat::vscreen::Attributes::parse_color(v15, v16 as u16, &v7);
                        v17 = v3;
                        goto LABEL_844e59;
                    }
                    if (v12 & -0x20000) == 0x3a0000 {
                        bat::vscreen::Attributes::parse_color(v15, v16 as u16, &v7);
                        v17 = v4;
LABEL_844e59:
                        *((v17 + 16) as &u64) = v2;
                        *(v17 as &u128) = v0;
                        v15 = &v1;
                        break;
                    } else if (v12 - &g_5a0000) as u32 >= 0x80000 {
                        if v12 - &g_640000 >= 0x80000 {
                            continue;
                        }
                        goto LABEL_844e1f;
                    }
                }
            }
        }
        v12 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v7);
    } while (v12 != 2);
    return v12;
}
