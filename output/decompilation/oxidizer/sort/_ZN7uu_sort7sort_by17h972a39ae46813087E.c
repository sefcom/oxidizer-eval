fn uu_sort::sort_by(a0: i64, a1: i64, a2: i64) -> long long {
    if !*((a1 + 131) as &i8) && !*((a1 + 132) as &i8) {
        goto LABEL_0x51d280;
    }
    return rayon::slice::ParallelSliceMut::par_sort_by(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a1, a2);
}
