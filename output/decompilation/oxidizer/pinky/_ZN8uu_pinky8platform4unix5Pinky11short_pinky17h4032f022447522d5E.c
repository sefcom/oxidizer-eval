fn uu_pinky::platform::unix::Pinky::short_pinky(a0: &struct31) -> u64 {
    let v0: u64;  // [bp-0x368]
    let v1: u8;  // [bp-0x360]
    let v2: u64;  // [bp-0x350]
    let v3: struct16;  // [bp-0x348]
    let v4: struct388;  // [bp-0x334]
    let v5: struct388;  // [bp-0x334]
    let v7: u64;  // [bp-0x1b0]
    let v9: u8;  // dl
    let v10: void*;  // rax

    if *((a0 + 25) as &i8) {
        uu_pinky::platform::unix::Pinky::print_heading(a0);
    }
    v0 = uucore::features::utmpx::Utmpx::iter_all_records();
    v1 = v9 & 1;
    if *((a0 + 16) as &i64) {
        v2 = *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 24;
        loop {
            vvar_242{stack -820} = struct388 OrderedDict([(0, 𝜙@32b [((4602060, None), vvar_215{stack -820}), ((4602011, None), vvar_215{stack -820}), ((4602043, None), vvar_215{stack -820}), ((4601904, None), None)]), (4, 𝜙@3072b [((4602060, None), vvar_216{stack -816}), ((4602011, None), vvar_216{stack -816}), ((4602043, None), vvar_216{stack -816}), ((4601904, None), None)])])
            <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(&v5);
            if v5.field_0 != 1 {
                break;
            }
            memcpy(&v7, &v5 as u3072, 384);
            if !uucore::features::utmpx::Utmpx::is_user_process(&v7) {
                continue;
            }
            v3 = struct16 {
                field_0: *((a0 + 8) as &i64)
                field_8: v2
            };
            if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v3, &v7) {
                continue;
            }
            v10 = uu_pinky::platform::unix::Pinky::print_entry(a0, &v7);
            if v10 {
                break;
            }
        }
    } else {
        loop {
            vvar_243{stack -820} = struct388 OrderedDict([(0, 𝜙@32b [((4602165, None), vvar_220{stack -820}), ((4602150, None), vvar_220{stack -820}), ((4602067, None), None)]), (4, 𝜙@3072b [((4602165, None), vvar_221{stack -816}), ((4602150, None), vvar_221{stack -816}), ((4602067, None), None)])])
            <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(&v4);
            if v4.field_0 != 1 {
                break;
            }
            memcpy(&v7, &v4 as u3072, 384);
            if !uucore::features::utmpx::Utmpx::is_user_process(&v7) {
                continue;
            }
            v10 = uu_pinky::platform::unix::Pinky::print_entry(a0, &v7);
            if v10 {
                break;
            }
        }
    }
    return v10;
}
