fn uu_ls::dired::print_dired_output(a0: i64, a1: i64, a2: u64) -> long long {
    let v1: core::result::Result<(), std::io::error::Error>;  // rax

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
    match v1 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        },
        Ok(_) => {
            if *((a1 + 16) as &i64) {
                uu_ls::dired::print_positions("//DIRED//", *((a1 + 8) as &i64), *((a1 + 16) as &i64));
            }
            if *((a0 + 238) as &i8) {
                uu_ls::dired::print_positions("//SUBDIRED//", *((a1 + 32) as &i64), *((a1 + 40) as &i64));
            }
            println!("//DIRED-OPTIONS// --quoting-style={}", a0 + 252);
            return 0;
        },
    }
}
