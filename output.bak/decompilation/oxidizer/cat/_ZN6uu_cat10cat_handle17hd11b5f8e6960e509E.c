fn uu_cat::cat_handle(a0: &Option<Result<struct24, struct8>>, a1: u64, a2: void*, a3: u64) -> u64 {
    if !(!a2->field_0) {
        goto LABEL_0x4b04b0;
    }
    if !a2->field_4 {
        goto LABEL_0x4af750;
    }
    return uu_cat::write_lines(a0, a1, a2, a3);
}
