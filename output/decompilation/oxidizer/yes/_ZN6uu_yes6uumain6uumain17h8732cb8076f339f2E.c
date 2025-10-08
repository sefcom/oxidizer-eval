fn uu_yes::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x398]
    let v1: struct16;  // [bp-0x390], Other Possible Types: struct8, u64
    let v2: void*;  // [bp-0x380]
    let v3: struct16;  // [bp-0x378], Other Possible Types: struct64
    let v4: u64;  // [bp-0x378]
    let v5: u64;  // [bp-0x370]
    let v6: iNone;  // [bp-0x368]
    let v7: iNone;  // [bp-0x358]
    let v8: i8;  // [bp-0x348]
    let v9: u64;  // [bp-0x338]
    let v10: u64;  // [bp-0x330]
    let v11: iNone;  // [bp-0x328]
    let v12: iNone;  // [bp-0x318]
    let v13: u64;  // [bp-0x308]
    let v14: alloc::string::String;  // [bp-0x300]
    let v15: core::fmt::Arguments;  // [bp-0x2f0]
    let v16: struct28;  // [bp-0x2e8], Other Possible Types: struct56, struct700
    let v18: u64;  // rdi
    let v19: u64;  // rdx
    let v20: u64;  // r14
    let v21: void*;  // rax

    v16 = uu_yes::uu_app();
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    v18 = v5;
    if (((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    }
    v13 = *(&v8 as &i64);
    v12 = v7;
    v11 = v6;
    v9 = v3.field_0;
    v10 = v5;
    v1 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0x4000, 1, 1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/yes/src/yes.rs");
    v2 = 0;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9);
    v3 = clap_builder::parser::error::MatchesError::unwrap(&v16);
    v1 = uu_yes::args_into_buffer(&v3);
    v1 = uu_yes::prepare_buffer();
    v20 = uu_yes::exec(v19, 0);
    if !v20 || std::io::error::Error::kind(v20) as u8 == 11 {
        return v21;
    }
    v0 = v20;
    v14 = format!("standard output: {}", &v0);
    v16 = struct28 {
        field_0: *(&v14.vec.buf.inner.cap as &i128)
        field_16: v15
        field_24: 1
    };
    v21 = alloc::boxed::Box<T>::new(&v16) as u64;
    return v21;
}
