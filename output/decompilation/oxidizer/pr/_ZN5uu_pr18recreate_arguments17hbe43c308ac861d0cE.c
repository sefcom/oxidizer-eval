fn uu_pr::recreate_arguments(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: Result<struct32, struct32>;  // [bp-0x188], Other Possible Types: gimli::read::rnglists::Range
    let v1: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x188]
    let v2: Result<struct32, struct32>;  // [bp-0x188]
    let v3: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x128]
    let v4: alloc::string::String;  // [bp-0x110]
    let v5: struct24;  // [bp-0x110]
    let v6: struct32;  // [bp-0xf8]
    let v7: struct24;  // [bp-0xd8]
    let v8: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0xd8]
    let v9: struct32;  // [bp-0xc0]
    let v10: struct40;  // [bp-0xa0]
    let v11: struct32;  // [bp-0x78]
    let v12: struct32;  // [bp-0x58]
    let v13: i64;  // [bp-0x38]
    let v15: u64;  // rax
    let v16: u64;  // rdx
    let v17: u64;  // rbp
    let v18: u64;  // rdi

    v0 = regex::regex::string::Regex::new("^[-+]\\d+.*");
    v11 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v0 = regex::regex::string::Regex::new("^[^-]\\d*$");
    v6 = core::result::Result<T,E>::unwrap(&v0, "src/uu/pr/src/pr.rs");
    v2 = regex::regex::string::Regex::new("^-n\\s*$");
    v9 = core::result::Result<T,E>::unwrap(&v2, "src/uu/pr/src/pr.rs");
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v2 as u8, a0, a1);
    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v15 = itertools::Itertools::find_position(&v0, &v9);
    if v16 {
        v17 = v15 + 1;
        if v17 < a1 && !regex::regex::string::Regex::is_match_at(v6.field_0 as i64, *((&v6.field_0 as &char + 8) as &i64), *((a0 + v17 * 24 + 8) as &i64), *((a0 + v17 * 24 + 16) as &i64)) as i8 {
            v3 = alloc::vec::Vec<T,A>::remove(&v2 as u8, v17, "src/uu/pr/src/pr.rs");
            v10 = <uu_pr::NumberingMode as core::default::Default>::default();
            v4 = format!("{}", &v10 as u8);
            v7 = v5;
            v8 = (usize, std::backtrace_rs::symbolize::gimli::Mapping) {
                __0: *(&v4.vec.buf.cap as &i128)
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
            alloc::vec::Vec<T,A>::insert(&v2 as u8, v17, &v8);
            v1 = (usize, std::backtrace_rs::symbolize::gimli::Mapping) {
                __0: *(&v3.__0 as &i128)
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
            alloc::vec::Vec<T,A>::insert(&v2 as u8, v15 + 2, &v1);
        }
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2 as u8);
    v13 = &v11;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(v18, &v12);
    return;
}
