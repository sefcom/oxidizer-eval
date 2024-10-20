fn uu_dircolors::escape(a0: &u64, a1: &u64, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x54], Other Possible Types: u8
    let v1: i8;  // [sp-0x53], Other Possible Types: u8
    let v2: u8;  // [sp-0x52], Other Possible Types: i8
    let v3: u8;  // [sp-0x51]
    let v4: struct16;  // [sp-0x50], Other Possible Types: void*
    let v5: &u8;  // [sp-0x48]
    let v6: &u8;  // [sp-0x40]
    let v8: u64;  // r14
    let v9: u64;  // rbx
    let v10: &u8;  // rbp
    let v12: u32;  // ecx
    let v13: u32;  // esi
    let v14: u32;  // edx
    let v15: &u8;  // rbp
    let v16: u64;  // rcx
    let v17: u64;  // rcx
    let v18: &u8;  // rbp
    let v19: u32;  // eax
    let v20: u64;  // r13
    let v21: &u8;  // rbp

    v4 = 0;
    v5 = 1;
    v6 = 0;
    if !a2 {
        a0[2] = v6;
        *(a0) = v4;
        a0[1] = v5;
        return a0;
    }
    v8 = a2 + a1;
    v9 = 32;
    v10 = 0;
    loop {
        v6 = v6;
        v9 = *(a1 as &i8);
        if v9 >= 0 {
            a1 = a1 as &char + 1;
            if !(v9 == 39) {
                goto LABEL_492550;
            }
            goto LABEL_492610;
        }
        v12 = v9 & 31;
        v13 = *((a1 as &char + 1) as &i8) & 63;
        if (v9 & 255) <= 223 {
            a1 = a1 as &char + 2;
            v9 = v12 * 64 | v13;
            if !(v9 == 39) {
                goto LABEL_492550;
            }
            goto LABEL_492610;
        }
        v14 = *((a1 as &char + 2) as &i8) & 63 | v13 * 64;
        if (v9 & 255) < 240 {
            a1 += &g_3;
            v9 = v14 | v12 * 0x1000;
            if !(v9 == 39) {
                goto LABEL_492550;
            }
LABEL_492610:
            if v4 - v10 <= 3 {
                v4 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v10, 4);
                v15 = v6;
            }
            *((v5 + v15) as &i32) = 656890919;
            v10 = v6 + 4;
            goto LABEL_4924c5;
        }
        a1 = a1 as &char + 4;
        v9 = *((a1 + &g_3) as &i8) & 63 | v14 * 64 | (v12 & 7) * 0x40000;
        if v9 == 39 {
            goto LABEL_492610;
        }
LABEL_492550:
        if v9 != 58 {
            if v9 <= 127 {
                v17 = v4;
            } else {
                v0 = 0;
                v19 = v9;
                if v9 < 0x800 {
                    v0 = v19 >> 6 | 192;
                    v1 = v9 & 4294967295 & 63 | 128;
                    v20 = 2;
                } else if v9 >= 0x10000 {
                    v0 = v19 >> 18 | 240;
                    v1 = (v9 & 4294967295 & 4294967295) >> 12 & 4294967295 & 63 | 128;
                    v2 = (v9 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
                    v3 = v9 & 4294967295 & 63 | 128;
                    v20 = 4;
                } else {
                    v0 = v19 >> 12 | 224;
                    v1 = (v9 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
                    v2 = v9 & 4294967295 & 63 | 128;
                    v20 = &g_3;
                }
                if v4 - v10 < v20 {
                    v4 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v10, v20);
                    v21 = v6;
                }
                memcpy(v21 + v5, &v0, v20);
                v10 = &v6[v20];
                v6 = v10;
                if a1 == v8 {
                    break;
                }
                continue;
            }
LABEL_4925aa:
            if v10 == v17 {
                v4 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            *((v5 + v10) as &u8) = v9;
            v10 += 1;
        } else {
            v16 = v4;
            if v9 == 92 {
                goto LABEL_4925aa;
            }
            if v16 - v10 <= 1 {
                v4 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v10, 2);
                v18 = v6;
            }
            *((v5 + v18) as &i16) = 14940;
            v10 = v6 + 2;
        }
LABEL_4924c5:
        v6 = v10;
        if a1 == v8 {
            break;
        }
    }
}
