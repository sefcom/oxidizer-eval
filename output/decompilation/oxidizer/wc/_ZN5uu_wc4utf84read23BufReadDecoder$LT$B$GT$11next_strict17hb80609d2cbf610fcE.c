fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &Option<struct16>, a1: void*) -> u64 {
    let v0: struct16;  // [sp-0x48]
    let v1: Result<struct16, struct10>;  // [sp-0x48]
    let v3: i64;  // r15
    let v5: i64;  // rbp
    let v6: i64;  // r13
    let v7: i8;  // dl
    let v9: i64;  // r13
    let v10: i64;  // rax
    let v12: i8;  // bpl
    let v14: i64;  // r13
    let v15: i64;  // r13

    v3 = a1 + 24;
    loop {
        if *((a1 + 16) as &i64) {
            <std::io::stdio::StdinLock as std::io::BufRead>::consume(a1, *((a1 + 16) as &i64));
            *((a1 + 16) as &i64) = 0;
        }
        v0 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
        v5 = v0.field_0;
        if !v5 {
            return Some(struct16 {
                field_0: 0
                field_8: v18
            });
        }
        v6 = v0.field_8;
        if *((a1 + 28) as &i8) {
            if !v6 {
                uu_wc::utf8::Incomplete::take_buffer(v3);
                return Some(struct16 {
                    field_0: v11
                    field_8: v19
                });
            }
            *((a1 + 16) as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v3, v5, v6);
            if v7 == 2 {
                continue;
            }
            v12 = v7;
            uu_wc::utf8::Incomplete::take_buffer(v3);
            break;
        }
        if !v6 {
            return struct8 {
                field_0: 2
            };
        }
        v1 = core::str::converts::from_utf8(v5, v6);
        match v1 {
            Ok(_) => {
                v12 = 0;
                goto LABEL_4c2cc2;
            },
            Err(_) => {
                if v9 {
                    v14 = *((&v1 as &char + 8) as &i64);
                    goto LABEL_4c2cbb;
                }
            },
        }
        if !(*((&v1 as &char + 16) as &i8) & 1) {
            *((a1 + 16) as &unsigned long) = v6;
            v10 = uu_wc::utf8::Incomplete::new(v5, v6);
            *((a1 + 24) as &u32) = v10 as u32;
            *((a1 + 28) as &u8) = (v10 >> 32) as u8;
        } else {
            v15 = *((&v1 as &char + 17) as &i8);
LABEL_4c2cbb:
            v12 = v5 & -0x100 | !v14;
LABEL_4c2cc2:
            *((a1 + 16) as &unsigned long) = v6;
            v0 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
            if v0.field_0 {
                <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, v0.field_0, v0.field_8);
                break;
            }
        }
    }
    if (v12 & 1) {
        return Some(struct16 {
            field_0: v11
            field_8: v19
        });
    }
    return struct8 {
        field_0: 0
    };
}
