fn uu_wc::Input::path_display(a0: void*, a1: &struct_0) -> u64 {
    if a1->field_0 != 9223372036854775809 {
        uucore::features::quoting_style::escape_name(a0, a1->field_8, a1->field_10, &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
        return a0;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "standard input");
    return a0;
}
