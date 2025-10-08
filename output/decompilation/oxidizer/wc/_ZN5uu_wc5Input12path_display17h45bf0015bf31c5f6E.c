fn uu_wc::Input::path_display(a0: u64, a1: i64) -> long long {
    if *(a1 as &i64) != 9223372036854775809 {
        return uu_wc::escape_name_wrapper(a0, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    }
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "standard input");
}
