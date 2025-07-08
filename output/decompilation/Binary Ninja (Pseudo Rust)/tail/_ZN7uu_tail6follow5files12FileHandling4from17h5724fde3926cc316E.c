
  fn uu_tail::follow::files::FileHandling::from::h5724fde3926cc316(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let r15: i64 = *arg2.byte_offset(0x28);
    let mut var_38: ();
    std::thread::local::LocalKey$LT$T$GT$::try_with::h177d26873406b9a9(&var_38, 
        core::ops::function::FnOnce::call_once::h2aa5214872dea2fa);
    let mut rax: i64;
    let mut rdx: i64;
    rax = core::result::Result$LT$T$C$E$GT$::expect::hd618facf830007c4(&var_38);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h6cfb6f035fd322cc(&arg1[3], 
        r15, rax, rdx);
    let rax_1: i8 = *arg2.byte_offset(0x4a);
    *arg1 = -0x8000000000000000;
    arg1[9] = rax_1;
    *arg1.byte_offset(0x49) = 0;
    arg1
}
