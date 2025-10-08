fn uu_expr::syntax_tree::check_posix_regex_errors(a0: i64, a1: u64, a2: u64) -> void {
    let v3: core::slice::iter::Iter<u8>;  // [bp-0xb8]
    let v4: void*;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa0]
    let v6: void*;  // [bp-0x98]
    let v39: core::option::Option<u32>;  // rax:rax

    v4 = 0;
    v5 = 1;
    v6 = 0;
    v3 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a2 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v39 = core::str::validations::next_code_point(&v3) as u128;
}
