fn zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_interactive(a0: i64, a1: &struct120, a2: i64) -> u64 {
    let v0: u64;  // [bp-0xf0]
    let v1: i64;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v3: struct16;  // [bp-0xd8], Other Possible Types: Result<struct32, struct8>, struct24
    let v4: struct32;  // [bp-0xd4]
    let v5: u64;  // [bp-0xd0], Other Possible Types: unsigned long
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xa8]
    let v8: i64;  // [bp-0xa0]
    let v9: u64;  // [bp-0x98]
    let v10: struct32;  // [bp-0x84]
    let v12: u64;  // [bp-0x58]
    let v13: Result<struct8, struct8>;  // [bp-0x50]
    let v15: u64;  // 4106
    let v16: u64;  // rax
    let v17: i64;  // rbp
    let v18: i64;  // rbp

    v3 = zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_fzf();
    match v3 {
        Err(_) => {
            return v5;
        },
        Ok(_) => {
            v10 = v4;
            v15 = *((a0 + 24) as &i64);
            if (((0 ^ v15) & (0 ^ -(v15))) >> 63) as char {
                do {
                    v16 = zoxide::db::stream::Stream::next(a1);
                    if !v16 {
                        goto LABEL_48fd1d;
                    }
                    v3 = zoxide::util::FzfChild::write(&v10, v16, a2);
                    v17 = v5;
                    if v3.field_0 as i64 == 9223372036854775809 {
                        goto LABEL_0x48febe;
                    }
                    v0 = v3.field_0 as i64;
                    v1 = v17;
                    v2 = v6;
                } while (v0 == 0x8000000000000000);
LABEL_48fe10:
                v9 = v2;
                v7 = v0;
                v8 = v1;
                if *((a0 + 75) as &i8) {
LABEL_48fe40:
                    print!("{}", &v7);
                    return 0;
                }
LABEL_48fd65:
                v3 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(7, v8, v9) as u64, a2, "could not read selection from fzf");
                v17 = v5;
                if v3.field_0 {
                    v12 = v3.field_0;
                    v13 = v17;
                    print!("{}", &v12);
                }
            } else {
                loop {
                    v18 = zoxide::db::stream::Stream::next(a1);
                    if !v18 {
                        break;
                    }
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v18 + 8) as &i64), *((v18 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64)) as u8 {
                        continue;
                    }
                    v3 = zoxide::util::FzfChild::write(&v10, v18, a2);
                    v17 = v5;
                    if v3.field_0 as i64 == 9223372036854775809 {
                        return v17;
                    }
                    v0 = v3.field_0 as i64;
                    v1 = v17;
                    v2 = v6;
                    if v0 != 0x8000000000000000 {
                        goto LABEL_48fe10;
                    }
                }
LABEL_48fd1d:
                v3 = zoxide::util::FzfChild::wait(&v10);
                v17 = v5;
                if let Ok(_) = v3 {
                    v7 = v3 as i64;
                    v8 = v17;
                    v9 = v6;
                    if *((a0 + 75) as &i8) {
                        goto LABEL_48fe40;
                    }
                    goto LABEL_48fd65;
                }
            }
            return v17;
        },
    }
}
