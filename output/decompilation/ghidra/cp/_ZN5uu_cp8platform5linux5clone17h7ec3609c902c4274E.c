*/

undefined **
_ZN5uu_cp8platform5linux5clone17h7ec3609c902c4274E
          (undefined *param_1,undefined8 param_2,byte *param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int __fd;
  uint __fd_00;
  char cVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  long lVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *extraout_RDX;
  uint *puVar10;
  byte bVar12;
  undefined8 unaff_RBX;
  undefined8 uVar11;
  undefined8 unaff_RBP;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  byte *pbVar16;
  byte *unaff_R15;
  bool bVar17;
  undefined auVar18 [16];
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined in_stack_000000a8;
  long in_stack_000000b0;
  byte *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined *in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined in_stack_00000120;
  char in_stack_00000228;
  undefined *local_48;
  undefined8 local_40;
  byte *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined **local_20;
  
  pbVar16 = (byte *)(param_5 & 0xffffffff);
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  _ZN3std2fs4File4open17hcf22eb549d8d01fbE(&local_28,&local_48);
  pbVar8 = local_28;
  if ((int)local_28 == 1) {
    return local_20;
  }
  __fd = local_28._4_4_;
                    /* try { // try from 0019af70 to 0019af7e has its CatchHandler @ 0019b067 */
  _ZN3std2fs4File6create17h58d01e5b7dba4806E(&local_28,&local_38);
  if ((int)local_28 == 1) goto LAB_0019b03b;
  __fd_00 = local_28._4_4_;
  uVar13 = (ulong)local_28._4_4_;
  puVar14 = (undefined8 *)0x40049409;
  plVar15 = (long *)(ulong)local_28._4_4_;
  iVar3 = (*(code *)PTR_ioctl_00267b10)(plVar15,0x40049409,__fd);
  if (iVar3 == 0) {
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(__fd_00);
    local_20 = (undefined **)0x0;
    goto LAB_0019b03b;
  }
  param_5 = param_5 & 0xff;
  puVar9 = &switchD_0019afbb::switchdataD_001226c4;
  uVar4 = (ulong)(int)(&switchD_0019afbb::switchdataD_001226c4)[param_5];
  pbVar5 = (byte *)((long)&switchD_0019afbb::switchdataD_001226c4 + uVar4);
  bVar12 = (byte)pbVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_5) {
  case 0:
    puVar9 = (uint *)(*(code *)PTR___errno_location_002679c8)();
    ppuVar6 = (undefined **)((ulong)*puVar9 << 0x20 | 2);
    break;
  case 1:
    auVar18 = _ZN3std2fs4copy17h705af7a8cd89b11dE(local_48,local_40,local_38,local_30);
    ppuVar6 = (undefined **)0x0;
    if ((auVar18 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      ppuVar6 = auVar18._8_8_;
    }
    break;
  case 2:
                    /* try { // try from 0019afef to 0019b02a has its CatchHandler @ 0019b04e */
    ppuVar6 = (undefined **)
              _ZN5uu_cp8platform5linux11sparse_copy17h236dad6108a5e89bE
                        (local_48,local_40,local_38,local_30);
    break;
  case 3:
    ppuVar6 = (undefined **)
              _ZN5uu_cp8platform5linux24sparse_copy_without_hole17h2d9392879b3e0cb0E
                        (local_48,local_40,local_38,local_30);
    break;
  case 4:
                    /* WARNING: Could not emulate address calculation at 0x001a3401 */
                    /* WARNING: Treating indirect jump as call */
    pbVar8 = (byte *)(*(code *)((long)&UINT_001226d4 + (long)(int)(&UINT_001226d4)[(long)pbVar5]))()
    ;
    return (undefined **)pbVar8;
  case 5:
    unaff_R15 = local_28;
    if (pbVar5 != (byte *)0x0) {
LAB_001a36c1:
      *(undefined8 *)(unaff_R15 + 0x28) = param_7;
      *(undefined8 *)(unaff_R15 + 0x30) = param_8;
      *(undefined8 *)(unaff_R15 + 0x18) = unaff_RBP;
      *(undefined8 *)(unaff_R15 + 0x20) = unaff_retaddr;
      *(undefined8 *)(unaff_R15 + 8) = unaff_RBX;
      *(undefined8 *)(unaff_R15 + 0x10) = unaff_R14;
      *(byte **)unaff_R15 = pbVar5;
      return (undefined **)pbVar5;
    }
    goto LAB_001a3966;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffffff28);
    if (pbVar5 != pbVar16) goto LAB_001a36c1;
    goto LAB_001a3966;
  case 8:
switchD_0019afbb_caseD_8:
    *(byte **)unaff_R15 = pbVar16 + -0xb;
    *(byte **)(unaff_R15 + 8) = pbVar5;
    return (undefined **)pbVar5;
  case 9:
    *(char *)plVar15 = *(char *)plVar15 + -0x3c;
                    /* WARNING: Could not emulate address calculation at 0x001a3770 */
                    /* WARNING: Treating indirect jump as call */
    pbVar8 = (byte *)(*(code *)((long)&UINT_001226e8 + (long)(int)(&UINT_001226e8)[(long)pbVar5]))()
    ;
    return (undefined **)pbVar8;
  case 10:
    pbVar5 = (byte *)_ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E
                               (unaff_R15 + 8,&local_20);
    pbVar16 = pbVar16 + -9;
    goto LAB_001a396b;
  case 0xb:
    out((short)extraout_RDX,(int)pbVar5);
    lVar7 = _ZN3std2fs11remove_file17h19277b2d7a4f8643E();
    if (lVar7 != 0) {
      *(byte **)unaff_R15 = pbVar16 + -0xb;
      *(long *)(unaff_R15 + 8) = lVar7;
      pbVar8 = (byte *)_ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE
                                 (&stack0x00000108);
      return (undefined **)pbVar8;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&stack0x00000108);
    cVar2 = _ZN61__LT_uu_cp__OverwriteMode_u20_as_u20_core__cmp__PartialEq_GT_2eq17h7b31402d4d005f5eE
                      (*(undefined4 *)(uVar13 + 0x54),*(undefined *)(uVar13 + 0x55));
    if ((cVar2 != '\0') &&
       (pbVar5 = (byte *)_ZN3std2fs11remove_file17h19277b2d7a4f8643E(), pbVar5 != (byte *)0x0))
    goto switchD_0019afbb_caseD_8;
    if (((*(char *)(uVar13 + 0x59) == '\0') &&
        ((in_stack_00000228 == '\0' || (*(char *)(uVar13 + 0x58) != '\x01')))) ||
       (cVar2 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)
                          (local_38,local_30), cVar2 == '\0')) {
      uVar11 = local_40;
      lVar7 = _ZN3std2fs9hard_link17h192ee4d7eeae67adE(local_38,local_30);
    }
    else {
      _ZN6uucore8features2fs12canonicalize17h2a46952db6a00ca6E(&local_20,local_38,local_30,2,1);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h71961d5fd3e5dea1E(&stack0x000001b8,&local_20);
      uVar11 = local_40;
      lVar7 = _ZN3std2fs9hard_link17h54c195aab9fb1046E(&stack0x000001b8);
    }
    in_stack_000000b0 = lVar7;
                    /* try { // try from 001a381a to 001a391d has its CatchHandler @ 001a3d82 */
    _in_stack_00000098 =
         (*(code *)PTR__ZN6uucore8features2fs12get_filename17hf3decfe9888d2f9fE_00267c58)
                   (unaff_R13,uVar11);
    if (SUB168(_in_stack_00000098,0) == 0) {
      in_stack_000000a0 = 0x11;
      in_stack_00000098 = "invalid file name";
    }
    in_stack_00000090 = 0;
    in_stack_000000a8 = 1;
    _in_stack_00000110 =
         (*(code *)PTR__ZN6uucore8features2fs12get_filename17hf3decfe9888d2f9fE_00267c58)
                   (local_38,local_30);
    if (SUB168(_in_stack_00000110,0) == 0) {
      in_stack_00000118 = 0x11;
      in_stack_00000110 = "invalid file name";
    }
    in_stack_00000108 = 0;
    in_stack_00000120 = 1;
    in_stack_000000e8 = &stack0x00000090;
    in_stack_000000f0 =
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    in_stack_000000f8 = &stack0x00000108;
    in_stack_00000100 =
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_20 = &PTR_s_cannot_create_hard_link_not_repl_0025ec90;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&stack0x000000d0,&local_20);
    if (lVar7 == 0) {
      pbVar5 = (byte *)_ZN4core3ptr230drop_in_place_LT__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT__LP__RP__C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h92d6353b521410cdE
                                 (&stack0x000000d0);
    }
    else {
      pbVar5 = in_stack_000000d0;
      if (in_stack_000000d0 != pbVar16 + -0xc) {
        *(undefined8 *)(unaff_R15 + 0x10) = in_stack_000000d8;
        *(undefined8 *)(unaff_R15 + 0x18) = in_stack_000000e0;
        *(byte **)unaff_R15 = pbVar16 + -10;
        *(byte **)(unaff_R15 + 8) = in_stack_000000d0;
        *(long *)(unaff_R15 + 0x20) = lVar7;
        return (undefined **)in_stack_000000d0;
      }
    }
