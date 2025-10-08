
  int64_t uu_tail::follow::files::FileHandling::from::h58f12d80f1a14432(int64_t* arg1, int64_t arg2, char arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::h6b166cfebdfec3e4();
    int64_t result =
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h461bbd0340f714a5(
        &arg1[3], arg2, rax, rdx);
    *arg1 = -0x8000000000000000;
    arg1[9] = arg3;
    *(arg1 + 0x49) = 0;
    return result;
}
