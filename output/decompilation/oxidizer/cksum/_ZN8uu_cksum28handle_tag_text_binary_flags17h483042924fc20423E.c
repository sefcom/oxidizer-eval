fn uu_cksum::handle_tag_text_binary_flags(a0: i64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x78]
    let v1: core::option::Option<std::ffi::os_str::OsString>;  // [bp-0x70]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: std::env::ArgsOs;  // [bp-0x58]
    let v6: u64;  // [bp-0x30]
    let v7: u64;  // [bp-0x28]
    let v8: u64;  // [bp-0x20]
    let v9: u64;  // [bp-0x18]
    let v10: u64;  // [bp-0x10]
    let v12: u64;  // r15
    let v13: u64;  // r14
    let v14: u64;  // r13
    let v15: u64;  // r12
    let v16: u64;  // rbx
    let v17: u8;  // r12b
    let v18: u8;  // r13b
    let v19: void*;  // rbp

    v10 = v12;
    v9 = v13;
    v8 = v14;
    v7 = v15;
    v6 = v16;
    v5 = std::env::ArgsOs {
        inner: std::sys::args::common::Args {
            iter: alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString, alloc::alloc::Global> {
                buf: core::ptr::non_null::NonNull<std::ffi::os_str::OsString> {
                    pointer: *(a1 as &i128)
                }
                ptr: core::ptr::non_null::NonNull<std::ffi::os_str::OsString> {
                    pointer: <UNKNOWN>
                }
                cap: *((a1 + 16) as &i128)
                end: <UNKNOWN>
                alloc: core::mem::manually_drop::ManuallyDrop<alloc::alloc::Global> {
                    value: alloc::alloc::Global { }
                }
            }
        }
    };
    v1 = <std::env::ArgsOs as core::iter::traits::iterator::Iterator>::next(&v5);
    v17 = 1;
    if !((((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char) {
        do {
            v19 = <alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(v3, v4);
            v1 = <std::env::ArgsOs as core::iter::traits::iterator::Iterator>::next(&v5);
        } while (v1 as i64 != 0x8000000000000000);
    }
    *((v0 + 8) as &u8) = v17 & 1;
    *((v0 + 9) as &i8) = ((v17 & 1) ? 0 : v18);
    *(v0 as &i64) = 0;
    return ((v17 & 1) ? 0 : v18);
}