LAB_001a3966:
    unaff_R15[8] = 0;
LAB_001a396b:
    *(byte **)unaff_R15 = pbVar16;
    return (undefined **)pbVar5;
  case 0xc:
    *pbVar5 = *pbVar5 + bVar12;
    local_28[0] = 1;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0x80;
    *(uint **)(local_28 + 8) = &switchD_0019afbb::switchdataD_001226c4;
    return (undefined **)local_28;
  case 0xd:
    puVar9 = (uint *)(*plVar15 + 0x7fffffffffffffff);
    bVar17 = puVar9 < (uint *)0xb;
    puVar10 = (uint *)0x4;
    goto code_r0x001a59bd;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    return (undefined **)pbVar5;
  case 0x10:
    return (undefined **)pbVar5;
  case 0x11:
    bVar17 = CARRY1(*pbVar5,bVar12);
    *pbVar5 = *pbVar5 + bVar12;
    puVar10 = extraout_RDX;
code_r0x001a59bd:
    if (bVar17) {
      puVar10 = puVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x001a59d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar8 = (byte *)(*(code *)((long)&switchD_001a59d2::switchdataD_001226f8 +
                               (long)(int)(&switchD_001a59d2::switchdataD_001226f8)[(long)puVar10]))
                               (puVar14);
    return (undefined **)pbVar8;
  case 0x12:
    pbVar8 = (byte *)((long)&UINT_0012264c + uVar4 + 1);
    *pbVar8 = *pbVar8 | 0xc4;
    local_48 = &DAT_0025e2a8;
    pbVar8 = (byte *)(*(code *)
                       PTR__ZN4core3fmt9Formatter25debug_tuple_field2_finish17hf99640356ad4f2dcE_00267538
                     )();
    return (undefined **)pbVar8;
  case 0x13:
    bVar12 = (byte)((ulong)pbVar8 >> 0x28);
    return (undefined **)(byte *)(ulong)((int)pbVar5 + 0xc1a53 + (uint)CARRY1(bVar12,bVar12));
  case 0x14:
    goto LAB_001a5a58;
  case 0x15:
    *(int *)((long)pbVar5 * 2) =
         (*(int *)((long)pbVar5 * 2) + -0x1226c4) - (uint)(0xffffffffffedd93b < uVar4);
    return (undefined **)pbVar5;
  case 0x16:
LAB_001a5a58:
    pbVar8 = (byte *)(*(code *)
                       PTR__ZN4core3fmt9Formatter25debug_tuple_field1_finish17h559b0c97c466adbaE_00267528
                     )();
    return (undefined **)pbVar8;
  case 0x17:
    return (undefined **)pbVar5;
  case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    pbVar8 = (byte *)((long)&UINT_00122650 + uVar4 + 1);
    *pbVar8 = *pbVar8 | 0xc4;
    local_38 = &DAT_00120910;
    local_30 = 1;
    local_20 = (undefined **)0x1;
    goto LAB_001a5c8c;
  case 0x1a:
  case 0x1f:
    goto switchD_0019afbb_caseD_1a;
  default:
    local_38 = pbVar5;
    goto switchD_0019afbb_caseD_1a;
  case 0x1c:
    piVar1 = (int *)((long)&switchD_001a5bcc::switchdataD_00122724 + uVar4 + 3);
    *piVar1 = *piVar1 + -1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_5) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
    case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
    in((short)extraout_RDX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
    local_38 = &DAT_0025e700;
    local_30 = 2;
    local_20 = (undefined **)0x2;
LAB_001a5c8c:
    local_28 = &stack0xfffffffffffffff8;
    pbVar8 = (byte *)_ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E
                               (*puVar14,puVar14[1],&local_38);
    return (undefined **)pbVar8;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(__fd_00);
  local_20 = ppuVar6;
LAB_0019b03b:
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(__fd);
  return local_20;
switchD_0019afbb_caseD_1a:
  pbVar8 = (byte *)(*(code *)
                     PTR__ZN4core3fmt9Formatter25debug_tuple_field1_finish17h559b0c97c466adbaE_00267528
                   )();
  return (undefined **)pbVar8;
}