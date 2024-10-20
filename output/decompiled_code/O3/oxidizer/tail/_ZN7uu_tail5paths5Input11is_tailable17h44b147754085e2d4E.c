fn uu_tail::paths::Input::is_tailable(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x38], Other Possible Types: Enum

    if *((a0 + 24) as &i64) != 0x8000000000000000 {
        return uu_tail::paths::path_is_tailable(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    }
    v0 = uu_tail::paths::Input::resolve(a0, a2, a3, a4, a5);
    if v0 == 0x8000000000000000 {
        return 0;
    }
    return uu_tail::paths::path_is_tailable(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) as i32;
}
