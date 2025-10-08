fn uu_more::Pager::page_up(a0: i64) -> u64 {
    let v0: struct24;  // [bp-0x48]
    let v3: u64;  // rcx
    let v4: u64;  // rax
    let v7: void*;  // r14
    let v8: u64;  // r15
    let v9: i64;  // rbp
    let v10: void*;  // r14
    let v11: void*;  // rax
    let v12: void*;  // r14
    let v13: void*;  // r14
    let v14: u64;  // rdx

    v3 = *((a0 + 80) as &i64);
    v4 = *((a0 + 88) as &i64) + *((a0 + 120) as &i64);
    *((a0 + 80) as &void*) = v7;
    if *((a0 + 129) as &i8) != 1 {
        return 0;
    }
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    if v3 <= v4 {
        return v13;
    }
    v8 = *((a0 + 64) as &i64);
    v9 = *((a0 + 72) as &i64);
    do {
        v10 = v12;
        v11 = uu_more::Pager::seek_to_line(a0, v10);
        if v11 {
LABEL_47b120:
            v13 = v11;
            break;
        } else if !(*((v9 + 128) as &i64)(v8, &v0) as i8 & 1) {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(1, 0, "\n") {
                break;
            }
            continue;
        } else {
            v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
            goto LABEL_47b120;
        }
        v12 = v10 - 1;
        *((a0 + 80) as &void*) = v12;
    } while (v10 != 1);
    return v13;
}
