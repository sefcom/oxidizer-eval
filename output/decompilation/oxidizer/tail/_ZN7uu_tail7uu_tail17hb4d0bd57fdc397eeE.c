fn uu_tail::uu_tail(a0: i64) -> u64 {
    let v0: struct32;  // [bp-0x16a]
    let v1: struct32;  // [bp-0x169]
    let v2: u8;  // [bp-0x168]
    let v3: core::fmt::rt::Argument;  // [bp-0x160]
    let v4: &mut [u8];  // [bp-0x158]
    let v5: struct119;  // [bp-0x150]
    let v6: u64;  // [bp-0xc0]
    let v7: struct24;  // [bp-0xc0]
    let v9: struct24;  // rax
    let v10: u64;  // r12
    let v11: u64;  // r12
    let v12: u8;  // al
    let v14: u64;  // rax

    v0 = *((a0 + 74) as &i8);
    v1 = 1;
    v5 = uu_tail::follow::watch::Observer::from(a0);
    v9 = uu_tail::follow::watch::Observer::start(&v5, a0);
    if v9 {
        return v9;
    }
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v2, *((a0 + 32) as &i64), *((a0 + 40) as &i64));
    if v4 {
        loop {
            v11 = v10;
            if (((0 ^ *((v3 + 24) as &i64)) & (0 ^ -(*((v3 + 24) as &i64)))) >> 63) as char {
                v9 = uu_tail::tail_stdin(a0, &v0, v3, &v5);
            } else {
                v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/stdin");
                v12 = <std::path::PathBuf as core::cmp::PartialEq>::eq(*((v3 + 32) as &i64), *((v3 + 40) as &i64));
                v9 = (!v12 ? uu_tail::tail_file(a0, &v0, v3, *((v3 + 32) as &i64), *((v3 + 40) as &i64), &v5 as u8, 0) : uu_tail::tail_stdin(a0, &v0, v3, &v5 as u8));
            }
            if v9 {
                break;
            }
            v3 += 48;
            v10 = v11 - 48;
            if v11 == 48 {
                goto LABEL_4a69f8;
            }
        }
    }
LABEL_4a69f8:
    if *((a0 + 76) as &i8) != 2 && (!uu_tail::args::Settings::has_only_stdin(a0) || *((a0 + 68) as &i32)) {
        memcpy(&v6, &v5, 144);
        v14 = uu_tail::follow::watch::follow(&v6, a0);
        if v14 {
            return v14;
        }
    }
    uucore::mods::error::get_exit_code();
    return 0;
}
