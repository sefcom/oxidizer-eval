fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &u64, a1: void*) -> u64 {
    let v0: u128;  // [sp-0x48], Other Possible Types: struct16, Result<struct16, struct10>
    let v1: u8;  // [bp-0x38]
    let v2: u8;  // [bp-0x37]
    let v4: u64;  // r15
    let v6: u64;  // rbp
    let v7: u64;  // r13
    let v8: u8;  // dl
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u8;  // bpl
    let v14: u64;  // r13
    let v16: u64;  // rax
    let v17: u64;  // rdx

    v4 = &a1->field_18;
    loop {
        if a1->field_10 {
            <std::io::stdio::StdinLock as std::io::BufRead>::consume(a1, a1->field_10);
            a1->field_10 = 0;
        }
        v0 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
        v6 = v0;
        if !v6 {
            v16 = *((&v0 as &char + 8) as &i64);
            a0 = a0;
            *(a0) = 1;
            a0[1] = 0;
            a0[2] = v16;
            return a0;
        }
        v7 = *((&v0 as &char + 8) as &i64);
        if !a1->field_1c {
            if !v7 {
                a0 = a0;
                *(a0) = 2;
                return a0;
            }
            v0 = core::str::converts::from_utf8(v6, v7);
            match v0 {
                Ok(_) => {
                    v12 = 0;
                    goto LABEL_4c3222;
                },
                Err(_) => {
                    v9 = *((&v0 as &char + 8) as &i64);
                },
            }
            if v9 {
                goto LABEL_4c321b;
            }
            if !v1 {
                a1->field_10 = v7;
                v10 = uu_wc::utf8::Incomplete::new(v6, v7);
                a1->field_18 = v10;
                a1->field_1c = v10 >> 32;
            } else {
                v14 = v2;
LABEL_4c321b:
                v12 = v6 | -0x100 | !v9;
LABEL_4c3222:
                a1->field_10 = v7;
                v0 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
                if !v0 as i64 {
                    vvar_248{reg 16} = *((&v0 as &char + 8) as &i64);
                    vvar_249{reg 24} = a0;
                    *(a0) = 1;
                    a0[1] = 0;
                    a0[2] = v16;
                    return a0;
                }
                v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v0 as i64, *((&v0 as &char + 8) as &i64), "src/uu/wc/src/utf8/read.rs");
                goto LABEL_4c3252;
            }
        } else {
            if !v7 {
                v11 = uu_wc::utf8::Incomplete::take_buffer(v4);
            } else {
                *(&a1->field_10 as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v4, v6, v7);
                if v8 == 2 {
                    continue;
                }
                v11 = uu_wc::utf8::Incomplete::take_buffer(v4);
LABEL_4c3252:
                a0 = a0;
                if !(v12 & 1) {
                    *(a0) = 0;
                    break;
                }
            }
            *(a0) = 1;
            break;
        }
    }
    a0[1] = v11;
    a0[2] = v17;
    return a0;
}
