void _ZN3bat10controller10Controller17print_file_ranges17h7b39e9e16e4bf9c7E
               (char *param_1,long param_2,undefined8 param_3,code *param_4,code *param_5,
               undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 unaff_R13;
  char cVar11;
  bool bVar12;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b8;
  char cStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  code *local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined8 local_48;
  ulong uStack_40;
  code *local_38;
  
  local_e8 = 0;
  uStack_e0 = 1;
  local_d8 = 0;
  uVar10 = *(long *)(param_8 + 0x28) + 1;
  local_d0 = param_3;
  local_c8 = param_6;
  local_68 = param_5;
  local_38 = param_4;
                    /* try { // try from 0053832d to 00538345 has its CatchHandler @ 00538705 */
  local_58 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h2ab28548f23fa4abE
                       (uVar10,8,0x20,&PTR_s_src_controller_rs_007ce3a8);
  local_48 = 0;
  uStack_40 = 0;
                    /* try { // try from 00538368 to 00538370 has its CatchHandler @ 00538703 */
  bVar3 = (*(code *)PTR__ZN3bat5style15StyleComponents4snip17he74b3e7bba828b6eE_00808830)
                    (param_2 + 0xc0);
  bVar6 = 1;
  bVar9 = 0;
  uVar7 = 0;
  bVar12 = false;
  lVar8 = 1;
LAB_005383a0:
  do {
    if (!bVar12) {
                    /* try { // try from 005383b0 to 0053841a has its CatchHandler @ 00538730 */
      _ZN3bat5input11InputReader9read_line17h6988384c287f514eE(&local_b8,param_7,&local_e8);
      if (local_b8 != '\x01') {
        if (cStack_b7 == '\x01') {
          local_a8 = (undefined4)local_d8;
          uStack_a4 = (undefined4)((ulong)local_d8 >> 0x20);
          local_b8 = (char)local_e8;
          cStack_b7 = (char)((ulong)local_e8 >> 8);
          uStack_b6 = (undefined2)((ulong)local_e8 >> 0x10);
          uStack_b4 = local_e8._4_4_;
          uStack_b0 = (undefined4)uStack_e0;
          uStack_ac = uStack_e0._4_4_;
          local_e8 = 0;
          uStack_e0 = 1;
          local_d8 = 0;
          uStack_a0 = (undefined4)lVar8;
          uStack_9c = (undefined4)((ulong)lVar8 >> 0x20);
          _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h5f2bd84eb9945f81E
                    (local_58,&local_b8);
          lVar8 = lVar8 + 1;
          uVar7 = uStack_40;
          goto LAB_00538426;
        }
        bVar12 = true;
        if (uVar7 < uVar10) goto LAB_0053842b;
        break;
      }
      *param_1 = '\0';
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_ac,uStack_b0);
      goto LAB_0053868a;
    }
    if (uVar7 == 0) goto LAB_00538682;
LAB_00538426:
    if (uVar10 <= uVar7) break;
LAB_0053842b:
  } while (bVar12 == false);
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hb0761a58fb998fd1E
            (&local_b8,local_58);
  uVar7 = uStack_40;
  lVar1 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8)));
  uVar2 = CONCAT44(uStack_ac,uStack_b0);
  if (lVar1 != -0x8000000000000000) {
    local_60 = CONCAT44(uStack_a4,local_a8);
    local_c0 = CONCAT44(uStack_9c,uStack_a0);
    lVar5 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h3b0853890391e73fE
                      (local_58,uStack_40 - 1);
    if (lVar5 == 0) {
      cVar11 = '\x02';
    }
    else {
      unaff_R13 = *(undefined8 *)(lVar5 + 0x18);
      cVar11 = bVar12;
    }
    if (cVar11 == '\x02') {
      cVar11 = '\x01';
      unaff_R13 = local_c0;
    }
    cVar4 = _ZN3bat10line_range10LineRanges5check17h858adae3b81fddb3E
                      (param_8,local_c0,cVar11,unaff_R13);
    if (cVar4 == '\0') {
      if ((((bVar3 ^ 1) & 1) == 0 && bVar6 == 0) && bVar9 == 0) {
        (*local_38)(&local_b8,local_d0,local_c8);
        if (local_b8 != '\r') {
LAB_00538634:
          *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(param_1 + 0x48) = uStack_70;
          *(uint *)(param_1 + 0x31) = CONCAT13((undefined)uStack_84,local_88._1_3_);
          *(uint *)(param_1 + 0x35) = CONCAT13((undefined)uStack_80,uStack_84._1_3_);
          *(uint *)(param_1 + 0x39) = CONCAT13((undefined)uStack_7c,uStack_80._1_3_);
          *(uint *)(param_1 + 0x3d) = CONCAT13(local_78,uStack_7c._1_3_);
          *(uint *)(param_1 + 0x21) = CONCAT13((undefined)uStack_94,local_98._1_3_);
          *(uint *)(param_1 + 0x25) = CONCAT13((undefined)uStack_90,uStack_94._1_3_);
          *(uint *)(param_1 + 0x29) = CONCAT13((undefined)uStack_8c,uStack_90._1_3_);
          *(uint *)(param_1 + 0x2d) = CONCAT13((undefined)local_88,uStack_8c._1_3_);
          *(uint *)(param_1 + 0x11) = CONCAT13((undefined)uStack_a4,local_a8._1_3_);
          *(uint *)(param_1 + 0x15) = CONCAT13((undefined)uStack_a0,uStack_a4._1_3_);
          *(uint *)(param_1 + 0x19) = CONCAT13((undefined)uStack_9c,uStack_a0._1_3_);
          *(uint *)(param_1 + 0x1d) = CONCAT13((undefined)local_98,uStack_9c._1_3_);
          *(uint *)(param_1 + 1) = CONCAT13((undefined)uStack_b4,CONCAT21(uStack_b6,cStack_b7));
          *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_b0,uStack_b4._1_3_);
          *(uint *)(param_1 + 9) = CONCAT13((undefined)uStack_ac,uStack_b0._1_3_);
          *(uint *)(param_1 + 0xd) = CONCAT13((undefined)local_a8,uStack_ac._1_3_);
          *param_1 = local_b8;
LAB_005386f2:
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
                    (lVar1,uVar2);
LAB_0053868a:
          _ZN4core3ptr109drop_in_place_LT_alloc__collections__vec_deque__VecDeque_LT__LP_alloc__vec__Vec_LT_u8_GT__C_usize_RP__GT__GT_17h28d9f414cd84ecb1E
                    (local_58);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
                    (local_e8,uStack_e0);
          return;
        }
        bVar9 = 1;
        bVar6 = 0;
      }
      else {
        bVar9 = bVar9 | bVar3 & bVar6;
        bVar6 = bVar6 & (bVar3 ^ 1);
      }
      (*local_68)(&local_b8,local_d0,0,local_c8,local_c0,uVar2,local_60,cVar11,unaff_R13);
      if (local_b8 != '\r') goto LAB_00538634;
    }
    else {
      if (cVar4 != '\x01') {
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
                  (lVar1,uVar2);
        goto LAB_00538682;
      }
                    /* try { // try from 00538501 to 005385e8 has its CatchHandler @ 0053871c */
      (*local_68)(&local_b8,local_d0,1,local_c8,local_c0,uVar2,local_60,cVar11,unaff_R13);
      if (local_b8 != '\r') {
        *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(param_1 + 0x48) = uStack_70;
        *(undefined4 *)(param_1 + 0x30) = local_88;
        *(undefined4 *)(param_1 + 0x34) = uStack_84;
        *(undefined4 *)(param_1 + 0x38) = uStack_80;
        *(undefined4 *)(param_1 + 0x3c) = uStack_7c;
        *(undefined4 *)(param_1 + 0x20) = local_98;
        *(undefined4 *)(param_1 + 0x24) = uStack_94;
        *(undefined4 *)(param_1 + 0x28) = uStack_90;
        *(undefined4 *)(param_1 + 0x2c) = uStack_8c;
        *(undefined4 *)(param_1 + 0x10) = local_a8;
        *(undefined4 *)(param_1 + 0x14) = uStack_a4;
        *(undefined4 *)(param_1 + 0x18) = uStack_a0;
        *(undefined4 *)(param_1 + 0x1c) = uStack_9c;
        *(uint *)param_1 = CONCAT22(uStack_b6,CONCAT11(cStack_b7,local_b8));
        *(undefined4 *)(param_1 + 4) = uStack_b4;
        *(undefined4 *)(param_1 + 8) = uStack_b0;
        *(undefined4 *)(param_1 + 0xc) = uStack_ac;
        goto LAB_005386f2;
      }
      bVar9 = 0;
    }
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E(lVar1,uVar2);
    goto LAB_005383a0;
  }
  _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT__LP_alloc__vec__Vec_LT_u8_GT__C_usize_RP__GT__GT_17h26ce487b647d2482E
            (0x8000000000000000,uVar2);
LAB_00538682:
  *param_1 = '\r';
  goto LAB_0053868a;
}