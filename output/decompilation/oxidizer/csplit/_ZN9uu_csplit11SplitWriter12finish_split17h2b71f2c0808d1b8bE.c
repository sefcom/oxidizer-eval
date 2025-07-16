fn uu_csplit::SplitWriter::finish_split() -> : struct8 {
    let a0: i64;  // rsi
    let v1: i64;  // rdi

    if *((v1 + 56) as &i8) {
        return;
    }
    if *((*((v1 + 32) as &i64) + 98) as &i8) && !*((v1 + 48) as &i64) {
        *((v1 + 40) as &i64) = *((v1 + 40) as &i64) - 1;
        return;
    }
    if *((*((v1 + 32) as &i64) + 97) as &i8) {
        return;
    }
    println!("{}", v1 + 48);
    return;
}
