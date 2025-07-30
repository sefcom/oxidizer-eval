
  int64_t metal_crusher::fun::execute_shell::h41804e4a8d918ef1(int64_t arg1)

{
    void var_e8;
    std::process::Command::new::h6d3aaa833949df8f(&var_e8, "sh-c/usr/bin/kgxghosttykonsoleal…");
    void var_108;
    std::process::Command::spawn::h1d40ae7470d68ce1(&var_108, 
        std::process::Command::arg::haecf4a6cb2423ef4(
            std::process::Command::arg::haecf4a6cb2423ef4(&var_e8, 
                "-c/usr/bin/kgxghosttykonsolealac…"), 
            arg1));
    void var_124;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3cf09c7da6405573(&var_124, &var_108);
    core::ptr::drop_in_place$LT$std..process..Child$GT$::h338c26869b6bbf8e(&var_124);
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::hbedacef7695b2f24(&var_e8);
}
