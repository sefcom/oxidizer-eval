fn just::function::get(a0: u64, a1: u32) -> long long {
    let v2: core::fmt::rt::Argument;  // [bp-0x70]
    let v5: struct24;  // [bp-0x60]
    let v6: void*;  // [bp-0x58]
    let v7: u32;  // [bp-0x50]
    let v8: core::fmt::Arguments;  // [bp-0x48]
    let v12: u64;  // rax
    let v14: u64;  // rdx
    let v15: alloc::string::String;  // rbx

    if !<&str as core::str::pattern::Pattern>::strip_suffix_of("_dir", a0, a1) as u64 {
        if <&str as core::str::pattern::Pattern>::strip_suffix_of("_dir_native", a0, a1) as u64 {
            goto LABEL_6687eb;
        }
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1);
    } else {
LABEL_6687eb:
        v8 = core::fmt::Arguments {
            pieces: &[&str] {
                ptr: v12
                len: 2
            }
            args: [v2]
            fmt: 0
        };
        v5 = core::option::Option<T>::map_or_else(None, v14, &v8);
    }
    v15 = 1;
    if ... {
        v15 = (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "without_extension") ? 1 : 7);
    }
    return v15;
}
