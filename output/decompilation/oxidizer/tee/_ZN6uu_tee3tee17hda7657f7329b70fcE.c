fn uu_tee::tee(a0: &struct27) -> long long {
    let v0: core::result::Result<alloc::string::String, core::char::decode::DecodeUtf16Error>;  // [bp-0xa8], Other Possible Types: struct24, u128
    let v1: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: u64;  // [bp-0x98]
    let v5: void*;  // [bp-0x90]
    let v6: u8;  // [bp-0x88]
    let v7: gimli::read::rnglists::Range;  // [bp-0x78], Other Possible Types: u128
    let v8: u64;  // [bp-0x68]
    let v9: u64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v11: u64;  // [bp-0x48]
    let v12: u64;  // [bp-0x40]
    let v13: u64;  // [bp-0x38]
    let v14: i64;  // [bp-0x30]
    let v16: u64;  // r15
    let v17: u8;  // bpl
    let v18: u64;  // r12
    let v21: u64;  // rax
    let v22: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v16 = 167503724547;
    if *((a0 + 25) as &i8) && uucore::features::signals::ignore_interrupts() as i32 != 134 {
        return 167503724547;
    }
    v17 = *((a0 + 26) as &i8);
    if v17 == 4 && uucore::features::signals::enable_pipe_errors() as i32 != 134 {
        return 167503724547;
    }
    v18 = *((a0 + 16) as &i64);
    v12 = *((a0 + 8) as &i64);
    v13 = *((a0 + 8) as &i64) + v18 * 24;
    v14 = a0;
    v0 = core::iter::adapters::try_process(&v12);
    match v0 {
        Err(_) => {
            return v2;
        },
        Ok(_) => {
            v9 = v0 as i64;
            v10 = v2;
            v11 = v4;
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("'standard output'");
            v8 = v4;
            v7 = *(&v0.field_0 as &i128) as u128;
            v0 as u13440 = (usize, std::backtrace_rs::symbolize::gimli::Mapping) {
                __0: v7
                __1: std::backtrace_rs::symbolize::gimli::Mapping {
                    cx: std::backtrace_rs::symbolize::gimli::Context {
                        object: std::backtrace_rs::symbolize::gimli::elf::Object {
                            syms: alloc::vec::Vec<std::backtrace_rs::symbolize::gimli::elf::ParsedSym, alloc::alloc::Global> {
                                buf: alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::elf::ParsedSym, alloc::alloc::Global> {
                                    cap: alloc::raw_vec::Cap {
                                        __0: <UNKNOWN>
                                    }
                                    ptr: core::ptr::unique::Unique<std::backtrace_rs::symbolize::gimli::elf::ParsedSym> {
                                        pointer: core::ptr::non_null::NonNull<std::backtrace_rs::symbolize::gimli::elf::ParsedSym> {
                                            pointer: <UNKNOWN>
                                        }
                                        _marker: core::marker::PhantomData<std::backtrace_rs::symbolize::gimli::elf::ParsedSym> { }
                                    }
                                    alloc: alloc::alloc::Global { }
                                }
                                len: <UNKNOWN>
                            }
                            data: &[u8] {
                                ptr: <UNKNOWN>
                                len: <UNKNOWN>
                            }
                            sections: object::read::elf::section::SectionTable<object::elf::FileHeader64<object::endian::LittleEndian>, &[u8]> {
                                sections: &[object::elf::SectionHeader64<object::endian::LittleEndian>] {
                                    ptr: <UNKNOWN>
                                    len: <UNKNOWN>
                                }
                                strings: object::read::util::StringTable<&[u8]> {
                                    data: <UNKNOWN>
                                    start: <UNKNOWN>
                                    end: <UNKNOWN>
                                    marker: core::marker::PhantomData<&()> { }
                                }
                            }
                            strings: object::read::util::StringTable<&[u8]> {
                                data: <UNKNOWN>
                                start: <UNKNOWN>
                                end: <UNKNOWN>
                                marker: core::marker::PhantomData<&()> { }
                            }
                            endian: object::endian::LittleEndian { }
                        }
                        package: <UNKNOWN>
                        dwarf: addr2line::Context<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>> {
                            sections: alloc::sync::Arc<gimli::read::dwarf::Dwarf<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>, alloc::alloc::Global> {
                                ptr: core::ptr::non_null::NonNull<alloc::sync::ArcInner<gimli::read::dwarf::Dwarf<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>>> {
                                    pointer: <UNKNOWN>
                                }
                                alloc: alloc::alloc::Global { }
                            }
                            unit_ranges: alloc::boxed::Box<[addr2line::UnitRange], alloc::alloc::Global> {
                                data_ptr: <UNKNOWN>
                                length: <UNKNOWN>
                            }
                            units: alloc::boxed::Box<[addr2line::ResUnit<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>], alloc::alloc::Global> {
                                data_ptr: <UNKNOWN>
                                length: <UNKNOWN>
                            }
                            sup_units: alloc::boxed::Box<[addr2line::SupUnit<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>], alloc::alloc::Global> {
                                data_ptr: <UNKNOWN>
                                length: <UNKNOWN>
                            }
                        }
                    }
                    _map: std::backtrace_rs::symbolize::gimli::mmap::Mmap {
                        ptr: <UNKNOWN>
                        len: <UNKNOWN>
                    }
                    stash: std::backtrace_rs::symbolize::gimli::stash::Stash {
                        buffers: core::cell::UnsafeCell<alloc::vec::Vec<alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::alloc::Global>> {
                            value: alloc::vec::Vec<alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::alloc::Global> {
                                buf: alloc::raw_vec::RawVec<alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::alloc::Global> {
                                    cap: alloc::raw_vec::Cap {
                                        __0: <UNKNOWN>
                                    }
                                    ptr: core::ptr::unique::Unique<alloc::vec::Vec<u8, alloc::alloc::Global>> {
                                        pointer: core::ptr::non_null::NonNull<alloc::vec::Vec<u8, alloc::alloc::Global>> {
                                            pointer: <UNKNOWN>
                                        }
                                        _marker: core::marker::PhantomData<alloc::vec::Vec<u8, alloc::alloc::Global>> { }
                                    }
                                    alloc: alloc::alloc::Global { }
                                }
                                len: <UNKNOWN>
                            }
                        }
                        mmaps: core::cell::UnsafeCell<alloc::vec::Vec<std::backtrace_rs::symbolize::gimli::mmap::Mmap, alloc::alloc::Global>> {
                            value: alloc::vec::Vec<std::backtrace_rs::symbolize::gimli::mmap::Mmap, alloc::alloc::Global> {
                                buf: alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap, alloc::alloc::Global> {
                                    cap: alloc::raw_vec::Cap {
                                        __0: <UNKNOWN>
                                    }
                                    ptr: core::ptr::unique::Unique<std::backtrace_rs::symbolize::gimli::mmap::Mmap> {
                                        pointer: core::ptr::non_null::NonNull<std::backtrace_rs::symbolize::gimli::mmap::Mmap> {
                                            pointer: <UNKNOWN>
                                        }
                                        _marker: core::marker::PhantomData<std::backtrace_rs::symbolize::gimli::mmap::Mmap> { }
                                    }
                                    alloc: alloc::alloc::Global { }
                                }
                                len: <UNKNOWN>
                            }
                        }
                    }
                }
            };
            alloc::vec::Vec<T,A>::insert(&v9, 0, &v0 as u13440);
            v3 = v11;
            v0 = *(&(&v1.__0)[10] as &i128) as u128;
            v6 = v17;
            v5 = 0;
            v7 = struct16 {
                field_0: alloc::boxed::Box<T>::new(std::io::stdio::stdin())
                field_8: &g_51f950
            };
            v22 = std::io::copy::generic_copy(&v7, &v0 as u13440);
            if !((!v22 as i64 || v22 as i64 != 1 || std::io::error::Error::kind(*((&v22 as &char + 8) as &i64)) == 39) && v4 == v18) {
                return v16;
            }
            v21 = <uu_tee::MultiWriter as std::io::Write>::flush(&v0 as u13440);
            return v16;
        },
    }
}
