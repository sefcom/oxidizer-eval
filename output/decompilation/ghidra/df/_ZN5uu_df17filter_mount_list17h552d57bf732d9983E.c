void _ZN5uu_df17filter_mount_list17h552d57bf732d9983E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 *local_220;
  undefined local_218 [32];
  long local_1f8 [19];
  undefined local_160 [152];
  undefined local_c8 [152];
  
  local_238 = 0;
  uStack_230 = 8;
  local_228 = 0;
  local_220 = param_1;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h16be972b538517f1E
            (local_218);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h14b8b80e40a53bcbE
            (local_1f8,local_218);
  puVar1 = PTR_memcpy_00245ae0;
  if (local_1f8[0] != -0x8000000000000000) {
    do {
      (*(code *)puVar1)(local_160,local_1f8,0x98);
                    /* try { // try from 001c6a48 to 001c6a68 has its CatchHandler @ 001c6ab3 */
      cVar2 = _ZN5uu_df11is_included17h21d348ae8506351cE(local_160,param_3);
      if (cVar2 == '\0') {
LAB_001c6a20:
                    /* try { // try from 001c6a20 to 001c6a27 has its CatchHandler @ 001c6aae */
        _ZN4core3ptr55drop_in_place_LT_uucore__features__fsext__MountInfo_GT_17h9090e8568995f329E
                  (local_160);
      }
      else {
        cVar2 = _ZN5uu_df7is_best17h69ca5df66aadf4f9E(uStack_230,local_228,local_160);
        if (cVar2 == '\0') goto LAB_001c6a20;
        (*(code *)puVar1)(local_c8,local_160,0x98);
                    /* try { // try from 001c6a8c to 001c6a96 has its CatchHandler @ 001c6aac */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h46faf1ede3681934E(&local_238,local_c8);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h14b8b80e40a53bcbE
                (local_1f8,local_218);
    } while (local_1f8[0] != -0x8000000000000000);
  }
                    /* try { // try from 001c69ce to 001c69d7 has its CatchHandler @ 001c6aa7 */
  _ZN4core3ptr94drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uucore__features__fsext__MountInfo_GT__GT_17he45d9cf3c868e21dE
            (local_218);
  local_220[2] = local_228;
  *local_220 = local_238;
  local_220[1] = uStack_230;
  return;
}