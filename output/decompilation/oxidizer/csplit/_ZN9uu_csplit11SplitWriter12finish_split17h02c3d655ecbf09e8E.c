fn uu_csplit::SplitWriter::finish_split() -> : struct8 {
    let a0: i64;  // rdi

    if *((a0 + 56) as &i8) {
        return;
    }
    if *((*((a0 + 32) as &i64) + 98) as &i8) == 1 && !*((a0 + 48) as &i64) {
        *((a0 + 40) as &i64) = *((a0 + 40) as &i64) - 1;
        return;
    }
    if *((*((a0 + 32) as &i64) + 97) as &i8) {
        return;
    }
    println!("{}", a0 + 48);
    return;
}
