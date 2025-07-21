fn uu_split::filenames::FilenameIterator::new(a1: i64, a2: i64, a3: i64) -> Result<struct65, struct24> {
    let a0: u64;  // rsi
    let v0: Option<struct25>;  // [bp-0x68]
    let v1: u64;  // [bp-0x68]
    let v2: struct24;  // [bp-0x58]
    let v3: std::sys::os_str::bytes::Buf;  // [bp-0x50]
    let v4: struct24;  // [bp-0x48]
    let v7: std::sys::os_str::bytes::Buf;  // rcx
    let v8: struct24;  // rax
    let v9: u64;  // r15
    let v10: struct24;  // r8
    let v11: u64;  // r15
    let v12: std::sys::os_str::bytes::Buf;  // rcx
    let v13: struct24;  // rax
    let v14: i64;  // rdi
    let v15: struct32;  // rdi
    let v17: u128;  // xmm0
    let v18: i64;  // rdi

    v7 = *((a2 + 41) as &i8) * 8;
    v8 = 1051162 >> (*((a2 + 41) as &i8) * 8 & 31);
    v9 = 0x8000000000000000;
    if *((a2 + 40) as &i8) {
        v10 = *((a2 + 32) as &i64);
        v11 = v9;
        v12 = v7;
        v13 = v8;
        v15 = v14;
    } else {
        v0 = uu_split::number::FixedWidthNumber::new(v8 & 4294967295, *((a2 + 24) as &i64), *((a2 + 32) as &i64));
        match v0 {
            None => {
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                *((v18 + 8) as &double) = alloc::boxed::Box<T>::new(&v4);
                *((v18 + 16) as &&u8) = &g_549160;
                *(v18 as &i64) = 9223372036854775809;
                return;
            },
            Some(_) => {
                v11 = v1;
                v12 = v3;
                v13 = v2;
                v15 = v2 >> 8;
            },
        }
    }
    v17 = *((a2 + 8) as &i128);
    *(v14 as &u64) = v11;
    *((v14 + 8) as &struct24) = v10;
    *((v14 + 16) as &u8) = v13 as u8;
    *((v14 + 17) as &u32) = v15 as u32;
    *((v14 + 23) as &u8) = (v15 >> 48) as u8;
    *((v14 + 21) as &u16) = (v15 >> 32) as u16;
    *((v14 + 24) as &std::sys::os_str::bytes::Buf) = v12;
    *((v14 + 32) as &u64) = a0;
    *((v14 + 40) as &u64) = a1;
    *((v14 + 48) as &u128) = v17;
    *((v14 + 64) as &i8) = 1;
    return;
}
