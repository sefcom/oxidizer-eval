ulong _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4poll17h9f4121b39c66ee5aE(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *unaff_R12;
  char local_408;
  char local_407;
  undefined8 local_400;
  undefined local_3f8 [32];
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  long local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined local_260 [248];
  long local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined local_128 [248];
  
  _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4recv17h8dbfc300797ecbf6E(&local_408,param_1);
  if (local_408 == '\x01') {
    if (local_407 != '\0') {
      uVar4 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4stop17h953efcef9522a5daE(param_1);
      return uVar4;
    }
    uVar3 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_6stream17hd6ded5132bc549aeE(param_1);
    cVar2 = (char)uVar3;
joined_r0x002f7fb9:
    if (cVar2 != '\x06') {
      unaff_R12 = (undefined4 *)(ulong)uVar3;
      goto LAB_002f81a5;
    }
  }
  else {
    _ZN77__LT_fd__walk__Batch_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17ha3478b4a51e5ebd4E
              (local_3f8,local_400);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hedaba6ae2ed0cd7aE
              (&local_2a0,local_3f8);
    if (local_2a0 != 5) {
      do {
        if (local_2a0 != 4) {
          local_168 = local_2a0;
          local_130 = local_268;
          local_140 = local_278;
          uStack_13c = uStack_274;
          uStack_138 = uStack_270;
          uStack_134 = uStack_26c;
          local_150 = local_288;
          uStack_14c = uStack_284;
          uStack_148 = uStack_280;
          uStack_144 = uStack_27c;
          local_160 = local_298;
          uStack_15c = uStack_294;
          uStack_158 = uStack_290;
          uStack_154 = uStack_28c;
          (*(code *)PTR_memcpy_0053fd28)(local_128,local_260,0xf8);
          if (*(char *)(param_1[0xc] + 0x1e4) == '\0') {
            cVar2 = *(char *)(param_1 + 0x10);
            if (cVar2 == '\x01') {
                    /* try { // try from 002f80f1 to 002f80fb has its CatchHandler @ 002f81d8 */
              uVar3 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_5print17hd2dc40990132b5dbE
                                (param_1,&local_168);
              unaff_R12 = (undefined4 *)(ulong)uVar3;
              if ((char)uVar3 == '\x06') goto LAB_002f814c;
              goto LAB_002f818e;
            }
            unaff_R12 = &local_3d8;
            (*(code *)PTR_memcpy_0053fd28)(unaff_R12,&local_168,0x138);
                    /* try { // try from 002f8126 to 002f8144 has its CatchHandler @ 002f81ea */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h7dac86c0f96ef44dE(param_1 + 7,unaff_R12);
            if ((ulong)param_1[9] < 0x3e9) {
LAB_002f814c:
              lVar1 = param_1[0xf];
              param_1[0xf] = lVar1 + 1U;
              if (((*(byte *)(param_1[0xc] + 0x20) & 1) == 0) ||
                 (lVar1 + 1U < *(ulong *)(param_1[0xc] + 0x28))) {
                if (cVar2 != '\0') {
                    /* try { // try from 002f817e to 002f8185 has its CatchHandler @ 002f81fb */
                  _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E
                            (&local_168);
                }
                goto LAB_002f800a;
              }
                    /* try { // try from 002f81ba to 002f81c1 has its CatchHandler @ 002f81cc */
              uVar3 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4stop17h953efcef9522a5daE(param_1);
              unaff_R12 = (undefined4 *)(ulong)uVar3;
              if (cVar2 != '\0') goto LAB_002f818e;
            }
            else {
              uVar3 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_6stream17hd6ded5132bc549aeE(param_1);
              unaff_R12 = (undefined4 *)(ulong)uVar3;
              if ((char)uVar3 == '\x06') goto LAB_002f814c;
            }
          }
          else {
            unaff_R12 = (undefined4 *)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
LAB_002f818e:
                    /* try { // try from 002f818e to 002f819a has its CatchHandler @ 002f81d6 */
            _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E
                      (&local_168);
          }
          _ZN4core3ptr82drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_fd__walk__WorkerResult_GT__GT_17hcd63f5c23d93d0e6E
                    (local_3f8);
          goto LAB_002f81a5;
        }
        local_3a8 = local_268;
        local_3d8 = local_298;
        uStack_3d4 = uStack_294;
        uStack_3d0 = uStack_290;
        uStack_3cc = uStack_28c;
        local_3c8 = local_288;
        uStack_3c4 = uStack_284;
        uStack_3c0 = uStack_280;
        uStack_3bc = uStack_27c;
        local_3b8 = local_278;
        uStack_3b4 = uStack_274;
        uStack_3b0 = uStack_270;
        uStack_3ac = uStack_26c;
        if (*(char *)(param_1[0xc] + 0x1e6) != '\0') {
                    /* try { // try from 002f8060 to 002f8074 has its CatchHandler @ 002f81ec */
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h7dbe7d6fc55b9016E
                    (&local_168,&local_3d8);
          _ZN2fd5error11print_error17h653511955bf98e50E(&local_168);
        }
                    /* try { // try from 002f8000 to 002f8009 has its CatchHandler @ 002f81fb */
        _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_3d8);
LAB_002f800a:
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hedaba6ae2ed0cd7aE
                  (&local_2a0,local_3f8);
      } while (local_2a0 != 5);
    }
    _ZN4core3ptr82drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_fd__walk__WorkerResult_GT__GT_17hcd63f5c23d93d0e6E
              (local_3f8);
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (cVar2 = _ZN17crossbeam_channel7channel17Receiver_LT_T_GT_8is_empty17hc60a607ed2b18f6aE
                          (*param_1,param_1[1]), cVar2 != '\0')) {
      uVar3 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_5flush17h793374cb5c5836e2E(param_1);
      cVar2 = (char)uVar3;
      goto joined_r0x002f7fb9;
    }
  }
  unaff_R12 = (undefined4 *)CONCAT71((int7)((ulong)unaff_R12 >> 8),6);
LAB_002f81a5:
  return (ulong)unaff_R12 & 0xffffffff;
}