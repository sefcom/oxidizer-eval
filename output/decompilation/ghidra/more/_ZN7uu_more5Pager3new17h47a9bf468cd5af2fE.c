void _ZN7uu_more5Pager3new17h47a9bf468cd5af2fE
               (long *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined4 local_8c;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_38;
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hf77cf67876c263beE(&local_80);
  lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3b1064158fd98561E(&local_80);
  uStack_a0 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
  if (uStack_a0 == (undefined8 *)0x0) {
                    /* try { // try from 00172295 to 001722a4 has its CatchHandler @ 0017230b */
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_0022d2a0)(8,8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *uStack_a0 = 0;
  local_a8 = 1;
  local_98 = 1;
  local_80 = 0;
  local_78 = 1;
  lVar12 = param_4[2];
  local_8c = param_3;
  local_88 = param_1;
  local_38 = param_4;
  if (lVar12 == 0) {
    lVar12 = 0;
    puVar10 = (undefined8 *)0x0;
    while( true ) {
      local_70 = 0;
                    /* try { // try from 001720e9 to 0017210e has its CatchHandler @ 001722ce */
      auVar13 = _ZN3std2io16append_to_string17heca66a3d4abc446cE(&local_80,lVar6);
      lVar7 = auVar13._8_8_;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
      if (lVar7 == 0) {
        param_4 = &local_a8;
        lVar9 = 0;
        goto LAB_00172175;
      }
      lVar12 = lVar12 + lVar7;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h757588eaf91d0364E(&local_a8,lVar12);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    }
  }
  else {
    uVar2 = param_4[1];
    lVar9 = 0;
    lVar11 = 0;
    puVar10 = (undefined8 *)0x0;
    while( true ) {
      local_70 = 0;
                    /* try { // try from 00172059 to 00172088 has its CatchHandler @ 001722d0 */
      auVar13 = _ZN3std2io16append_to_string17heca66a3d4abc446cE(&local_80,lVar6);
      lVar7 = auVar13._8_8_;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
      if (lVar7 == 0) goto LAB_00172175;
      lVar11 = lVar11 + lVar7;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h757588eaf91d0364E(&local_a8,lVar11);
      if (lVar9 != 0) {
        goto LAB_00172140;
      }
                    /* try { // try from 0017209c to 001720a6 has its CatchHandler @ 001722ca */
      cVar5 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                        (uVar2,lVar12,local_78,local_70);
      if (cVar5 != '\0') {
        lVar9 = 1;
        param_4 = puVar10;
      }
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    }
  }
LAB_00172185:
                    /* try { // try from 00172185 to 0017218d has its CatchHandler @ 001722c8 */
  auVar13 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
            )(lVar7);
  *(undefined (*) [16])(local_88 + 1) = auVar13;
  *local_88 = 2;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h252ce3d2b34612c7E(local_80,local_78);
  _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u64_GT__GT_17h4c16795df9b5d41dE
            (local_a8,uStack_a0);
  _ZN4core3ptr145drop_in_place_LT_alloc__boxed__Box_LT_std__io__buffered__bufreader__BufReader_LT_std__io__cursor__Cursor_LT_alloc__string__String_GT__GT__GT__GT_17ha655b3afb2736741E
            (lVar6);
  return;
LAB_00172140:
  puVar10 = (undefined8 *)((long)puVar10 + 1);
  local_70 = 0;
                    /* try { // try from 00172149 to 0017216a has its CatchHandler @ 001722cc */
  auVar13 = _ZN3std2io16append_to_string17heca66a3d4abc446cE(&local_80,lVar6);
  lVar7 = auVar13._8_8_;
  if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00172185;
  if (lVar7 == 0) {
    lVar9 = 1;
LAB_00172175:
    lVar7 = _ZN3std2io4Seek6rewind17h94046bf5fb21e5d5E(lVar6);
    puVar4 = local_38;
    if (lVar7 == 0) {
      uVar8 = (short)local_8c - 1;
      if ((short)local_8c == 0) {
        uVar8 = 0;
      }
      lVar12 = local_38[3];
                    /* try { // try from 001721fd to 00172215 has its CatchHandler @ 001722a7 */
      auVar13 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h8d8ba4d4acd59853E
                          ((ulong)uVar8,8,0x18,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00224198);
      local_88[7] = local_98;
      *(undefined4 *)(local_88 + 5) = (undefined4)local_a8;
      *(undefined4 *)((long)local_88 + 0x2c) = local_a8._4_4_;
      *(undefined4 *)(local_88 + 6) = (undefined4)uStack_a0;
      *(undefined4 *)((long)local_88 + 0x34) = uStack_a0._4_4_;
      uVar1 = *(undefined2 *)((long)puVar4 + 0x26);
      *local_88 = lVar9;
      local_88[1] = (long)param_4;
      *(undefined (*) [16])(local_88 + 2) = auVar13;
      local_88[4] = 0;
      local_88[8] = lVar6;
      local_88[9] = (long)&
                          PTR__ZN4core3ptr120drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__cursor__Cursor_LT_alloc__string__String_GT__GT__GT_17h387e05fec80e4ad1E_002240e0
      ;
      local_88[10] = lVar12;
      local_88[0xb] = (ulong)uVar8;
      local_88[0xc] = 0;
      local_88[0xe] = (long)puVar10;
      local_88[0xf] = 0;
      *(undefined2 *)(local_88 + 0x10) = uVar1;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h252ce3d2b34612c7E
                (local_80,local_78);
      return;
    }
    goto LAB_00172185;
  }
  lVar11 = lVar11 + lVar7;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h757588eaf91d0364E(&local_a8,lVar11);
  goto LAB_00172140;
}