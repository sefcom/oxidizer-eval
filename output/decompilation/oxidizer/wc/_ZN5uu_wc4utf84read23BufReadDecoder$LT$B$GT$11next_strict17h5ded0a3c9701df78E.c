fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: i64, a1: void*) -> long long {
    let v0: void*;  // [bp-0x50]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48]
    let v2: i64;  // [bp-0x40]
    let v3: u8;  // [bp-0x38]
    let v5: u64;  // r15
    let v6: i64;  // r13
    let v7: u8;  // dl
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v11: i64;  // r13
    let v13: u8;  // bpl
    let v14: u64;  // rdx
    let v15: i64;  // rcx
    let v16: Result<struct16, struct16>;  // [bp-0x48]

    v5 = a1 + 56;
    loop {
        if a1[48] as i64 {
            <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::consume(a1, a1[48] as i64);
            *(&a1[48] as &i64) = 0;
        }
        v16 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
        if let Err(_) = v16 {
            *(v0 as &i64) = 1;
            *(&v0[8] as &i64) = 0;
            *(&v0[16] as &unsigned long) = v2;
            return v2;
        }
        v6 = v2;
        if a1[60] as i8 {
            if v6 {
                *(&a1[48] as &u64) = uu_wc::utf8::Incomplete::try_complete_offsets(v5, v16 as i64, v6);
                if v7 == 2 {
                    continue;
                }
                uu_wc::utf8::Incomplete::take_buffer(v5);
                if (v7 & 1) {
                    goto LABEL_4649ce;
                }
                goto LABEL_464962;
            } else {
                uu_wc::utf8::Incomplete::take_buffer(v5);
LABEL_4649ce:
                v15 = a0;
                *(v0 as &i64) = 1;
                break;
            }
        }
        if !v6 {
            *(v0 as &i64) = 2;
            return a0;
        }
        v1 = core::str::converts::from_utf8(v16 as i64, v6);
        if let Ok(_) = v1 {
LABEL_464997:
            *(&a1[48] as &unsigned long) = v6;
            v16 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
            if let Err(_) = v16 {
                *(v0 as &i64) = 1;
                *(&v0[8] as &i64) = 0;
                *(&v0[16] as &unsigned long) = v2;
                return v2;
            }
            <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v6, v16 as i64, v2, "src/uu/wc/src/utf8/read.rs");
            if (v13 & 1) {
                goto LABEL_4649ce;
            }
LABEL_464962:
            v15 = a0;
            *(v0 as &i64) = 0;
            break;
        }
        if v2 {
            v11 = v2;
            goto LABEL_464990;
        } else if !(v3 & 1) {
            *(&a1[48] as &unsigned long) = v6;
            v8 = uu_wc::utf8::Incomplete::new(v1 as i64, v6);
            *(&a1[56] as &u32) = v8;
            *(&a1[60] as &u8) = v8 >> 32;
        } else {
            v11 = *((&v1 as &char + 17) as &i8);
LABEL_464990:
            v6 = v11;
            goto LABEL_464997;
        }
    }
    *((v15 + 8) as &u64) = v9;
    *((v15 + 16) as &u64) = v14;
    return v9;
}
