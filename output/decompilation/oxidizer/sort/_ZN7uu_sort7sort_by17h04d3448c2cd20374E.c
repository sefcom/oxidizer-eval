fn uu_sort::sort_by(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    if *((a2 + 131) as &i8) {
        return rayon::slice::ParallelSliceMut::par_sort_by(a0, a1, a2, a3);
    } else if *((a2 + 132) as &i8) != 1 {
        return rayon::slice::ParallelSliceMut::par_sort_unstable_by(a0, a1, a2, a3);
    } else {
        return rayon::slice::ParallelSliceMut::par_sort_by(a0, a1, a2, a3);
    }
}
