fn uu_wc::Input::path_display(a1: i64) -> : struct24 {
    let a0: u64;  // rdi

    if *(a1 as &i64) != 9223372036854775809 {
        uucore::features::quoting_style::escape_name(a0, *((a1 + 8) as &i64), *((a1 + 16) as &i64), &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
        return a0;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "standard input");
    return a0;
}
