
  fn uu_tail::follow::watch::Observer::from::h487da06aa235f7f0(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rbp: i8 = *arg2.byte_offset(0x48);
    let r15: i8 = *arg2.byte_offset(0x49);
    let r12: i8 = *arg2.byte_offset(0x4c);
    let mut var_80: ();
    uu_tail::follow::files::FileHandling::from::h5724fde3926cc316(&var_80, arg2);
    uu_tail::follow::watch::Observer::new::hcfc431782d32d23f(arg1, rbp, r12, r15, &var_80, 
        *arg2.byte_offset(0x44));
    arg1
}
