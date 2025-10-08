fn starship::modules::time::is_inside_time_range(a0: i32, a1: i32, a2: i64, a3: i64) -> u64 {
    let v1: &str;  // r8d
    let v2: u8;  // r9b

    if *(a2 as &i32) != 1 {
        return (a0 == *((a3 + 4) as &i32) ? a1 < *((a3 + 8) as &i32) : a0 < *((a3 + 4) as &i32));
    }
    v1 = *((a2 + 4) as &i32);
    if !(*(a3 as &i8) & 1) {
        return (a0 == v1 ? *((a2 + 8) as &i32) < a1 : v1 < a0);
    }
    v2 = (v1 != a0 ? v1 < a0 : *((a2 + 8) as &i32) < a1);
    if (v1 == *((a3 + 4) as &i32) ? *((a2 + 8) as &i32) < *((a3 + 8) as &i32) : v1 < *((a3 + 4) as &i32)) {
        if !v2 {
            return 0;
        }
    } else {
        if v2 {
            return 1;
        }
    }
    return (a0 == *((a3 + 4) as &i32) ? a1 < *((a3 + 8) as &i32) : a0 < *((a3 + 4) as &i32));
}
