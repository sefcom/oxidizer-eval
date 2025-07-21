fn uu_tail::uu_tail(a0: i64) -> long long {
    let v0: u8;  // [bp-0x19a]
    let v1: u8;  // [bp-0x199]
    let v2: u128;  // [bp-0x198]
    let v3: u64;  // [bp-0x188]
    let v4: u8;  // [bp-0x178]
    let v5: u64;  // [bp-0x170]
    let v6: u64;  // [bp-0x168]
    let v7: struct16;  // [bp-0x160]
    let v8: struct119;  // [bp-0x150]
    let v9: u128;  // [bp-0xc0]
    let v10: std::sys::os_str::bytes::Buf;  // [bp-0xc0]
    let v12: core::fmt::Arguments;  // rbp
    let v13: i64;  // rax
    let v14: i64;  // rbp
    let v15: u64;  // rax

    v0 = *((a0 + 74) as &i8);
    v1 = 1;
    v8 = uu_tail::follow::watch::Observer::from(a0);
    v12 = uu_tail::follow::watch::Observer::start(&v8, a0);
    if v12 {
        return v12;
    }
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v4, a0 + 24);
    v7 = struct16 {
        field_0: v5
        field_8: v6 * 48 + v5
    };
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v13 {
        v14 = v13;
        loop {
            if *((v14 + 24) as &i64) == 0x8000000000000000 || (v10 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin"), v3 = v10.inner.len, v2 = *(&v10.inner.buf.cap as &i128) as u128, <std::path::PathBuf as core::cmp::PartialEq>::eq(*((v14 + 32) as &i64), *((v14 + 40) as &i64)) as u8) {
                v12 = uu_tail::tail_stdin(a0, &v0, v14, &v8);
            } else {
                v12 = uu_tail::tail_file(a0, &v0, v14, *((v14 + 32) as &i64), *((v14 + 40) as &i64), &v8, 0);
            }
            if v12 {
                break;
            }
            v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
            if !v14 {
                goto LABEL_500061;
            }
        }
    }
LABEL_500061:
    if *((a0 + 76) as &i8) != 2 && !uu_tail::args::Settings::has_only_stdin(a0) {
        memcpy(&v9, &v8, 144);
        v15 = uu_tail::follow::watch::follow(&v9, a0);
        if v15 {
            return v15;
        }
    }
    uucore::mods::error::get_exit_code();
    return 0;
}
