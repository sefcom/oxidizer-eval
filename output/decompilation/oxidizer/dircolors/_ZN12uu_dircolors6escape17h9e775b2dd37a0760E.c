fn uu_dircolors::escape(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: void*;  // [bp-0x48]
    let v3: u128;  // [bp-0x40]
    let v6: u32;  // ecx
    let v7: u64;  // rdx
    let v9: u32;  // ebp
    let v10: u64;  // rdi
    let v12: i64;  // rdi
    let v13: core::option::Option<u32>;  // rax:rax
    let v14: &[u8];  // rax:rdx
    let v15: core::option::Option<u32>;  // rax:rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a0
        }
        end_or_len: a1 + a0
        _marker: core::marker::PhantomData<&u8> { }
    };
    v15 = core::str::validations::next_code_point(&v3) as u128;
    if let Some(_) = v15 {
        do {
            v9 = v7 as u32;
            if v7 as u32 != 39 && (v7 as u32 != 58 || v6 == 92) {
                alloc::string::String::push(&v0, v9 as u8);
            } else {
                v14 = core::slice::iter::Iter<T>::make_slice(v10);
                alloc::vec::Vec<T,A>::append_elements(&v0, v14.ptr, a1);
            }
        } while ((v13 = core::str::validations::next_code_point(&v3) as u128, v6 = v9, v13 as i32));
    }
    *((v12 + 16) as &i64) = 0;
    *(v12 as &i128) = *(&v0 as &i128);
    return;
}
