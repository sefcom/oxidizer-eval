fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a1: i64, a2: i64, a3: &struct24) -> Option<struct24> {
    let a0: i64;  // rsi
    let v0: u256;  // [bp-0x58]
    let v1: u256;  // [bp-0x58]
    let v2: u64;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x28]
    let v6: i64;  // rdi
    let v7: u64;  // rdi

    if *((a0 + 88) as &i8) {
        v0 = (usize, std::backtrace_rs::symbolize::gimli::Mapping) {
            __0: a1
            __1: std::backtrace_rs::symbolize::gimli::Mapping {
                cx: std::backtrace_rs::symbolize::gimli::Context {
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
                    object: std::backtrace_rs::symbolize::gimli::elf::Object {
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
                        syms: alloc::vec::Vec<std::backtrace_rs::symbolize::gimli::elf::ParsedSym, alloc::alloc::Global> {
                            buf: alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::elf::ParsedSym, alloc::alloc::Global> {
                                ptr: core::ptr::unique::Unique<std::backtrace_rs::symbolize::gimli::elf::ParsedSym> {
                                    pointer: core::ptr::non_null::NonNull<std::backtrace_rs::symbolize::gimli::elf::ParsedSym> {
                                        pointer: <UNKNOWN>
                                    }
                                    _marker: core::marker::PhantomData<std::backtrace_rs::symbolize::gimli::elf::ParsedSym> { }
                                }
                                cap: alloc::raw_vec::Cap {
                                    __0: <UNKNOWN>
                                }
                                alloc: alloc::alloc::Global { }
                            }
                            len: <UNKNOWN>
                        }
                    }
                    package: <UNKNOWN>
                }
                _map: std::backtrace_rs::symbolize::gimli::mmap::Mmap {
                    ptr: <UNKNOWN>
                    len: <UNKNOWN>
                }
                stash: std::backtrace_rs::symbolize::gimli::stash::Stash {
                    buffers: core::cell::UnsafeCell<alloc::vec::Vec<alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::alloc::Global>> {
                        value: alloc::vec::Vec<alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::alloc::Global> {
                            buf: alloc::raw_vec::RawVec<alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::alloc::Global> {
                                ptr: core::ptr::unique::Unique<alloc::vec::Vec<u8, alloc::alloc::Global>> {
                                    pointer: core::ptr::non_null::NonNull<alloc::vec::Vec<u8, alloc::alloc::Global>> {
                                        pointer: <UNKNOWN>
                                    }
                                    _marker: core::marker::PhantomData<alloc::vec::Vec<u8, alloc::alloc::Global>> { }
                                }
                                cap: alloc::raw_vec::Cap {
                                    __0: <UNKNOWN>
                                }
                                alloc: alloc::alloc::Global { }
                            }
                            len: <UNKNOWN>
                        }
                    }
                    mmaps: core::cell::UnsafeCell<alloc::vec::Vec<std::backtrace_rs::symbolize::gimli::mmap::Mmap, alloc::alloc::Global>> {
                        value: alloc::vec::Vec<std::backtrace_rs::symbolize::gimli::mmap::Mmap, alloc::alloc::Global> {
                            buf: alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap, alloc::alloc::Global> {
                                ptr: core::ptr::unique::Unique<std::backtrace_rs::symbolize::gimli::mmap::Mmap> {
                                    pointer: core::ptr::non_null::NonNull<std::backtrace_rs::symbolize::gimli::mmap::Mmap> {
                                        pointer: <UNKNOWN>
                                    }
                                    _marker: core::marker::PhantomData<std::backtrace_rs::symbolize::gimli::mmap::Mmap> { }
                                }
                                cap: alloc::raw_vec::Cap {
                                    __0: <UNKNOWN>
                                }
                                alloc: alloc::alloc::Global { }
                            }
                            len: <UNKNOWN>
                        }
                    }
                }
            }
        };
        alloc::vec::Vec<T,A>::insert(a0, 0, &v0);
    } else if *((a0 + 16) as &i64) < *((a0 + 80) as &i64) {
        v0 = struct32 {
            field_0: a1
            field_8: *(a2 as &i128)
            field_24: *((a2 + 16) as &i64)
        };
        alloc::vec::Vec<T,A>::push(a0, &v0);
    } else {
        alloc::vec::Vec<T,A>::remove(&v0, a0, 0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
        v4 = v3;
        memcpy(&v0, &v0, 16);
        v1 = struct32 {
            field_0: a1
            field_8: *(a2 as &i128)
            field_24: *((a2 + 16) as &i64)
        };
        alloc::vec::Vec<T,A>::push(a0, &v1);
        v2 = v4;
        memcpy(&v1, &v0, 16);
        core::result::Result<T,E>::unwrap(v7, &v1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
        return;
    }
    *(v6 as &i64) = 0x8000000000000000;
    return;
}
