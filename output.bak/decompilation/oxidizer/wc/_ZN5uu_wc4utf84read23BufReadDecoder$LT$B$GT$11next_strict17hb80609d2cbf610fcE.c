fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &Option<struct16>, a1: void*) -> u64 {
    let v0: i128;  // [sp-0x48], Other Possible Types: struct16, Result<struct16, struct10>
    let v1: i8;  // [bp-0x37]
    let v3: i64;  // r15
    let v5: i64;  // rbp
    let v6: i64;  // r13
    let v7: i8;  // dl
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v12: i64;  // rax

    v3 = a1 + 24;
    loop {
        if *((a1 + 16) as &i64) {
            <std::io::stdio::StdinLock as std::io::BufRead>::consume(a1, *((a1 + 16) as &i64));
            *((a1 + 16) as &i64) = 0;
        }
        v0 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
        v5 = v0;
        if !v5 {
            return Some(struct16 {
                field_0: 0
                field_8: v16
            });
        }
        v6 = *((&v0 as &char + 8) as &i64);
        if *((a1 + 28) as &i8) {
            if !v6 {
                uu_wc::utf8::Incomplete::take_buffer(v3);
                return Some(struct16 {
                    field_0: v10
                    field_8: v14
                });
            }
            *((a1 + 16) as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v3, v5, v6);
            if v7 == 2 {
                continue;
            }
            uu_wc::utf8::Incomplete::take_buffer(v3);
            break;
        }
        return struct8 {
            field_0: 2
        };
        v0 = core::str::converts::from_utf8(v5, v6);
        match v0 {
            Ok(_) => {
                goto LABEL_4c2cc2;
            },
            Err(_) => {
                v8 = *((&v0 as &char + 8) as &i64);
            },
        }
        if v8 {
            goto LABEL_4c2cbb;
        }
        if !(*((&v0 as &char + 16) as &i8) & 1) {
            *((a1 + 16) as &i64) = v6;
            v9 = uu_wc::utf8::Incomplete::new(v5, v6);
            *((a1 + 24) as &i32) = v9;
            *((a1 + 28) as &i8) = v9 >> 32;
        } else {
            v12 = v1;
LABEL_4c2cbb:
LABEL_4c2cc2:
            *((a1 + 16) as &i64) = v6;
            v0 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
            if v0 {
                <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, v0, *((&v0 as &char + 8) as &i64));
                break;
            }
        }
    }
    return struct24 {
        field_0: 0
        field_8: v10
        field_16: v14
    };
}
