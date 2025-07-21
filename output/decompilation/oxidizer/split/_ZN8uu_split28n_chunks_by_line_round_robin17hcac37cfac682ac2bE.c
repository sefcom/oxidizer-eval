fn uu_split::n_chunks_by_line_round_robin(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: std::io::stdio::Stdout;  // [bp-0xa8], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, struct24
    let v1: u64;  // [bp-0xa0]
    let v2: u64;  // [bp-0x98]
    let v3: struct32;  // [bp-0x80]
    let v4: std::io::stdio::Stdout;  // [bp-0x78], Other Possible Types: struct16
    let v5: u64;  // [bp-0x70]
    let v6: u64;  // [bp-0x68]
    let v7: u8;  // [bp-0x60]
    let v9: u64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v14: u64;  // r12
    let v15: core::cell::UnsafeCell<u64>;  // r15
    let v18: core::result::Result<(), std::io::error::Error>;  // rax
    let v21: void*;  // r12
    let v22: core::fmt::Arguments;  // rbx
    let v25: u32;  // r9d
    let v28: u64;  // rdx
    let v35: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v36: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v37: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v38: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = std::io::stdio::stdout();
    v3 = struct32 {
        field_0: std::io::stdio::Stderr::lock(&v0)
        field_8: 0
        field_16: 8
        field_24: 0
    };
    if a3 != 1 {
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, *((a0 + 161) as &i8), a4);
        if v0 == 0x8000000000000000 {
            return v1;
        }
        v4 = v0;
        v5 = v1;
        v6 = v2;
        if a2 {
            v10 = *((a0 + 136) as &i64);
            loop {
                v0 = struct24 {
                    field_0: 0
                    field_8: 1
                    field_16: 0
                };
                v0 = alloc::vec::Vec<u8, alloc::alloc::Global> {
                    buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                        cap: alloc::raw_vec::Cap {
                            __0: 0
                        }
                        ptr: core::ptr::unique::Unique<u8> {
                            pointer: core::ptr::non_null::NonNull<u8> {
                                pointer: 1
                            }
                            _marker: core::marker::PhantomData<u8> { }
                        }
                        alloc: alloc::alloc::Global { }
                    }
                    len: 0
                };
                v37 = std::io::BufRead::read_until(a1, *((a0 + 162) as &i8), &v0);
                if let Err(_) = v37 {
                    break;
                }
                if !*((&v37 as &char + 8) as &i64) {
                    return 0;
                }
                v4 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer((!(v21 | a2) >> 32 ? ((0 CONCAT v21 as u32) % (a2 & 4294967295) CONCAT (0 CONCAT v21 as u32) / (a2 & 4294967295)) >> 32 : ((0 CONCAT v21) % a2 CONCAT (0 CONCAT v21) / a2) >> 64), a0);
                if *(&v7 as &i64) {
                    return v1;
                }
                uu_split::custom_write_all(0x1, 0, v9, v10, v25);
                if v7 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
                    return v1;
                }
                if v22 == a2 {
                    return 0;
                }
            }
        } else {
            v0 = struct24 {
                field_0: 0
                field_8: 1
                field_16: 0
            };
            v0 = alloc::vec::Vec<u8, alloc::alloc::Global> {
                buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                    cap: alloc::raw_vec::Cap {
                        __0: 0
                    }
                    ptr: core::ptr::unique::Unique<u8> {
                        pointer: core::ptr::non_null::NonNull<u8> {
                            pointer: 1
                        }
                        _marker: core::marker::PhantomData<u8> { }
                    }
                    alloc: alloc::alloc::Global { }
                }
                len: 0
            };
            v38 = std::io::BufRead::read_until(a1, *((a0 + 162) as &i8), &v0);
            if let Ok(_) = v38 {
                return 0;
            }
        }
    } else if a2 {
        v14 = a4 - 1;
        loop {
            v0 = struct24 {
                field_0: 0
                field_8: 1
                field_16: 0
            };
            v0 = alloc::vec::Vec<u8, alloc::alloc::Global> {
                buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                    cap: alloc::raw_vec::Cap {
                        __0: 0
                    }
                    ptr: core::ptr::unique::Unique<u8> {
                        pointer: core::ptr::non_null::NonNull<u8> {
                            pointer: 1
                        }
                        _marker: core::marker::PhantomData<u8> { }
                    }
                    alloc: alloc::alloc::Global { }
                }
                len: 0
            };
            v35 = std::io::BufRead::read_until(a1, *((a0 + 162) as &i8), &v0);
            if let Err(_) = v35 {
                break;
            }
            if !*((&v35 as &char + 8) as &i64) {
                return 0;
            }
            if (v15 | a2) >> 32 {
                if !((((0 CONCAT v15) % a2) as u64 CONCAT ((0 CONCAT v15) / a2) as u64) >> 64 == v14) {
                    continue;
                }
            } else {
                if !(((0 CONCAT v15 as u32) % (a2 & 4294967295) CONCAT (0 CONCAT v15 as u32) / (a2 & 4294967295)) >> 32 == v14) {
                    continue;
                }
            }
            v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, 1, 0);
            if let Err(_) = v18 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
                return v1;
            }
        }
    } else {
        v0 = struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
        v0 = alloc::vec::Vec<u8, alloc::alloc::Global> {
            buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                cap: alloc::raw_vec::Cap {
                    __0: 0
                }
                ptr: core::ptr::unique::Unique<u8> {
                    pointer: core::ptr::non_null::NonNull<u8> {
                        pointer: 1
                    }
                    _marker: core::marker::PhantomData<u8> { }
                }
                alloc: alloc::alloc::Global { }
            }
            len: 0
        };
        v36 = std::io::BufRead::read_until(a1, *((a0 + 162) as &i8), &v0);
        if let Ok(_) = v36 {
            return 0;
        }
    }
    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
    return v1;
}
