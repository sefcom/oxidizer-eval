
  fn turbo_trace::main::h9e56cea794bb9d42(arg1: *mut i128) -> *mut i128

{
    let var_604: i8 = 0;
    let mut var_770: ();
    tokio::runtime::builder::Builder::new_multi_thread::hfb47d78496e1f0d5(&var_770);
    let var_6a3: i16 = 0x101;
    let mut rbp: i64;
    rbp = 1;
    let mut var_7c0: ();
    tokio::runtime::builder::Builder::build::h4b2efeb05b0b1f81(&var_7c0, &var_770);
    let mut var_810: ();
    core::result::Result$LT$T$C$E$GT$::expect::h9fa667908a8f15f4(&var_810, &var_7c0);
    let mut var_698: ();
    tokio::runtime::runtime::Runtime::block_on::h8c5081d95f3b77bd(arg1, &var_810, &var_698);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h63e0813ff91a39c3(&var_810);
    core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::he57182b7c51a3cd3(&var_770);
    arg1
}
