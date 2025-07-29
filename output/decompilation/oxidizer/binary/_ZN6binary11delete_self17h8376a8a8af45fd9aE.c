fn binary::delete_self() -> u64 {
    let v0: struct40;  // [bp-0xa0], Other Possible Types: u64
    let v1: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x78], Other Possible Types: u64
    let v2: struct32;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: i64;  // [bp-0x68], Other Possible Types: u64
    let v5: u64;  // [bp-0x60]
    let v6: void*;  // [bp-0x58]
    let v7: struct24;  // [bp-0x40]
    let v8: u64;  // [bp-0x30]
    let v9: i64;  // [bp-0x28]
    let v10: u64;  // [bp-0x20]
    let v11: u64;  // [bp-0x18]
    let v13: u64;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rdx
    let v16: u64;  // rsi

    v1 = std::env::current_exe();
    v7 = core::result::Result<T,E>::unwrap(&v1);
    if core::sync::atomic::atomic_load() >= 3 {
        v11 = *((&v7.field_0 as &char + 8) as &i128);
        v9 = &v11;
        v10 = <std::path::Display as core::fmt::Display>::fmt;
        v1 = "🗑️  Deleting current executable: ";
        v3 = 1;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        v0 = struct40 {
            field_0: "binary"
            field_16: "binary"
            field_32: log::__private_api::loc("binary/src/main.rs")
        };
        log::__private_api::log(&v1, 3, &v0);
    }
    vvar_212{stack -120} = struct32 OrderedDict([(0, Load(addr=(Reference vvar_208{stack -64}), size=16, endness=Iend_LE)), (16, vvar_144{stack -48}), (24, 𝜙@64b [((29170120, None), None), ((29170239, None), vvar_170{stack -96})])])
    v0 = std::fs::remove_file(&v2);
    v13 = core::sync::atomic::atomic_load();
    if v0 {
        if v13 {
            v1 = "⚠️ Failed to delete current executable.";
            v3 = 1;
            v4 = 8;
            v5 = 0;
            v0 = struct40 {
                field_0: "binary"
                field_16: "binary"
                field_32: log::__private_api::loc("binary/src/main.rs")
            };
            v14 = &v1;
            v15 = &v0;
            v16 = 1;
        } else {
            return v13;
        }
    } else {
        if v13 > 2 {
            v1 = "✅ Executable deleted successfully.";
            v3 = 1;
            v4 = 8;
            v5 = 0;
            v0 = struct40 {
                field_0: "binary"
                field_16: "binary"
                field_32: log::__private_api::loc("binary/src/main.rs")
            };
            v14 = &v1;
            v15 = &v0;
            v16 = 3;
        } else {
            return v13;
        }
    }
    return log::__private_api::log(v14, v16, v15) as u64;
}
