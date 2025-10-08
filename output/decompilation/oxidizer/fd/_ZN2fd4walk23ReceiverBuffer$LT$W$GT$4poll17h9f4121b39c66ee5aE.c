fn fd::walk::ReceiverBuffer<W>::poll(a0: &struct25) -> u64 {
    let v0: u64;  // [bp-0x410]
    let v1: u8;  // [bp-0x408]
    let v2: u8;  // [bp-0x407]
    let v3: u32;  // [bp-0x400]
    let v4: struct32;  // [bp-0x3f8]
    let v5: Result<struct64, struct8>;  // [bp-0x3d8], Other Possible Types: struct56
    let v6: u128;  // [bp-0x3d8]
    let v7: Result<struct64, struct8>;  // [bp-0x3d8]
    let v8: Option<struct312>;  // [bp-0x2a0]
    let v9: u64;  // [bp-0x2a0]
    let v10: u64;  // [bp-0x2a0]
    let v11: struct32;  // [bp-0x260]
    let v12: struct16;  // [bp-0x168], Other Possible Types: struct64
    let v13: struct24;  // [bp-0x168]
    let v14: struct16;  // [bp-0x168]
    let v15: u8;  // [bp-0x128]
    let v18: i64;  // r14
    let v19: core::option::Option<&str>;  // r13
    let v20: &mut [u8];  // r15
    let v21: &mut [u8];  // r12
    let v22: &mut [u8];  // rax
    let v23: Result<struct232, struct16>;  // r13b
    let v26: i64;  // rax
    let v27: core::fmt::Arguments;  // rcx

    fd::walk::ReceiverBuffer<W>::recv(&v1 as u32, a0);
    if v1 != 1 {
        v4 = <fd::walk::Batch as core::iter::traits::collect::IntoIterator>::into_iter(v3);
        v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
        if let Some(_) = v8 {
            v0 = a0 + 56;
            v10 = v9;
            do {
                v22 = v10;
                if v22 == 4 {
                    v5 = struct56 {
                        field_0: *(v18 as &i128)
                        field_16: *((v18 + 16) as &i128)
                        field_32: *((v18 + 32) as &i128)
                        field_48: *((v18 + 48) as &i64)
                    };
                    if *((*((a0 + 96) as &i64) + 486) as &i8) {
                        v13 = <T as alloc::string::SpecToString>::spec_to_string(&v5);
                        fd::error::print_error(&v13);
                    }
                    v7 = v6;
                } else {
                    v12 = struct64 {
                        field_0: v22
                        field_8: *(v18 as &i128)
                        field_24: *((v18 + 16) as &i128)
                        field_40: *((v18 + 32) as &i128)
                        field_56: *((v18 + 48) as &i64)
                    };
                    memcpy(&v15, &v11, 248);
                    if *((*((a0 + 96) as &i64) + 484) as &i8) {
                        return v21 & 4294967295;
                    }
                    v23 = *((a0 + 128) as &i8);
                    if v23 == 1 {
                        if fd::walk::ReceiverBuffer<W>::print(a0, &v12) as u64 as u8 != 6 {
                            return v21 & 4294967295;
                        }
                    } else {
                        memcpy(&v5, &v12, 312);
                        alloc::vec::Vec<T,A>::push(v0, &v5);
                        if *((a0 + 72) as &i64) >= 1001 && fd::walk::ReceiverBuffer<W>::stream(a0) as u8 != 6 {
                            return v21 & 4294967295;
                        }
                    }
                    v26 = *((a0 + 96) as &i64);
                    v27 = *((a0 + 120) as &i64) + 1;
                    *((a0 + 120) as &core::fmt::Arguments) = v27;
                    if (*((v26 + 32) as &i8) & 1) && v27 >= *((v26 + 40) as &i64) {
                        fd::walk::ReceiverBuffer<W>::stop(a0);
                        return v21 & 4294967295;
                    }
                    v7 = v5;
                    v12 = v14;
                    if let Ok(_) = v23 {
                        v7 = v5;
                        v12 = v14;
                    }
                }
                v5 = v7;
                <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v19, v20);
                v10 = v9;
            } while (v10 != 5);
        }
        if *((a0 + 128) as &i8) == 1 && crossbeam_channel::channel::Receiver<T>::is_empty(*(a0 as &i64)) as u8 {
            fd::walk::ReceiverBuffer<W>::flush(a0);
        }
    } else if !v2 {
        fd::walk::ReceiverBuffer<W>::stream(a0);
    } else {
        return fd::walk::ReceiverBuffer<W>::stop(a0);
    }
    return v21 & 4294967295;
}
