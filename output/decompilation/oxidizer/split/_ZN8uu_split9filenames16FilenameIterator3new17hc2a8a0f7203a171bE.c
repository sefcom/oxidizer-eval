fn uu_split::filenames::FilenameIterator::new(a0: i64, a1: u64, a2: u64, a3: i64) -> long long {
    let v0: Option<struct25>;  // [bp-0x68]
    let v1: u64;  // [bp-0x68]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: struct24;  // [bp-0x48]
    let v7: u64;  // rcx
    let v8: u64;  // rax
    let v9: u64;  // r13
    let v10: u64;  // rsi
    let v11: u64;  // r13
    let v12: u64;  // rcx
    let v13: u64;  // rax
    let v14: u64;  // 4096

    v7 = *((a3 + 41) as &i8) * 8;
    v8 = 1051162 >> (*((a3 + 41) as &i8) * 8 & 31);
    v9 = 0x8000000000000000;
    if *((a3 + 40) as &i8) {
        v10 = *((a3 + 32) as &i64);
        v11 = v9;
        v12 = v7;
        v13 = v8;
        v14 = a2;
    } else {
        v0 = uu_split::number::FixedWidthNumber::new(v8 & 4294967295, *((a3 + 24) as &i64), *((a3 + 32) as &i64));
        match v0 {
            None => {
                v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("numerical suffix start value is too large for the suffix length");
                return struct24 {
                    field_0: 9223372036854775809
                    field_8: alloc::boxed::Box<T>::new(&v4) as u64
                    field_16: &g_50ab40
                };
            },
            Some(_) => {
                v11 = v1;
                v12 = v3;
                v13 = v2;
                v14 = v2 >> 8;
            },
        }
    }
    return struct80 {
        field_0: v11
        field_8: v10
        field_16: v13 as u8
        field_17: <UNKNOWN>
        field_21: v12
        field_23: <UNKNOWN>
        field_24: a1
        field_32: a2
        field_40: *((a3 + 8) as &i128)
        field_48: <UNKNOWN>
        field_64: <UNKNOWN>
    };
}
