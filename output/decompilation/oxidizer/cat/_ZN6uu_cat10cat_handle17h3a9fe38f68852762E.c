fn uu_cat::cat_handle(a0: &u64, a1: void*, a2: i64, a3: void*) -> long long {
    if *((a2 + 1) as &i8) {
        return uu_cat::write_lines(a0, a1, a2, a3);
    } else if *((a2 + 3) as &i8) {
        return uu_cat::write_lines(a0, a1, a2, a3);
    } else if *((a2 + 2) as &i8) {
        return uu_cat::write_lines(a0, a1, a2, a3);
    } else if *(a2 as &i8) {
        return uu_cat::write_lines(a0, a1, a2, a3);
    } else if !*((a2 + 4) as &i8) {
        return uu_cat::write_fast();
    } else {
        return uu_cat::write_lines(a0, a1, a2, a3);
    }
}
