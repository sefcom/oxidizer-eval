long long uu_tail::follow::files::FileHandling::from::h5724fde3926cc316(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v3;  // rdx
    char v4;  // al

    std::thread::local::LocalKey$LT$T$GT$::try_with::h177d26873406b9a9(&v0, core::ops::function::FnOnce::call_once::h2aa5214872dea2fa);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h6cfb6f035fd322cc(&a0->padding_8[16], a1->field_28, core::result::Result$LT$T$C$E$GT$::expect::hd618facf830007c4(&v0), v3);
    v4 = a1->field_4a;
    a0->field_0 = 0x8000000000000000;
    a0->field_48 = v4;
    a0->field_49 = 0;
    return a0;
}
