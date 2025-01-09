fn uu_split::number::Number::increment(a0: &struct8) -> u64 {
    if !(*(a0) == 0x8000000000000000) {
        goto LABEL_0x4db7c0;
    }
    a0[1] = a0[1] + 1;
    return 0;
}
