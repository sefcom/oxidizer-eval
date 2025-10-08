fn ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action(a0: &struct80, a1: i64) -> int {
    let v0: struct16;  // [bp-0x58]
    let v1: struct24;  // [bp-0x48]
    let v2: struct32;  // [bp-0x30]
    let v4: u64;  // rdx

    v0 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 16) as &i64) * 56 + *((a0 + 8) as &i64)
    };
    v1 = alloc::vec::Vec<T,A>::split_off(a0, core::option::Option<T>::map_or(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::rposition(&v0) as i8, v4));
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a1, a0, "crates/ruff_python_formatter/src/string/docstring.rs");
    v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<T,I>>::spec_extend(a1, &v2);
    return;
}
