fn starship::modules::container::module::container_name() -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x158], Other Possible Types: u128
    let v1: struct24;  // [bp-0x158]
    let v2: u64;  // [bp-0x150]
    let v3: struct8;  // [bp-0x148], Other Possible Types: u64
    let v4: struct24;  // [bp-0x138]
    let v5: i64;  // [bp-0x130]
    let v6: u64;  // [bp-0x128]
    let v7: struct24;  // [bp-0x120]
    let v11: struct24;  // [bp-0x108], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v12: struct24;  // [bp-0x108]
    let v13: struct24;  // [bp-0x108]
    let v14: u128;  // [bp-0x108]
    let v15: u64;  // [bp-0x100]
    let v16: struct16;  // [bp-0xf8], Other Possible Types: struct40
    let v17: struct24;  // [bp-0x50]
    let v18: i64;  // [bp-0x50]
    let v19: struct80;  // [bp-0x38]
    let v20: struct80;  // [bp-0x28]
    let v22: struct8;  // rsi
    let v23: struct16;  // rdx
    let v24: u32;  // rdx
    let v27: &str;  // rax:rdx

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/proc/vz");
    v11 = std::fs::metadata(v2, v3);
    if v11 as i64 != 2 {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/proc/bc");
        v11 = std::fs::metadata(v2, v3);
        if v11 as i64 == 2 {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, v22, v23);
            return;
        }
    }
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/run/host/container-manager");
    v11 = std::fs::metadata(v2, v3);
    if v11 as i64 != 2 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, v22, v23);
        return;
    }
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/incus/sock");
    v11 = std::fs::metadata(v2, v3);
    if v11 as i64 != 2 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, v22, v23);
        return;
    }
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/run/.containerenv");
    v14 = std::fs::metadata(v5, v6);
    if v11 as i64 == 2 {
        v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/run/systemd/container");
        v20 = v16;
        v19 = *(&v11.field_0 as &i128);
        v1 = starship::utils::read_file(&v19);
        if !((((0 ^ v1.field_0) & (0 ^ -(v1.field_0))) >> 63) as char) {
            v27 = core::str::<impl str>::trim_matches(v2, v3, v24);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27.data_ptr, v27.length, "docker") {
                v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Docker");
                return Some(struct24 {
                    field_0: *(&v13.field_0 as &i128)
                    field_16: v16
                });
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27.data_ptr, v27.length, "wsl") {
                v13 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Systemd");
                return Some(struct24 {
                    field_0: *(&v13.field_0 as &i128)
                    field_16: v16
                });
            }
        }
        v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/.dockerenv");
        v3 = v16;
        v0 = *(&v11.field_0 as &i128);
        v11 = std::fs::metadata(v2, v16);
        if v11 as i64 != 2 {
            v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Docker");
            return Some(struct24 {
                field_0: *(&v11.field_0 as &i128)
                field_16: v16
            });
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        v16 = v6;
        v14 = *(&v4.field_0 as &i128);
        v17 = starship::utils::read_file(&v14);
        if !((((0 ^ v17.field_0) & (0 ^ -(v18))) >> 63) as char) {
            v11 = starship::modules::container::module::container_name::{{closure}}(&v17);
            if v11.field_0 != 0x8000000000000000 {
                return v7;
            }
        }
        v7 = starship::modules::container::module::container_name::{{closure}}(v15);
        return v7;
    }
}
