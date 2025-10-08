fn zoxide::db::stream::Stream::next(a0: i64) -> u64 {
    let v1: u64;  // rbx
    let v2: u64;  // rbx
    let v3: u64;  // r13
    let v4: u64;  // r12
    let v5: void*;  // r13

    v1 = *((a0 + 112) as &i64);
    if *((a0 + 104) as &i64) >= *((a0 + 112) as &i64) {
        return 0;
    }
    loop {
        v2 = v1 - 1;
        *((a0 + 112) as &u64) = v2;
        v3 = *((*((a0 + 96) as &i64) + 8) as &i64);
        v4 = v2 * 5;
        if zoxide::db::stream::Stream::filter_by_keywords(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((v3 + v4 * 8 + 8) as &i64), *((v3 + v4 * 8 + 16) as &i64)) {
            v5 = v3 + v4 * 8;
            if zoxide::db::stream::Stream::filter_by_base_dir(a0, v5[8] as i64, v5[16] as i64) {
                if zoxide::db::stream::Stream::filter_by_exclude(*((a0 + 32) as &i64), *((a0 + 40) as &i64), v5[8] as i64, v5[16] as i64) {
                    if zoxide::db::stream::Stream::filter_by_exists(*((a0 + 88) as &i32), *((a0 + 89) as &i8), v5[8] as i64, v5[16] as i64) {
                        return v4 * 8 + *((*((a0 + 96) as &i64) + 8) as &i64);
                    }
                    if v5[32] as i64 >= *((a0 + 80) as &i64) {
                        goto LABEL_4912d0;
                    }
                }
                zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::swap_remove(*((a0 + 96) as &i64), v2);
            }
        }
LABEL_4912d0:
        v1 = *((a0 + 112) as &i64);
        if *((a0 + 104) as &i64) >= *((a0 + 112) as &i64) {
            return 0;
        }
    }
}
