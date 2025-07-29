fn flealib::commandprocessor::CommandProcessor::change_directory(a0: i64, a1: u64, a2: u32, a3: u64) -> int {
    let v0: struct40;  // [bp-0xd0]
    let v1: u64;  // [bp-0xa8]
    let v2: struct24;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: i64;  // [bp-0x98], Other Possible Types: u64
    let v5: u64;  // [bp-0x98]
    let v6: u64;  // [bp-0x90]
    let v7: void*;  // [bp-0x88]
    let v8: u64;  // [bp-0x78]
    let v9: u64;  // [bp-0x68]
    let v10: i64;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v12: Option<struct24>;  // [bp-0x48]
    let v17: u128;  // xmm0

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "..") {
        std::sync::mutex::Mutex<T>::lock(&v1, a3 + 16);
        v12 = flealib::fileserver::FileServer::change_directory_up(core::result::Result<T,E>::unwrap(&v1, "flealib/src/commandprocessor.rs") + 8);
        if (((0 ^ v12 as i64) & (0 ^ -(v12 as i64))) >> 63) as char {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
                v1 = "Directory changed";
                v3 = 1;
                v5 = 8;
                v6 = 0;
                v0 = struct40 {
                    field_0: "flealib::commandprocessor"
                    field_16: "flealib::commandprocessor"
                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                };
                log::__private_api::log(&v1, 4, &v0);
            }
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("Directory changed");
        } else {
            v9 = *((&v12 as &char + 16) as &i64);
            v8 = v12 as i128;
            if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                *((a0 + 16) as &u64) = v9;
            }
            v10 = &v8;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v1 = "Error: ";
            v3 = 1;
            v7 = 0;
            v4 = &v10;
            v6 = 1;
            v0 = struct40 {
                field_0: "flealib::commandprocessor"
                field_16: "flealib::commandprocessor"
                field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
            };
            log::__private_api::log(&v1, 1, &v0);
            goto LABEL_76d76c;
        }
    } else {
        if !a2 {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
                v1 = "Directory name is empty";
                v3 = 1;
                v4 = 8;
                v6 = 0;
                v0 = struct40 {
                    field_0: "flealib::commandprocessor"
                    field_16: "flealib::commandprocessor"
                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                };
                log::__private_api::log(&v1, 4, &v0);
            }
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "Directory name is empty");
            return;
        }
        std::sync::mutex::Mutex<T>::lock(&v1, a3 + 16);
        v12 = flealib::fileserver::FileServer::change_directory(core::result::Result<T,E>::unwrap(&v1, "flealib/src/commandprocessor.rs") + 8, a1, a2);
        if (((0 ^ v12 as i64) & (0 ^ -(v12 as i64))) >> 63) as char {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
                v1 = "Directory changed";
                v3 = 1;
                v5 = 8;
                v6 = 0;
                v0 = struct40 {
                    field_0: "flealib::commandprocessor"
                    field_16: "flealib::commandprocessor"
                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                };
                log::__private_api::log(&v1, 4, &v0);
            }
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("Directory changed");
        } else {
            v9 = *((&v12 as &char + 16) as &i64);
            v8 = v12 as i128;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                v10 = &v8;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = "Error: ";
                v3 = 1;
                v7 = 0;
                v4 = &v10;
                v6 = 1;
                v0 = struct40 {
                    field_0: "flealib::commandprocessor"
                    field_16: "flealib::commandprocessor"
                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                };
                log::__private_api::log(&v1, 1, &v0);
            }
LABEL_76d76c:
            *((a0 + 16) as &u64) = v9;
        }
    }
    return struct24 {
        field_0: v17
        field_16: v5
    };
}
