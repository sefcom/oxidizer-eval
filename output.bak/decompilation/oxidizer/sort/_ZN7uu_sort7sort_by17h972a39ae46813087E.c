fn uu_sort::sort_by(a0: &u64, a1: &u64, a2: u64) -> u64 {
    if !*((&a1[16] as &char + 3) as &i8) && !*((&a1[16] as &char + 4) as &i8) {
        goto LABEL_0x51d280;
    }
    return rayon::slice::ParallelSliceMut::par_sort_by(a0[1], a0[2], a1, a2);
}
