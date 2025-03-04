void _ZN5uu_cp11copy_source17ha83fca4ba2cc8af7E
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined param_7,long param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined local_50 [32];
  
  cVar4 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_3,param_4);
  if (cVar4 == '\0') {
    uVar1 = *(undefined4 *)(param_8 + 0x44);
    _ZN5uu_cp19construct_dest_path17hfc66a1b24656cf26E
              (&local_d8,param_3,param_4,param_5,param_6,param_7,*(undefined *)(param_8 + 0x42),
               uVar1);
    local_98 = CONCAT44(uStack_cc,uStack_d0);
    uStack_90 = CONCAT44(uStack_c4,uStack_c8);
    local_128 = CONCAT44(uStack_bc,uStack_c0);
    if (CONCAT44(uStack_d4,local_d8) == 0xd) {
      local_138 = uStack_d0;
      uStack_134 = uStack_cc;
      uStack_130 = uStack_c8;
      uStack_12c = uStack_c4;
                    /* try { // try from 0020414a to 00204187 has its CatchHandler @ 002043d4 */
      local_88 = local_128;
      _ZN5uu_cp9copy_file17h3a721c0b700148baE
                (&local_98,param_2,param_3,param_4,CONCAT44(uStack_c4,uStack_c8),local_128,param_8,
                 param_9,param_10,param_11,1);
      if ((char)uVar1 != '\0') {
                    /* try { // try from 002041a2 to 002041b4 has its CatchHandler @ 002043d9 */
        _ZN5uu_cp17aligned_ancestors17h4cf131ef21f6aa74E
                  (&local_d8,param_3,param_4,CONCAT44(uStack_12c,uStack_130),local_128);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h6511090ed0ef25d3E
                  (local_50,&local_d8);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h109fcabe2eb45d25E
                  (&local_f8,local_50);
        if (local_f8 != 0) {
          do {
            uVar3 = local_e0;
            uVar2 = local_e8;
            _ZN6uucore8features2fs12canonicalize17hb17a5541a57984e7E
                      (&local_150,local_f8,local_f0,0,1);
            if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) {
LAB_00204210:
                    /* try { // try from 00204210 to 0020424f has its CatchHandler @ 0020440d */
              _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hc3882598e48cbc71E
                        (&local_150);
            }
            else {
              local_108 = local_140;
              local_118 = local_150;
              uStack_114 = uStack_14c;
              uStack_110 = uStack_148;
              uStack_10c = uStack_144;
                    /* try { // try from 0020427a to 00204290 has its CatchHandler @ 002043e3 */
              _ZN5uu_cp15copy_attributes17h0ca124c6c7245f78E
                        (&local_d8,CONCAT44(uStack_144,uStack_148),local_140,uVar2,uVar3,
                         param_8 + 0x30);
              if (local_d8 != 0xd) {
                *(undefined4 *)(param_1 + 6) = local_a8;
                *(undefined4 *)((long)param_1 + 0x34) = uStack_a4;
                *(undefined4 *)(param_1 + 7) = uStack_a0;
                *(undefined4 *)((long)param_1 + 0x3c) = uStack_9c;
                *(undefined4 *)(param_1 + 4) = local_b8;
                *(undefined4 *)((long)param_1 + 0x24) = uStack_b4;
                *(undefined4 *)(param_1 + 5) = uStack_b0;
                *(undefined4 *)((long)param_1 + 0x2c) = uStack_ac;
                *(undefined4 *)(param_1 + 2) = uStack_c8;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_c4;
                *(undefined4 *)(param_1 + 3) = uStack_c0;
                *(undefined4 *)((long)param_1 + 0x1c) = uStack_bc;
                *(int *)param_1 = local_d8;
                *(undefined4 *)((long)param_1 + 4) = uStack_d4;
                *(undefined4 *)(param_1 + 1) = uStack_d0;
                *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
                    /* try { // try from 00204389 to 00204392 has its CatchHandler @ 002043cf */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE
                          (&local_118);
                if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) {
                    /* try { // try from 002043a4 to 002043ad has its CatchHandler @ 002043cd */
                  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hc3882598e48cbc71E
                            (&local_150);
                }
                    /* try { // try from 002043ae to 002043ba has its CatchHandler @ 002043d9 */
                _ZN4core3ptr109drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP__RF_std__path__Path_C__RF_std__path__Path_RP__GT__GT_17h0c6e777e5bffd2a5E
                          (local_50);
                    /* try { // try from 002043bb to 002043c7 has its CatchHandler @ 002043d4 */
                _ZN4core3ptr72drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_cp__Error_GT__GT_17h24b7025726004fbdE
                          (&local_98);
                goto LAB_0020433a;
              }
                    /* try { // try from 0020429f to 002042a8 has its CatchHandler @ 002043de */
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_118);
              if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) goto LAB_00204210;
            }
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h109fcabe2eb45d25E
                      (&local_f8,local_50);
          } while (local_f8 != 0);
        }
                    /* try { // try from 002042fb to 00204307 has its CatchHandler @ 002043d9 */
        _ZN4core3ptr109drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP__RF_std__path__Path_C__RF_std__path__Path_RP__GT__GT_17h0c6e777e5bffd2a5E
                  (local_50);
      }
      param_1[6] = local_68;
      param_1[7] = lStack_60;
      param_1[4] = local_78;
      param_1[5] = lStack_70;
      param_1[2] = local_88;
      param_1[3] = lStack_80;
      *(undefined4 *)param_1 = (undefined4)local_98;
      *(undefined4 *)((long)param_1 + 4) = local_98._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_90._4_4_;
LAB_0020433a:
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_138);
    }
    else {
      param_1[6] = CONCAT44(uStack_a4,local_a8);
      param_1[7] = CONCAT44(uStack_9c,uStack_a0);
      param_1[4] = CONCAT44(uStack_b4,local_b8);
      param_1[5] = CONCAT44(uStack_ac,uStack_b0);
      param_1[3] = local_128;
      param_1[1] = local_98;
      param_1[2] = uStack_90;
      *param_1 = CONCAT44(uStack_d4,local_d8);
    }
  }
  else {
    _ZN5uu_cp7copydir14copy_directory17h28c1a7346111a6c9E
              (param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,param_11,1);
  }
  return;
}