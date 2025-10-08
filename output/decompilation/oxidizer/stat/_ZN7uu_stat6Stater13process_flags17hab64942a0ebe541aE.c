fn uu_stat::Stater::process_flags(a0: i64, a1: i64, a2: i64, a3: u64, a4: i64) -> long long {
    let v1: u64;  // rdi

    v1 = *(a2 as &i64);
    if v1 >= a3 {
        return a0;
    }
    do {
        match (*((a0 + v1 * 4) as &i32)) {
            32 | 73 => {
                *((a4 + 3) as &i8) = 1;
                goto LABEL_4751b0;
            }
            35 => {
                *(a4 as &i8) = 1;
                goto LABEL_4751b0;
            }
            39 => {
                *((a4 + 5) as &i8) = 1;
                goto LABEL_4751b0;
            }
            43 => {
                *((a4 + 4) as &i8) = 1;
                goto LABEL_4751b0;
            }
            45 => {
                *((a4 + 2) as &i8) = 1;
                goto LABEL_4751b0;
            }
            48 => {
                *((a4 + 1) as &i8) = 1;
                goto LABEL_4751b0;
            }
        }
LABEL_4751b0:
        v1 += 1;
        *(a2 as &u64) = v1;
    } while (a3 != v1);
    return a0;
}
