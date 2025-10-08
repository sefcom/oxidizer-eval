fn uu_tee::tee(a0: &struct28, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0xa8]
    let v1: struct16;  // [bp-0xa8]
    let v2: u64;  // [bp-0x98]
    let v3: void*;  // [bp-0x90]
    let v4: u8;  // [bp-0x88]
    let v5: struct9;  // [bp-0x78], Other Possible Types: u128
    let v6: u64;  // [bp-0x70]
    let v7: u64;  // [bp-0x68]
    let v8: u64;  // [bp-0x68]
    let v9: struct16;  // [bp-0x58]
    let v10: struct16;  // [bp-0x48], Other Possible Types: u64
    let v11: u64;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v14: u64;  // r15
    let v15: u64;  // rcx
    let v16: u8;  // bpl
    let v17: u64;  // r12
    let v20: u64;  // rax
    let v21: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v14 = 171798691843;
    if !*((a0 + 25) as &i8) || uucore::features::signals::ignore_interrupts(a0, a1, a2, v15) == 134 {
        v16 = *((a0 + 27) as &i8);
        if v16 != 4 || uucore::features::signals::enable_pipe_errors(a0, a1, a2, v15) == 134 {
            v17 = *((a0 + 16) as &i64);
            v0 = struct24 {
                field_0: *((a0 + 8) as &i64)
                field_8: *((a0 + 8) as &i64) + v17 * 24
                field_16: a0
            };
            core::iter::traits::iterator::Iterator::collect(&v5, &v0);
            if (((0 ^ *(&v5 as &i64)) & (0 ^ -(*(&v5 as &i64)))) >> 63) as char {
                return v11;
            }
            v10 = *(&v5 as &i64);
            v11 = v6;
            v12 = v8;
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("'standard output'");
            v7 = v2;
            v5 = *(&v0.field_0 as &i128);
            v1 as u320 = struct40 {
                field_0: v5
                field_16: v7
                field_24: alloc::boxed::Box<T>::new(std::io::stdio::stdout())
                field_32: &g_4ea430
            };
            v10 = alloc::vec::Vec<T,A>::insert(&v1 as u320);
            v2 = v12;
            *(&v1.field_0 as &i128) = *(&v10.field_0 as &i128);
            v4 = v16;
            v3 = 0;
            v9 = struct16 {
                field_0: alloc::boxed::Box<T>::new(std::io::stdio::stdin())
                field_8: &g_4ea498
            };
            if *((a0 + 26) as &i8) {
                v5 = uu_tee::ensure_stdout_not_broken();
                if v5.field_0 {
                    v14 = v6;
                } else if !(!((&v5.field_0)[1] & 1)) || v2 != 1 {
                    goto LABEL_45d0a0;
                }
            } else {
LABEL_45d0a0:
                v21 = std::io::copy::generic_copy(&v9, &v1 as u320);
                if (!(v21 as i8 & 1) || std::io::error::Error::kind(*((&v21 as &char + 8) as &i64)) as u8 == 40) && v8 == v17 {
                    v20 = <uu_tee::MultiWriter as std::io::Write>::flush(&v1 as u320);
                }
            }
        }
    }
    return v14;
}
