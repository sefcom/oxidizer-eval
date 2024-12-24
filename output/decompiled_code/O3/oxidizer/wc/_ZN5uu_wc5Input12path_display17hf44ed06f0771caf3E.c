fn uu_wc::Input::path_display(a0: void*, a1: &struct_0) -> u64 {
    if a1->field_0 != 9223372036854775809 {
        uucore::features::quoting_style::escape_name(a0, a1->field_8, a1->field_10, &anon.2d62524804cc4b2f7247b138d4e0921f.19.llvm.17271959582280866971);
        return a0;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "standard input");
    return a0;
}
