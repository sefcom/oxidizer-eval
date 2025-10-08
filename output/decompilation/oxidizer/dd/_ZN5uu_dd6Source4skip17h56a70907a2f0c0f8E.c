fn uu_dd::Source::skip(a0: i64, a1: u64) -> long long {
    let v0: std::sys::fs::unix::cfm::CachedFileMetadata;  // [bp-0x88]
    let v1: struct16;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v5: std::sys::fs::unix::cfm::CachedFileMetadata;  // [bp-0x38], Other Possible Types: u64
    let v6: u64;  // [bp-0x30]
    let v8: core::fmt::rt::Argument;  // r15
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v14: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v15: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v16: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v8 = a0 + 4;
    if !*(a0 as &i32) {
        core::result::Result<T,E>::unwrap(a1 >> 63, "src/uu/dd/src/dd.rs");
        v16 = <std::fs::File as std::io::Seek>::seek(v8, 2, a1);
        return v16 as i64;
    } else if *(a0 as &i32) == 1 {
        v1 = uu_dd::try_get_len_of_block_device(v8);
        if v1.field_0 != 2 && (v1.field_0 & 1) && v2 < a1 {
            v5 = uucore::util_name();
            v6 = v9;
            eprint!("{}: ", &v5);
            eprintln!("'standard input': cannot skip: Invalid argument");
            uucore::mods::error::set_exit_code(1);
            return 0;
        }
        v5 = std::sys::fs::unix::cfm::CachedFileMetadata {
            __1: std::fs::Metadata {
                __0: std::sys::fs::unix::FileAttr {
                    statx_extra_fields: v8
                    stat: libc::unix::linux_like::linux::gnu::b64::x86_64::stat64 {
                        st_dev: <UNKNOWN>
                        st_ino: <UNKNOWN>
                        st_nlink: <UNKNOWN>
                        st_mode: <UNKNOWN>
                        st_uid: <UNKNOWN>
                        st_gid: <UNKNOWN>
                        __pad0: <UNKNOWN>
                        st_rdev: <UNKNOWN>
                        st_size: <UNKNOWN>
                        st_blksize: <UNKNOWN>
                        st_blocks: <UNKNOWN>
                        st_atime: <UNKNOWN>
                        st_atime_nsec: <UNKNOWN>
                        st_mtime: <UNKNOWN>
                        st_mtime_nsec: <UNKNOWN>
                        st_ctime: <UNKNOWN>
                        st_ctime_nsec: <UNKNOWN>
                        __reserved: <UNKNOWN>
                    }
                }
            }
            __0: std::fs::File {
                inner: std::sys::fs::unix::File {
                    __0: std::sys::fd::unix::FileDesc {
                        __0: std::os::fd::owned::OwnedFd {
                            fd: core::num::niche_types::I32NotAllOnes {
                                __0: <UNKNOWN>
                            }
                        }
                    }
                }
            }
        };
        v14 = std::io::copy::generic_copy(&v5, a1);
        if ((a1 <= *((&v14 as &char + 8) as &i64) | v14 as i64) & 1) {
            return v14 as i64;
        }
        v3 = uucore::util_name();
        v4 = v10;
        eprint!("{}: ", &v3);
        eprintln!("'standard input': cannot skip to specified offset");
        return v14 as i64;
    } else {
        v0 = std::sys::fs::unix::cfm::CachedFileMetadata {
            __1: std::fs::Metadata {
                __0: std::sys::fs::unix::FileAttr {
                    statx_extra_fields: v8
                    stat: libc::unix::linux_like::linux::gnu::b64::x86_64::stat64 {
                        st_dev: <UNKNOWN>
                        st_ino: <UNKNOWN>
                        st_nlink: <UNKNOWN>
                        st_mode: <UNKNOWN>
                        st_uid: <UNKNOWN>
                        st_gid: <UNKNOWN>
                        __pad0: <UNKNOWN>
                        st_rdev: <UNKNOWN>
                        st_size: <UNKNOWN>
                        st_blksize: <UNKNOWN>
                        st_blocks: <UNKNOWN>
                        st_atime: <UNKNOWN>
                        st_atime_nsec: <UNKNOWN>
                        st_mtime: <UNKNOWN>
                        st_mtime_nsec: <UNKNOWN>
                        st_ctime: <UNKNOWN>
                        st_ctime_nsec: <UNKNOWN>
                        __reserved: <UNKNOWN>
                    }
                }
            }
            __0: std::fs::File {
                inner: std::sys::fs::unix::File {
                    __0: std::sys::fd::unix::FileDesc {
                        __0: std::os::fd::owned::OwnedFd {
                            fd: core::num::niche_types::I32NotAllOnes {
                                __0: <UNKNOWN>
                            }
                        }
                    }
                }
            }
        };
        v15 = std::io::copy::generic_copy(&v0, a1);
        return v15 as i64;
    }
}
