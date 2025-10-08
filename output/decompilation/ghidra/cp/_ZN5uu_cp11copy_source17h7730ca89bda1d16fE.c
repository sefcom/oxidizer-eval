void _ZN5uu_cp11copy_source17h7730ca89bda1d16fE
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined param_7,long param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [32];
  
  cVar5 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(param_3,param_4);
  if (cVar5 == '\0') {
    uVar1 = *(uint *)(param_8 + 0x5c);
    _ZN5uu_cp19construct_dest_path17h35c9b894b22c07c1E
              (&local_e0,param_3,param_4,param_5,param_6,param_7,*(undefined *)(param_8 + 0x5a),
               uVar1);
    local_a8 = CONCAT44(uStack_d4,uStack_d8);
    uStack_a0 = CONCAT44(uStack_cc,uStack_d0);
    lVar3 = CONCAT44(uStack_c4,uStack_c8);
    if (CONCAT44(uStack_dc,local_e0) == -0x7ffffffffffffff4) {
      local_118 = uStack_d8;
      uStack_114 = uStack_d4;
      uStack_110 = uStack_d0;
      uStack_10c = uStack_cc;
      uVar2 = CONCAT44(uStack_cc,uStack_d0);
                    /* try { // try from 001a0f35 to 001a0f7c has its CatchHandler @ 001a1180 */
      local_98 = lVar3;
      _ZN5uu_cp9copy_file17h2d5f479453081e34E
                (&local_a8,param_2,param_3,param_4,uVar2,lVar3,param_8,param_9,param_10,param_11,1);
      if ((uVar1 & 1) != 0) {
                    /* try { // try from 001a0f8b to 001a0fa0 has its CatchHandler @ 001a117b */
        _ZN5uu_cp17aligned_ancestors17h2e8a6c5e1cc13323E(&local_e0,param_3,param_4,uVar2,lVar3);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h22eacf00db38bb5eE
                  (local_50,&local_e0);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h90db137ad036c527E
                  (&local_70,local_50);
        if (local_70 != 0) {
          do {
            uVar4 = local_58;
            uVar2 = local_60;
            _ZN6uucore8features2fs12canonicalize17h2a46952db6a00ca6E
                      (&local_f8,local_70,local_68,0,1);
            if (local_f8 == -0x8000000000000000) {
                    /* try { // try from 001a1000 to 001a1050 has its CatchHandler @ 001a11a4 */
              _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hd1372b83dff59979E
                        (&local_f8);
            }
            else {
                    /* try { // try from 001a1062 to 001a1074 has its CatchHandler @ 001a1195 */
              _ZN5uu_cp15copy_attributes17h279b81c598780b21E
                        (&local_e0,local_f0,local_e8,uVar2,uVar4,param_8 + 0x48);
              if (CONCAT44(uStack_dc,local_e0) != -0x7ffffffffffffff4) {
                param_1[6] = local_b0;
                *(undefined4 *)(param_1 + 4) = local_c0;
                *(undefined4 *)((long)param_1 + 0x24) = uStack_bc;
                *(undefined4 *)(param_1 + 5) = uStack_b8;
                *(undefined4 *)((long)param_1 + 0x2c) = uStack_b4;
                *(undefined4 *)(param_1 + 2) = uStack_d0;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_cc;
                *(undefined4 *)(param_1 + 3) = uStack_c8;
                *(undefined4 *)((long)param_1 + 0x1c) = uStack_c4;
                *(undefined4 *)param_1 = local_e0;
                *(undefined4 *)((long)param_1 + 4) = uStack_dc;
                *(undefined4 *)(param_1 + 1) = uStack_d8;
                *(undefined4 *)((long)param_1 + 0xc) = uStack_d4;
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_f8)
                ;
                _ZN4core3ptr109drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP__RF_std__path__Path_C__RF_std__path__Path_RP__GT__GT_17h0259dd8f81e67d9cE
                          (local_50);
                    /* try { // try from 001a116c to 001a1178 has its CatchHandler @ 001a1180 */
                _ZN4core3ptr72drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_cp__Error_GT__GT_17h38297071204f1ddeE
                          (&local_a8);
                goto LAB_001a110e;
              }
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_f8);
            }
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h90db137ad036c527E
                      (&local_70,local_50);
          } while (local_70 != 0);
        }
                    /* try { // try from 001a10cd to 001a116b has its CatchHandler @ 001a117b */
        _ZN4core3ptr109drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP__RF_std__path__Path_C__RF_std__path__Path_RP__GT__GT_17h0259dd8f81e67d9cE
                  (local_50);
      }
      param_1[6] = local_78;
      param_1[4] = local_88;
      param_1[5] = lStack_80;
      param_1[2] = local_98;
      param_1[3] = lStack_90;
      *(undefined4 *)param_1 = (undefined4)local_a8;
      *(undefined4 *)((long)param_1 + 4) = local_a8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_a0._4_4_;
LAB_001a110e:
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_118);
    }
    else {
      param_1[6] = local_b0;
      param_1[4] = CONCAT44(uStack_bc,local_c0);
      param_1[5] = CONCAT44(uStack_b4,uStack_b8);
      param_1[3] = lVar3;
      param_1[1] = local_a8;
      param_1[2] = uStack_a0;
      *param_1 = CONCAT44(uStack_dc,local_e0);
    }
  }
  else {
    _ZN5uu_cp7copydir14copy_directory17hafe385d40a44c739E
              (param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,param_11);
  }
  return;
}