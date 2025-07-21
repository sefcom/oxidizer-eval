fn uu_cp::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x4b8]
    let v3: u128;  // [bp-0x4a8]
    let v4: u128;  // [bp-0x498]
    let v6: u128;  // [bp-0x488]
    let v21: struct56;  // [bp-0x3c8]
    let v22: u64;  // [bp-0x390]
    let v28: Result<struct56, struct16>;  // [bp-0x330]
    let v29: struct56;  // [bp-0x330]
    let v30: i64;  // [bp-0x328]
    let v31: u128;  // [bp-0x2f8]
    let v32: u128;  // [bp-0x2f8]
    let v34: Result<struct16, struct24>;  // [bp-0x2f8]
    let v36: u128;  // [bp-0x2e8]
    let v37: u128;  // [bp-0x2e0]
    let v38: u128;  // [bp-0x2d8]
    let v39: i8;  // [bp-0x2d0]
    let v40: u128;  // [bp-0x2c8]
    let v41: i8;  // [bp-0x2c0]
    let v44: i64;  // r14
    let v45: u32;  // eax
    let v46: u64;  // rax
    let v47: u128;  // xmm0
    let v48: u128;  // xmm1
    let v49: u128;  // xmm2
    let v53: u64;  // rbx

    uu_cp::uu_app(&v31);
    v28 = clap_builder::builder::command::Command::try_get_matches_from(&v31, a0, a1);
    match v28 {
        Err(_) => {
            v44 = v30;
            uu_cp::uu_app(&v31);
            v45 = *((v44 + 213) as &i8) as u8 as u32;
            match (v45) {
                12 => {
                    v46 = clap_builder::builder::command::Command::print_help(&v31);
                    if v46 {
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v46);
                    }
                }
                14 => {
                    clap_builder::builder::command::Command::render_version(&v22 as u8, &v31);
                    print!("{}", &v22 as u8);
                }
                _ => {
                    return alloc::boxed::Box<T>::new(v44);
                }
            }
            goto LABEL_0x4a6f2e;
        },
        Ok(v21) => {
            v32 as u256 = uu_cp::Options::from_matches(&v21);
            v0 = *((&v34 as &char + 8) as &i128) as u128;
            v3 = v37;
            v4 = *(&v39 as &i128) as u128;
            v6 = *(&v41 as &i128);
            if let Ok(_) = v32 as u256 {
                v47 = v0;
                v48 = v3;
                v49 = v4;
                v40 = v6;
                v38 = v49;
                v36 = v48;
                v31 = v47;
                v53 = alloc::boxed::Box<T>::new(&v32 as u256);
            }
            return v53;
        },
    }
}
