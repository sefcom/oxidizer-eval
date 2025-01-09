fn uu_tail::uu_tail(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0x1a8]
    let v1: i8;  // [sp-0x19a]
    let v2: i8;  // [sp-0x199]
    let v3: i128;  // [sp-0x198]
    let v4: i64;  // [sp-0x188]
    let v5: struct24;  // [sp-0x178]
    let v6: struct16;  // [sp-0x160]
    let v7: struct119;  // [sp-0x150], Other Possible Types: i952
    let v8: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v10: i64;  // rbp
    let v11: i64;  // rax
    let v12: i256;  // ymm0
    let v13: i128;  // xmm0

    v1 = *((a0 + 74) as &i8);
    v2 = 1;
    v7 = uu_tail::follow::watch::Observer::from(a0);
    v10 = uu_tail::follow::watch::Observer::start(&v7, a0);
    if v10 {
        return v10;
    }
    v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24);
    v6 = struct16 {
        field_0: *((&v5 as &char + 8) as &i64)
        field_8: *((&v5 as &char + 16) as &i64) * 48 + v6
    };
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    if v11 {
        do {
            if *((v11 + 24) as &i64) != 0x8000000000000000 {
                v8 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
                v4 = *((&v8 as &char + 16) as &i64);
                v13 = v8;
                v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
                v3 = v13;
                if !<std::path::PathBuf as core::cmp::PartialEq>::eq(*((v11 + 32) as &i64), *((v11 + 40) as &i64), *((&v3 as &char + 8) as &i64), *((&v8 as &char + 16) as &i64)) as i8 {
                    v0 = 0;
                    v10 = uu_tail::tail_file(a0, &v1, v11, *((v11 + 32) as &i64), *((v11 + 40) as &i64), &v7);
                }
            }
            v10 = uu_tail::tail_stdin(a0, &v1, v11, &v7);
            if v10 {
                return v10;
            }
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
        } while (v11);
    }
    if !(*((a0 + 76) as &i8) == 2 || uu_tail::args::Settings::has_only_stdin(a0) as i8) {
        memcpy(&v8, &v7, 144);
        v10 = uu_tail::follow::watch::follow(&v8, a0);
        if v10 {
            return v10;
        }
    }
    uucore::mods::error::get_exit_code();
    return 0;
}
