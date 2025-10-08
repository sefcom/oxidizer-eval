fn uu_more::Pager::load_visible_lines() -> : struct16 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x50]
    let v1: void*;  // [bp-0x50]
    let v2: struct24;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: void*;  // [bp-0x40]
    let v5: struct24;  // [bp-0x38]
    let v7: u64;  // rdx

    *((a0 + 32) as &i64) = 0;
    *((a0 + 120) as &i64) = 0;
    if uu_more::Pager::seek_to_line(a0, *((a0 + 80) as &i64)) {
        return;
    }
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    if !*((a0 + 88) as &i64) {
        return;
    }
    loop {
        v4 = 0;
        if (*((*((a0 + 72) as &i64) + 128) as &i64)(*((a0 + 64) as &i64), &v1) as i8 & 1) {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
            return;
        }
        if !v7 {
            break;
        }
        if uu_more::Pager::should_squeeze_line(a0, 1, v4) {
            *((a0 + 120) as &i64) = *((a0 + 120) as &i64) + 1;
        } else {
            v5 = v2;
            v1 = 0;
            v3 = 1;
            v4 = 0;
            alloc::vec::Vec<T,A>::push(a0 + 16, &v5);
        }
        if *((a0 + 32) as &i64) >= *((a0 + 88) as &i64) {
            break;
        }
    }
    return;
}
