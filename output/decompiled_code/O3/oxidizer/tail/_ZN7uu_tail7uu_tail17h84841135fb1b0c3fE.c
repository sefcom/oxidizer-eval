fn uu_tail::uu_tail(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x19a]
    let v1: i8;  // [sp-0x199]
    let v2: i128;  // [sp-0x198]
    let v3: i64;  // [sp-0x188]
    let v4: struct24;  // [sp-0x178], Other Possible Types: i192
    let v5: i128;  // [bp-0x160]
    let v6: struct119;  // [sp-0x150], Other Possible Types: i952
    let v7: i192;  // [sp-0xc0], Other Possible Types: struct24
    let v9: i64;  // rdx
    let v10: i64;  // rbp
    let v11: i64;  // rax
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i256;  // ymm0
    let v15: i128;  // xmm0
    let v16: i64;  // r8
    let v17: i64;  // r9
    let v18: i64;  // rcx

    v0 = *((a0 + 74) as &i8);
    v1 = 1;
    v6 = uu_tail::follow::watch::Observer::from(a0, a2);
    v10 = uu_tail::follow::watch::Observer::start(&v6, a0, v9);
    if v10 {
        return v10;
    }
    v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24);
    v5 = *((&v4 as &char + 8) as &i128);
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    if v11 {
        do {
            if *((v11 + 24) as &i64) != 0x8000000000000000 {
                v7 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
                v3 = *((&v7 as &char + 16) as &i64);
                v15 = v7;
                v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
                v2 = v15;
                if !<std::path::PathBuf as core::cmp::PartialEq>::eq(*((v11 + 32) as &i64), *((v11 + 40) as &i64), *((&v2 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64), v16, v17) as i8 {
                    v10 = uu_tail::tail_file(a0, &v0, v11, *((v11 + 32) as &i64), *((v11 + 40) as &i64), &v6, 0);
                }
            }
            v10 = uu_tail::tail_stdin(a0, &v0, v11, &v6, v12, v13);
            if v10 {
                return v10;
            }
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
        } while (v11);
    }
    if !(*((a0 + 76) as &i8) == 2 || uu_tail::args::Settings::has_only_stdin(a0) as i8) {
        memcpy(&v7, &v6, 144);
        v10 = uu_tail::follow::watch::follow(&v7, a0, v9, v18, v16, v17);
        if v10 {
            return v10;
        }
    }
    uucore::mods::error::get_exit_code();
    return 0;
}
