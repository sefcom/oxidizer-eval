fn uu_tee::tee(a0: &struct27) -> u64 {
    let v0: iNone;  // [sp-0xa8], Other Possible Types: struct16, struct24, Result<struct24, struct8>
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90]
    let v3: i8;  // [bp-0x88]
    let v4: i64;  // [sp-0x78], Other Possible Types: struct24
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x58], Other Possible Types: struct16
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: struct24;  // [sp-0x40]
    let v12: i64;  // rbx
    let v13: i8;  // bpl
    let v15: i64;  // r12
    let v17: i64;  // rbx
    let v18: i64;  // rax
    let v19: i64;  // rbx
    let v21: i64;  // rdx

    if *((a0 + 25) as &i8) {
        v12 = 167503724547;
        if uucore::features::signals::ignore_interrupts() as i32 != 134 {
            return v12;
        }
    }
    v13 = *((a0 + 26) as &i8);
    if v13 == 4 {
        v12 = 167503724547;
        if uucore::features::signals::enable_pipe_errors() as i32 != 134 {
            return v12;
        }
    }
    v15 = *((a0 + 16) as &i64);
    v9 = struct24 {
        field_0: *((a0 + 8) as &i64)
        field_8: v9 + v15 * 24
        field_16: a0
    };
    v0 = core::iter::adapters::try_process(&v9);
    v17 = *((&v0 as &char + 8) as &i64);
    v12 = v17;
    match v0 {
        Err(_) => {
            return v12;
        },
        Ok(_) => {
            v6 = v0 as i64;
            v7 = v17;
            v8 = v1;
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("'standard output'");
            v4 = v0;
            v0 = *(&v4 as &i320);
            v6 = alloc::vec::Vec<T,A>::insert(None, &v0);
            v1 = v8;
            v0 = v6;
            v3 = v13;
            v2 = 0;
            v4 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v5 = &g_51f950;
            v18 = std::io::copy::generic_copy(&v4, &v0);
            if v18 && v18 == 1 && std::io::error::Error::kind(v21) as i8 != 39 {
                return v12;
            }
            v12 = v19;
            return v12;
        },
    }
}
