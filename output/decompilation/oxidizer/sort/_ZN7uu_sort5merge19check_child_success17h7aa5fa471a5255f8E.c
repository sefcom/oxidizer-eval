fn uu_sort::merge::check_child_success(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u32;  // [sp-0x70]
    let v1: u32;  // [bp-0x6c]
    let v2: struct8;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: struct32;  // [bp-0x58], Other Possible Types: u8
    let v5: struct8;  // [bp-0x54]
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: void*;  // r14
    let v10: core::result::Result<std::process::ExitStatus, std::io::error::Error>;  // rax:rdx

    v10 = std::process::Child::wait(&v4);
    if !*(&v4 as &i32) {
        v8 = v5 as u64;
        v1 = !(v8 as u8 & 127);
        v2 = (v8 >> 8) as u32;
        v0 = 0;
        if !(v8 as u8 & 127) && v2 {
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v0, a1, a2);
            v4 = struct32 {
                field_0: 6
                padding_1: <UNKNOWN>
                field_8: *(&v0 as &i128)
                field_24: v3
            };
            v9 = alloc::boxed::Box<T>::new(&v4);
        }
    }
    return v9;
}
