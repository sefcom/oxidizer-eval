fn uu_split::number::Number::increment() -> : struct8 {
    let a0: i64;  // rdi

    if !(*(a0 as &i64) == 0x8000000000000000) {
        goto LABEL_0x4db7c0;
    }
    *((a0 + 8) as &i64) = *((a0 + 8) as &i64) + 1;
    return 0;
}
