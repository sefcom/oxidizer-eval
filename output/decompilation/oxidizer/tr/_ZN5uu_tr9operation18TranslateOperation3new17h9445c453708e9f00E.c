fn uu_tr::operation::TranslateOperation::new(a1: i64, a2: i64) -> Result<struct48, struct12> {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0xd0]
    let v1: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0xb0]
    let v2: struct32;  // [bp-0x88], Other Possible Types: struct96
    let v4: u64;  // rax
    let v5: u64;  // rdx

    if *((a2 + 16) as &i64) {
        v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
        v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
        v1 = core::iter::traits::iterator::Iterator::chain(&v2, *((*((a2 + 8) as &i64) + *((a2 + 16) as &i64) - 1) as &i8));
        v2 = core::iter::traits::iterator::Iterator::zip(&v0, &v1);
        core::iter::traits::iterator::Iterator::collect(a0, &v2);
        return;
    } else if *((a1 + 16) as &i64) {
        return struct16 {
            field_0: 0
            field_8: 5
        };
    } else {
        v4 = std::thread::local::LocalKey<T>::with();
        return Ok(struct48 {
            field_0: g_4fdab8.field_0
            field_16: g_4fdac8.field_0
            field_32: v4
            field_40: v5
        });
    }
}
