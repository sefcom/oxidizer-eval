undefined4 _ZN2fd4walk23ReceiverBuffer_LT_W_GT_6stream17hd6ded5132bc549aeE(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  int local_2a0 [78];
  undefined local_168 [312];
  
  *(undefined *)(param_1 + 0x80) = 1;
  local_2a8 = *(undefined8 *)(param_1 + 0x48);
  local_2b8 = *(undefined4 *)(param_1 + 0x38);
  uStack_2b4 = *(undefined4 *)(param_1 + 0x3c);
  uStack_2b0 = *(undefined4 *)(param_1 + 0x40);
  uStack_2ac = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 8;
  *(undefined8 *)(param_1 + 0x48) = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h01c6c359f5e6c82cE
            (auStack_2d8,&local_2b8);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha36a627f26c73204E
            (local_2a0,auStack_2d8);
  puVar1 = PTR_memcpy_0053fd28;
  if (local_2a0[0] != 4) {
    do {
      (*(code *)puVar1)(local_168,local_2a0,0x138);
                    /* try { // try from 002f839e to 002f83a8 has its CatchHandler @ 002f840d */
      uVar2 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_5print17hd2dc40990132b5dbE(param_1,local_168);
      if ((char)uVar2 != '\x06') {
                    /* try { // try from 002f83dd to 002f83e9 has its CatchHandler @ 002f8406 */
        _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E(local_168);
        _ZN4core3ptr83drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_fd__dir_entry__DirEntry_GT__GT_17h8ba810fce92f87c7E
                  (auStack_2d8);
        return uVar2;
      }
                    /* try { // try from 002f83af to 002f83b6 has its CatchHandler @ 002f8408 */
      _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E(local_168);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha36a627f26c73204E
                (local_2a0,auStack_2d8);
    } while (local_2a0[0] != 4);
  }
  _ZN4core3ptr83drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_fd__dir_entry__DirEntry_GT__GT_17h8ba810fce92f87c7E
            (auStack_2d8);
  uVar2 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_5flush17h793374cb5c5836e2E(param_1);
  return uVar2;
}