
  fn uu_tail::follow::files::FileHandling::from::h58f12d80f1a14432(arg1: *mut i64, arg2: i64, arg3: i8) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::h6b166cfebdfec3e4();
    let result: i64 =
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h461bbd0340f714a5(
        &arg1[3], arg2, rax, rdx);
    *arg1 = -0x8000000000000000;
    arg1[9] = arg3;
    *arg1.byte_offset(0x49) = 0;
    result
}
