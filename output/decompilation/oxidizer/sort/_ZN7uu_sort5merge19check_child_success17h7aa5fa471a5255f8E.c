fn uu_sort::merge::check_child_success(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u32;  // [sp-0x70]
    let v1: i32;  // [bp-0x6c]
    let v2: struct8;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u8;  // [bp-0x58]
    let v5: struct8;  // [bp-0x54]
    let v6: u8;  // [bp-0x50]
    let v7: u64;  // [bp-0x40]
    let v9: core::result::Result<(), std::io::error::Error>;  // rax
    let v10: void*;  // r14
    let v11: core::result::Result<std::process::ExitStatus, std::io::error::Error>;  // rax:rdx

    v11 = std::process::Child::wait(&v4);
    if *(&v4 as &i32) {
        return v10;
    }
    v9 = v5 as u64;
    v1 = !(v9 as u8 & 127);
    v2 = (v9 >> 8) as u32;
    v0 = 0;
    if !(v9 as u8 & 127) && v2 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v0, a1, a2);
        v7 = v3;
        memcpy(&v6, &v0, 16);
        v4 = 6;
        v10 = alloc::boxed::Box<T>::new(&v4);
    }
    return v10;
}
