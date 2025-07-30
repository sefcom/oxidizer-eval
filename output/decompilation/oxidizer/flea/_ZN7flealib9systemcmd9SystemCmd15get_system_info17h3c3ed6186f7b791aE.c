fn flealib::systemcmd::SystemCmd::get_system_info(a0: u64, a1: i64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x258], Other Possible Types: struct_0 *, u64
    let v1: u128;  // [bp-0x258]
    let v2: u64;  // [bp-0x250]
    let v3: i64;  // [bp-0x248], Other Possible Types: u64
    let v4: u64;  // [bp-0x240]
    let v5: void*;  // [bp-0x238], Other Possible Types: struct_0 *
    let v6: u64;  // [bp-0x230]
    let v7: i64;  // [bp-0x228]
    let v8: u64;  // [bp-0x220]
    let v9: i64;  // [bp-0x218]
    let v10: u64;  // [bp-0x210]
    let v11: struct24;  // [bp-0x200], Other Possible Types: struct_0 *, alloc::raw_vec::Cap, u64
    let v12: struct24;  // [bp-0x200], Other Possible Types: u64
    let v13: u64;  // [bp-0x1f8]
    let v14: struct40;  // [bp-0x1f0], Other Possible Types: struct_0 *, u64
    let v15: u64;  // [bp-0x1e8]
    let v16: void*;  // [bp-0x1e0]
    let v17: u32;  // [bp-0x1cc]
    let v18: u128;  // [bp-0x1c8]
    let v19: u64;  // [bp-0x1b8]
    let v20: struct24;  // [bp-0x1a8], Other Possible Types: u64
    let v21: u64;  // [bp-0x1a0]
    let v22: u64;  // [bp-0x198]
    let v23: alloc::string::String;  // [bp-0x188], Other Possible Types: struct24, u64
    let v24: struct16;  // [bp-0x188], Other Possible Types: u64
    let v25: u128;  // [bp-0x178]
    let v26: u64;  // [bp-0x168]
    let v27: u64;  // [bp-0x158]
    let v28: u64;  // [bp-0x150]
    let v29: struct16;  // [bp-0x148], Other Possible Types: struct_0 *, u128
    let v30: u64;  // [bp-0x140]
    let v32: alloc::raw_vec::Cap;  // [bp-0x118], Other Possible Types: struct24
    let v33: u64;  // [bp-0x118]
    let v34: u64;  // [bp-0x118]
    let v35: u64;  // [bp-0x108]
    let v36: i8;  // [bp-0xf8]
    let v37: i64;  // [bp-0xe8]
    let v38: alloc::string::String;  // [bp-0xe0], Other Possible Types: struct24
    let v39: u64;  // [bp-0xd8]
    let v40: u64;  // [bp-0xd0]
    let v41: u64;  // [bp-0xc8]
    let v42: u64;  // [bp-0xc0]
    let v43: u64;  // [bp-0xb8]
    let v44: u64;  // [bp-0xb0]
    let v45: alloc::string::String;  // [bp-0xa8]
    let v46: u64;  // [bp-0x98]
    let v47: u64;  // [bp-0x80]
    let v48: u64;  // [bp-0x68]
    let v49: u64;  // [bp-0x50]
    let v50: alloc::string::String;  // [bp-0x48]
    let v52: struct24;  // xmm0
    let v53: struct24;  // xmm0
    let v54: alloc::string::String;  // xmm0
    let v55: u128;  // xmm0
    let v56: u64;  // rdx
    let v57: u64;  // r8
    let v58: struct96;  // rax
    let v59: u64;  // rdx
    let v60: u64;  // rcx
    let v61: struct24;  // rax
    let v62: u64;  // rdx
    let v63: alloc::string::String;  // rcx
    let v64: core::result::Result<std::fs::File, std::io::error::Error>;  // rax
    let v65: u64;  // rdx
    let v66: u64;  // rcx
    let v67: alloc::string::String;  // [bp-0x90]
    let v68: alloc::string::String;  // [bp-0x78]
    let v69: alloc::string::String;  // [bp-0x60]

    sysinfo::common::System::refresh_all(a1, a1, a2);
    v11 = sysinfo::common::System::name();
    if (((0 ^ v11) & (0 ^ -(v12))) >> 63) as char {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("<unknown>");
        v22 = v3;
        v52 = *(&v0.field_0 as &i128);
    } else {
        v22 = v14;
        v52 = *(&v12 as &i128);
    }
    vvar_811{stack -512} = struct24 OrderedDict([(0, 𝜙@64b [((7812928, None), vvar_616{stack -512}), ((7812909, None), vvar_616{stack -512})]), (16, 𝜙@64b [((7812928, None), vvar_622{stack -496}), ((7812909, None), None)])])
    v20 = v52;
    sysinfo::common::System::kernel_version(&v12);
    if v12.field_0 == 0x8000000000000000 {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("<unknown>");
        v35 = v3;
        v53 = *(&v0.field_0 as &i128);
    } else {
        v35 = v14;
        v53 = *(&v12.field_0 as &i128);
    }
    v32 = v53;
    v11 = sysinfo::common::System::os_version();
    if v11 == 0x8000000000000000 {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("<unknown>");
    }
    v23 = v54;
    v11 = sysinfo::common::System::long_os_version();
    if v11.field_0 == 0x8000000000000000 {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("<unknown>");
    }
    v29 = v55;
    v41 = *((a1 + 280) as &i64);
    v0 = &v20 as u8;
    v2 = <alloc::string::String as core::fmt::Debug>::fmt;
    v3 = &v32;
    v4 = <alloc::string::String as core::fmt::Debug>::fmt;
    v5 = &v23 as u8;
    v6 = <alloc::string::String as core::fmt::Debug>::fmt;
    v7 = &v29;
    v8 = <alloc::string::String as core::fmt::Debug>::fmt;
    v9 = &v41;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = "System name: ";
    v13 = 6;
    v16 = 0;
    v14 = &v0;
    v15 = 5;
    v38 = core::option::Option<T>::map_or_else(&v11, v56, &v29, v57);
    v18 = *(&v38.vec.buf.inner.cap as &i128);
    v19 = v40;
    v20 = *((a1 + 360) as &i64) >> 20;
    v34 = *((a1 + 360) as &i64) - *((a1 + 376) as &i64) >> 20;
    v24 = *((a1 + 416) as &i64) >> 20;
    v29 = *((a1 + 416) as &i64) - *((a1 + 424) as &i64) >> 20;
    v0 = &v20;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v3 = &v34;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v5 = &v24;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7 = &v29;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = "Total memory: ";
    v13 = 5;
    v16 = 0;
    v14 = &v0;
    v15 = 4;
    v45 = core::option::Option<T>::map_or_else(&v11, a2, &v29, v57);
    v41 = *(&v45.vec.buf.inner.cap as &i128);
    v43 = v46;
    alloc::vec::Vec<T,A>::append_elements(&v18, v42, v46, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    alloc::vec::Vec<T,A>::append_elements(&v18, "Users:\r\n", "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v38 = sysinfo::common::Users::new_with_refreshed_list();
    v24 = struct16 {
        field_0: v39
        field_8: v40 * 56 + v39
    };
    v58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24);
    if v58 {
        do {
            v12 = *((v58 + 8) as &i128);
            v29 = &v12;
            v30 = <&T as core::fmt::Debug>::fmt;
            v0 = &g_b09090;
            v2 = 2;
            v5 = 0;
            v3 = &v29;
            v4 = 1;
            v67 = core::option::Option<T>::map_or_else(&v0, v59, v60, v57);
            v1 = *(&v67.vec.buf.inner.cap as &i128);
            v3 = v47;
            alloc::vec::Vec<T,A>::append_elements(&v18, 2, v47, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
            v58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24);
        } while (v58);
    }
    alloc::vec::Vec<T,A>::append_elements(&v18, "Disks:\r\n", "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v20 = sysinfo::common::Disks::new_with_refreshed_list();
    v29 = struct16 {
        field_0: v21
        field_8: v22 * 112 + v21
    };
    v61 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
    if v61 {
        do {
            v23 = v61;
            v11 = &v23;
            v13 = <&T as core::fmt::Debug>::fmt;
            v0 = &g_b09090;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            v68 = core::option::Option<T>::map_or_else(&v0, v62, v63, v57);
            v1 = *(&v68.vec.buf.inner.cap as &i128);
            v3 = v48;
            alloc::vec::Vec<T,A>::append_elements(&v18, 2, v48, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
            v61 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
        } while (v61);
    }
    alloc::vec::Vec<T,A>::append_elements(&v18, "Networks:\r\n", "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v17 = sysinfo::common::Networks::new_with_refreshed_list(&v29) & -0x100 | 1;
    v32 = <&sysinfo::common::Networks as core::iter::traits::collect::IntoIterator>::into_iter(&v29);
    v26 = *(&v36 as &i64);
    v25 = *(&v35 as &i128);
    *(&v23.field_0 as &alloc::raw_vec::Cap) = v32;
    loop {
        v64 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v23);
        if let Ok(_) = v64 {
            break;
        }
        v44 = v64;
        v27 = sysinfo::common::NetworkData::received(v65);
        v28 = sysinfo::common::NetworkData::transmitted(v65);
        v0 = &v44;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v27;
        v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v5 = &v28;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v11 = &g_b090b0;
        v13 = 4;
        v16 = 0;
        v14 = &v0;
        v15 = 3;
        v69 = core::option::Option<T>::map_or_else(&v11, a2, &v28, v57);
        v1 = *(&v69.vec.buf.inner.cap as &i128);
        v3 = v49;
        alloc::vec::Vec<T,A>::append_elements(&v18, <&T as core::fmt::Display>::fmt, v49, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    }
    alloc::vec::Vec<T,A>::append_elements(&v18, "Uptime:\r\n", "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v66 = sysinfo::common::System::uptime();
    v27 = v66 / 86400;
    v28 = (v66 - v27 * 86400) * 1193047 >> 32;
    v33 = ((v66 & 4294967295) - (((v66 >> 4) * 655884233731895169 >> 64 & 4294967295) >> 3) * 3600) * 2185 >> 17;
    v23 = v66 % 60;
    v0 = &v27;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v3 = &v28;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v5 = &v33;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7 = &v23;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = "Days:";
    v13 = 5;
    v16 = 0;
    v14 = &v0;
    v15 = 4;
    v50 = core::option::Option<T>::map_or_else(&v11, v66 / 60, &v23, v57);
    v0 = *(&v50.vec.buf.inner.cap as &i128);
    v3 = v50.vec.len;
    alloc::vec::Vec<T,A>::append_elements(&v18, core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt, v50.vec.len, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    *((v37 + 16) as &u64) = v19;
    *(v37 as &u128) = v18;
    v17 = 0;
    return a0;
}
