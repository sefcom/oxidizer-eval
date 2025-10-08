fn uu_test::eval(a0: i64, a1: i64) -> long long {
    let v1: u64;  // rcx

    if !*((a1 + 16) as &i64) {
        return struct16 {
            field_0: 7
            field_8: 0
        };
    }
    v1 = *((a1 + 16) as &i64) - 1;
    *((a1 + 16) as &u64) = v1;
    goto ((&g_417ed8.field_0)[*((*((a1 + 8) as &i64) + v1 * 40) as &i64)] + &g_417ed8.field_0) as i64;
}
