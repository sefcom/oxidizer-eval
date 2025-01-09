fn uu_tee::tee(a0: &struct27) -> u64 {
    let v0: i200;  // [sp-0xa8], Other Possible Types: struct16, Result<struct24, struct8>, struct24, struct40
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90]
    let v3: i8;  // [bp-0x88]
    let v4: i64;  // [sp-0x78], Other Possible Types: struct24
    let v5: i64;  // [sp-0x70]
    let v7: struct16;  // [sp-0x58], Other Possible Types: i64
    let v8: i64;  // [sp-0x50]
    let v9: i64;  // [sp-0x48]
    let v10: struct24;  // [sp-0x40]
    let v12: i64;  // r15
    let v13: i8;  // bpl
    let v14: i64;  // r12
    let v16: i64;  // rax
    let v17: i64;  // rdx

    v12 = 167503724547;
    if *((a0 + 25) as &i8) && uucore::features::signals::ignore_interrupts() as i32 != 134 {
        return 167503724547;
    }
    v13 = *((a0 + 26) as &i8);
    if v13 == 4 && uucore::features::signals::enable_pipe_errors() as i32 != 134 {
        return 167503724547;
    }
    v14 = *((a0 + 16) as &i64);
    v10 = struct24 {
        field_0: *((a0 + 8) as &i64)
        field_8: v10 + v14 * 24
        field_16: a0
    };
    v0 = core::iter::adapters::try_process(&v10);
    v12 = *((&v0 as &char + 8) as &i64);
    match v0 {
        Err(_) => {
            return v12;
        },
        Ok(_) => {
            v7 = v0;
            v8 = v12;
            v9 = v1;
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("'standard output'");
            v4 = v0;
            v2 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
            v0 = struct40 {
                field_0: v4
                field_16: v6
                field_24: v2
                field_32: &g_51f900
            };
            v7 = alloc::vec::Vec<T,A>::insert(None, &v0);
            v1 = v9;
            v0 = v7;
            v3 = v13;
            v2 = 0;
            v4 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v5 = &g_51f950;
            v16 = std::io::copy::generic_copy(&v4, &v0);
            if !v16 {
LABEL_4b33c8:
                if v9 == v14 && !<uu_tee::MultiWriter as std::io::Write>::flush() {
                    v12 = v2;
                    if v12 {
                        v12 = 167503724547;
                    }
                }
LABEL_4b33f0:
                goto LABEL_4b33f0;
            } else if v16 != 1 || std::io::error::Error::kind(v17) as i8 == 39 {
                goto LABEL_4b33c8;
            }
            return v12;
        },
    }
}
