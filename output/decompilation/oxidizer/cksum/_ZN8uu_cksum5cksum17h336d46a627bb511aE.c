fn uu_cksum::cksum(a0: i64, a1: u64) -> long long {
    let v1: Result<(), Error>;  // [bp-0x248], Other Possible Types: struct20, struct28, struct40, u64
    let v2: u64;  // [bp-0x248]
    let v3: u64;  // [bp-0x248]
    let v4: u64;  // [bp-0x240]
    let v5: u64;  // [bp-0x240]
    let v6: u64;  // [bp-0x238]
    let v7: u64;  // [bp-0x238]
    let v13: u64;  // [bp-0x208]
    let v15: u64;  // [bp-0x200]
    let v17: u64;  // [bp-0x1f0]
    let v18: u64;  // [bp-0x1f0]
    let v19: Result<struct32, struct24>;  // [bp-0x1f0]
    let v20: u64;  // [bp-0x1e8]
    let v21: u64;  // [bp-0x1e8]
    let v22: u64;  // [bp-0x1e0]
    let v23: u64;  // [bp-0x1e0]
    let v24: u64;  // [bp-0x1d8]
    let v25: u64;  // [bp-0x1d8]
    let v26: void*;  // [bp-0x1c0]
    let v27: Result<struct4, struct8>;  // [bp-0x1c0]
    let v28: u32;  // [bp-0x1bc]
    let v29: u64;  // [bp-0x1b8]
    let v31: u64;  // [bp-0x1a8]
    let v32: u64;  // [bp-0x1a0]
    let v38: struct16;  // [bp-0x180]
    let v40: u64;  // [bp-0x170]
    let v41: u64;  // [bp-0x168]
    let v42: u64;  // [bp-0x158]
    let v44: u64;  // [bp-0x150]
    let v45: u64;  // [bp-0x148]
    let v46: u64;  // [bp-0x140]
    let v65: struct32;  // [bp-0xa8]
    let v66: alloc::string::String;  // [bp-0x88]
    let v67: u64;  // [bp-0x78]
    let v68: u8;  // [bp-0x70]
    let v70: i64;  // r13
    let v71: u64;  // r15
    let v72: u64;  // rax
    let v73: u64;  // r14
    let v74: i64;  // rbx
    let v75: u64;  // rdx
    let v77: u64;  // r12
    let v79: u64;  // rax
    let v80: u64;  // rdx
    let v81: void*;  // rax
    let v84: u64;  // rbx
    let v85: u32;  // eax

    v70 = a0;
    core::iter::traits::iterator::Iterator::collect(&v41, a1);
    if *((a0 + 58) as &i8) == 1 && v42 >= 2 {
        v71 = alloc::boxed::Box<T>::new(0);
LABEL_481944:
        return v31;
    }
    v65 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v41);
    v72 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v65);
    if !v72 {
        goto LABEL_481944;
    }
    v73 = v72;
    v45 = a0 + 32;
    v44 = a0 + 59;
    v74 = &v68;
    v38 = struct16 {
        field_0: a0
        field_8: "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/cksum/src/cksum.rs"
    };
    loop {
        v77 = v75;
        std::path::Path::components(v74, v73, v77);
        v1 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(v74, &v1) {
            v79 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            goto LABEL_480dd0;
        }
        if std::path::Path::is_dir(v73, v77) {
            v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity();
            v79 = alloc::boxed::Box<T>::new(&v1) as u64;
            goto LABEL_480dd0;
        }
        v27 = std::fs::File::open(v73, v77);
        if let Ok(_) = v27 {
            break;
        }
        v32 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v29, v73, v77);
        uucore::mods::error::set_exit_code(1);
        v13 = uucore::util_name();
        v15 = v75;
        eprintln!("{}: {}", &v13, &v32);
        v1 = v2;
        v17 = v18;
        v21 = v20;
        v22 = v23;
        v25 = v24;
        v4 = v5;
        v6 = v7;
        v3 = v1;
        v73 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v65);
        if !v73 {
            goto LABEL_481944;
        }
    }
    v79 = alloc::boxed::Box<T>::new(v28);
LABEL_480dd0:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v74, v79, v80);
    if std::path::Path::is_dir(v73, v77) {
        v17 = v73;
        v21 = v77;
        v66 = format!("{}: Is a directory", &v17);
        v1 = struct28 {
            field_0: *(&v66.vec.buf.inner.cap as &i128)
            field_16: v67
            field_24: 1
        };
        v81 = alloc::boxed::Box<T>::new(&v1) as u64;
        v26 = v81;
        v29 = &g_5629e8;
        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v81));
        v13 = uucore::util_name();
        v15 = v75;
        eprintln!("{}: {}", &v13, &v26 as u128);
        v1 = v2;
        v17 = v18;
        v21 = v20;
        v22 = v23;
        v25 = v24;
        v4 = v5;
        v6 = v7;
    }
    v1 = uucore::features::checksum::digest_reader(v45, v74, *((v70 + 48) as &i64));
    v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1);
    v31 = v21;
    v84 = v22;
    if (((0 ^ v19 as i64) & (0 ^ -(v19 as i64))) >> 63) as char {
        goto LABEL_481944;
    }
    v46 = v25;
    v85 = *((v70 + 58) as &i8);
    v40 = v46;
}
