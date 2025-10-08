fn uu_uptime::process_utmpx(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x378]
    let v1: void*;  // [bp-0x370]
    let v4: struct60;  // [bp-0x358]
    let v5: i64;  // [bp-0x350]
    let v6: struct16;  // [bp-0x344]
    let v7: struct388;  // [bp-0x334]
    let v9: u8;  // [bp-0x1b0]
    let v11: u64;  // rax
    let v13: u32;  // eax

    v11 = (!a1 ? uucore::features::utmpx::Utmpx::iter_all_records() : uucore::features::utmpx::Utmpx::iter_all_records_from(a1));
    loop {
        do {
            do {
                vvar_139{stack -820} = struct388 OrderedDict([(0, 𝜙@32b [((4619150, None), vvar_116{stack -820}), ((4619166, None), vvar_116{stack -820}), ((4619113, None), vvar_116{stack -820}), ((4619003, None), None), ((4619118, None), vvar_116{stack -820})]), (4, 𝜙@3072b [((4619150, None), vvar_117{stack -816}), ((4619166, None), vvar_117{stack -816}), ((4619113, None), vvar_117{stack -816}), ((4619003, None), None), ((4619118, None), vvar_117{stack -816})])])
                <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(&v7);
                if v7.field_0 != 1 {
                    *(v5 as &struct16) = v0;
                    *((v5 + 8) as &struct60) = v4;
                    *((v5 + 16) as &void*) = v1;
                    return v5;
                }
                memcpy(&v9, &v7 as u3072, 384);
                v13 = *(&v9 as &i16);
            } while (v13 != 2);
            v6 = uucore::features::utmpx::Utmpx::login_time(&v9);
        } while (time::offset_date_time::OffsetDateTime::unix_timestamp(&v6) <= 0);
        v4 = time::offset_date_time::OffsetDateTime::unix_timestamp(&v6);
        v0 = 1;
    }
}
