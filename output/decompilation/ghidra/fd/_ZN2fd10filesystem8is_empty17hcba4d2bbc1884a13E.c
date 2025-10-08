byte _ZN2fd10filesystem8is_empty17hcba4d2bbc1884a13E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auVar2 [12];
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  char local_40;
  byte local_38 [48];
  
  auVar2 = _ZN2fd9dir_entry8DirEntry9file_type17ha8777f9a24494ad2E();
  if (((auVar2 & (undefined  [12])0x1) == (undefined  [12])0x0) ||
     ((auVar2._8_4_ & 0xf000) != 0x4000)) {
    local_38[0] = 0;
  }
  else {
    uVar1 = _ZN2fd9dir_entry8DirEntry4path17h16a39562ed47efc5E(param_1);
    _ZN3std2fs8read_dir17h4d9a39b7b36fa6e5E(&local_58,uVar1);
    if (local_50 == '\x02') {
      local_38[0] = 0;
    }
    else {
      local_48 = local_58;
      local_40 = local_50;
                    /* try { // try from 002f42c7 to 002f42e5 has its CatchHandler @ 002f4309 */
      (*(code *)
        PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_00540920
      )(local_38,&local_48);
      _ZN4core3ptr118drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_std__fs__DirEntry_C_std__io__error__Error_GT__GT__GT_17hb27b2ff8eaf369e6E
                (local_38);
                    /* try { // try from 002f42e6 to 002f42ef has its CatchHandler @ 002f4304 */
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hc5eb81f12024322aE(&local_48);
      local_38[0] = local_38[0] ^ 1;
      if (local_50 != '\x02') goto LAB_002f42af;
    }
    _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17h6ed12e0fc0b7c6adE
              (&local_58);
  }
LAB_002f42af:
  return local_38[0] & 1;
}