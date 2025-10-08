
  fn uu_tail::follow::watch::Observer::from::h64caa446bdf8d8a2(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rbp: i8 = *arg2.byte_offset(0x48);
    let r15: i8 = *arg2.byte_offset(0x49);
    let r12: i8 = *arg2.byte_offset(0x4c);
    let mut var_80: ();
    uu_tail::follow::files::FileHandling::from::h58f12d80f1a14432(&var_80, *arg2.byte_offset(0x28), 
        *arg2.byte_offset(0x4a));
    uu_tail::follow::watch::Observer::new::he9a2450a7ecb5059(arg1, rbp, r12, r15, &var_80, 
        *arg2.byte_offset(0x44))
}
