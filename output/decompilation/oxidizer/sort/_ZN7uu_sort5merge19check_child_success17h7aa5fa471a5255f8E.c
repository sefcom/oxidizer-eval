fn uu_sort::merge::check_child_success(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x70], Other Possible Types: struct24
    let v1: i32;  // [sp-0x6c]
    let v2: struct24;  // [sp-0x68], Other Possible Types: i32
    let v3: i96;  // [sp-0x58], Other Possible Types: Result<struct4, struct8>
    let v6: i64;  // rax
    let v7: i32;  // eax
    let v8: i64;  // r14

    v3 = std::process::Child::wait(a0);
    match v3 {
        Err(v2) => {
            v0 = 1;
        },
        Ok(_) => {
            v6 = *((&v3 as &char + 4) as &i32) as u32 as u64;
            v7 = (v6 >> 8) as i32;
            v1 = (!(v6 as i8 & 127)) as u8 as u32;
            v2 = v7;
            v0 = 0;
            if !(v6 as i8 & 127) && v7 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v2 as u192 = v0;
                v3 = 6;
                alloc::boxed::Box<T>::new(&v3);
                return v8;
            }
        },
    }
    return v8;
}
