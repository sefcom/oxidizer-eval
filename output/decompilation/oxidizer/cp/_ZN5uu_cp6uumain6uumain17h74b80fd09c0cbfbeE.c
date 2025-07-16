fn uu_cp::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x4b8]
    let v2: u8;  // [bp-0x4a8]
    let v3: u128;  // [bp-0x498]
    let v5: u128;  // [bp-0x488]
    let v20: u256;  // [bp-0x3c8]
    let v21: u8;  // [bp-0x3a8]
    let v22: u64;  // [bp-0x398]
    let v23: u64;  // [bp-0x390]
    let v29: Result<struct56, struct16>;  // [bp-0x330]
    let v30: u256;  // [bp-0x330]
    let v31: i64;  // [bp-0x328]
    let v32: u64;  // [bp-0x300]
    let v33: u128;  // [bp-0x2f8]
    let v34: u128;  // [bp-0x2f8]
    let v36: Result<struct16, struct24>;  // [bp-0x2f8]
    let v38: u128;  // [bp-0x2e8]
    let v40: u128;  // [bp-0x2d8]
    let v41: i8;  // [bp-0x2d0]
    let v42: u128;  // [bp-0x2c8]
    let v43: u8;  // [bp-0x2c0]
    let v48: i64;  // r14
    let v49: u32;  // eax
    let v50: u64;  // rax
    let v51: u128;  // xmm0
    let v52: u128;  // xmm1
    let v53: u128;  // xmm2
    let v58: u64;  // rbx

    uu_cp::uu_app(&v33);
    v29 = clap_builder::builder::command::Command::try_get_matches_from(&v33, a0, a1);
    match v29 {
        Err(_) => {
            v48 = v31;
            uu_cp::uu_app(&v33);
            v49 = *((v48 + 213) as &i8) as u8 as u32;
            match (v49) {
                12 => {
                    v50 = clap_builder::builder::command::Command::print_help(&v33);
                    if v50 {
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
                    }
                }
                14 => {
                    clap_builder::builder::command::Command::render_version(&v23 as u8, &v33);
                    print!("{}", &v23 as u8);
                }
                _ => {
                    return alloc::boxed::Box<T>::new(v48);
                }
            }
            goto LABEL_0x4a6f2e;
        },
        Ok(_) => {
            v22 = v32;
            memcpy(&v21, &v29 as u128, 16);
            v20 = v30;
            v34 as u320 = uu_cp::Options::from_matches(&v20);
            v0 = *((&v36 as &char + 8) as &i128) as u128;
            memcpy(&v2, &v36 as u8, 16);
            v3 = *(&v41 as &i128) as u128;
            memcpy(&v5, &v43, 16);
            if let Ok(_) = v34 as u320 {
                v51 = v0;
                v52 = *(&v2 as &i128);
                v53 = v3;
                v42 = v5;
                v40 = v53;
                v38 = v52;
                v33 = v51;
                v58 = alloc::boxed::Box<T>::new(&v34 as u320);
            }
            return v58;
        },
    }
}
