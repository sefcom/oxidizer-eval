
  int64_t* uu_tail::follow::files::FileHandling::from::h5724fde3926cc316(int64_t* arg1, void* arg2)

{
    int64_t r15 = *(arg2 + 0x28);
    void var_38;
    std::thread::local::LocalKey$LT$T$GT$::try_with::h177d26873406b9a9(&var_38, 
        core::ops::function::FnOnce::call_once::h2aa5214872dea2fa);
    int64_t rax;
    int64_t rdx;
    rax = core::result::Result$LT$T$C$E$GT$::expect::hd618facf830007c4(&var_38);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h6cfb6f035fd322cc(&arg1[3], 
        r15, rax, rdx);
    char rax_1 = *(arg2 + 0x4a);
    *arg1 = -0x8000000000000000;
    arg1[9] = rax_1;
    *(arg1 + 0x49) = 0;
    return arg1;
}
