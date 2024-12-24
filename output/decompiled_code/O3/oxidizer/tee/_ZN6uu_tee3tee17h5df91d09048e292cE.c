fn uu_tee::tee(a0: void*) -> u64 {
    let v0: i128;  // [sp-0xa8], Other Possible Types: Result<struct24, struct16>, struct24
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90]
    let v3: i8;  // [bp-0x88]
    let v4: i192;  // [bp-0x78]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x58], Other Possible Types: struct16
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: struct24;  // [sp-0x40]
    let v11: i64;  // r15
    let v12: i8;  // bpl
    let v13: i64;  // r12
    let v15: i64;  // rax
    let v16: i64;  // rdx

    v11 = 167503724547;
    if *((a0 + 25) as &i8) && uucore::features::signals::ignore_interrupts() as i32 != 134 {
        return 167503724547;
    }
    v12 = *((a0 + 26) as &i8);
    if v12 == 4 && uucore::features::signals::enable_pipe_errors() as i32 != 134 {
        return 167503724547;
    }
    v13 = *((a0 + 16) as &i64);
    v9 = struct24 {
        field_0: *((a0 + 8) as &i64)
        field_8: v9 + v13 * 24
        field_16: a0
    };
    v0 = core::iter::adapters::try_process(&v9);
    v11 = *((&v0 as &char + 8) as &i64);
    match v0 {
        Err(_) => {
            return v11;
        },
        Ok(_) => {
            v6 = v0;
            v7 = v11;
            v8 = v1;
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("'standard output'");
            v4 = v0;
            v0 = v4;
            v6 = alloc::vec::Vec<T,A>::insert(0, &v0);
            v0.field_16 = vvar_252{stack -72};
            v0 = v6;
            v3 = v12;
            v2 = 0;
            v4 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v5 = &g_520290;
            v15 = std::io::copy::generic_copy(&v4, &v0);
            if !v15 {
LABEL_4b35c8:
                if v8 == v13 && !<uu_tee::MultiWriter as std::io::Write>::flush() {
                    v11 = v2;
                    if v11 {
                        v11 = 167503724547;
                    }
                }
            } else if v15 != 1 || std::io::error::Error::kind(v16) as i8 == 39 {
                goto LABEL_4b35c8;
            }
            return v11;
        },
    }
}
