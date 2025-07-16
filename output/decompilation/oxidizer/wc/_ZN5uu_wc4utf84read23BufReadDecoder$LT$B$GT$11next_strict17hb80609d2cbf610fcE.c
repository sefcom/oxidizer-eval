fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &struct24, a1: i64) -> long long {
    let v0: i64;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u8;  // [bp-0x38]
    let v6: u64;  // r15
    let v7: core::option::Option<u32>;  // r13
    let v8: u8;  // dl
    let v9: u64;  // rax
    let v10: struct32;  // rax
    let v12: u64;  // r13
    let v14: core::option::Option<u32>;  // bpl
    let v15: u64;  // rdx
    let v16: core::result::Result<usize, std::io::error::Error>;  // rcx, Other Possible Types: struct_2 *
    let v17: core::result::Result<&[u8], std::io::error::Error>;  // rax:rdx
    let v18: core::result::Result<&[u8], std::io::error::Error>;  // rax:rdx

    v6 = a1 + 24;
    loop {
        if *((a1 + 16) as &i64) {
            <std::io::stdio::StdinLock as std::io::BufRead>::consume(a1, *((a1 + 16) as &i64));
            *((a1 + 16) as &i64) = 0;
        }
        v18 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&v1);
        if !v1 {
            *(v0 as &i64) = 1;
            *((v0 + 8) as &i64) = 0;
            *((v0 + 16) as &u64) = v3;
            return a0;
        }
        v7 = v3;
        if *((a1 + 28) as &i8) {
            match v7 {
                Some(_) => {
                    *((a1 + 16) as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v6, v1, v7);
                    if v8 == 2 {
                        continue;
                    }
                    uu_wc::utf8::Incomplete::take_buffer(v6);
                },
                None => {
                    uu_wc::utf8::Incomplete::take_buffer(v6);
                    v16 = a0;
                    goto LABEL_4c2d1e;
                },
            }
            goto LABEL_4c2ceb;
        }
        if let None = v7 {
            *(v0 as &i64) = 2;
            return a0;
        }
        v2 = core::str::converts::from_utf8(v1, v7);
        if let Ok(_) = v2 {
LABEL_4c2cc2:
            *((a1 + 16) as &core::option::Option<u32>) = v7;
            v17 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&v2);
            match v2 {
                Ok(_) => {
                    *(v0 as &i64) = 1;
                    *((v0 + 8) as &i64) = 0;
                    *((v0 + 16) as &u64) = v3;
                    return a0;
                },
                Err(_) => {
                    <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v2 as i64, v3);
                },
            }
LABEL_4c2ceb:
            v16 = a0;
            if !(v14 & 1) {
                *(v16 as &i64) = 0;
                break;
            }
LABEL_4c2d1e:
            *(v16 as &i64) = 1;
            break;
        }
        if v3 {
            v12 = v3;
            goto LABEL_4c2cbb;
        } else if !(v4 & 1) {
            *((a1 + 16) as &core::option::Option<u32>) = v7;
            v9 = uu_wc::utf8::Incomplete::new(v2 as i64, v7);
            *((a1 + 24) as &u32) = v9;
            *((a1 + 28) as &u8) = v9 >> 32;
        } else {
            v12 = *((&v2 as &char + 17) as &i8);
LABEL_4c2cbb:
            v7 = v12;
            goto LABEL_4c2cc2;
        }
    }
    *((v16 + 8) as &struct32) = v10;
    *((v16 + 16) as &u64) = v15;
    return v16;
}
