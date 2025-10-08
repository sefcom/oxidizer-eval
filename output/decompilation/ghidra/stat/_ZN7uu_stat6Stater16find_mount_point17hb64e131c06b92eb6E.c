void _ZN7uu_stat6Stater16find_mount_point17hb64e131c06b92eb6E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar5 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h3692ed4e621a968bE
                    (param_3);
  _ZN3std2fs12canonicalize17h666f0a788dd30df7E(&local_48,uVar5);
  uVar2 = local_38;
  uVar5 = CONCAT44(uStack_44,local_48);
  uVar1 = CONCAT44(uStack_3c,uStack_40);
  if (*(long *)(param_2 + 0x48) == -0x8000000000000000) {
LAB_0017669b:
    *param_1 = 0x8000000000000000;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x58) * 0x18;
    lVar3 = *(long *)(param_2 + 0x50);
    do {
      lVar7 = lVar3;
      if (lVar6 == 0) goto LAB_0017669b;
                    /* try { // try from 00176655 to 00176662 has its CatchHandler @ 001766b9 */
      cVar4 = _ZN3std4path4Path11starts_with17h81555d14791e5ff7E(uVar1,uVar2,lVar7);
      lVar6 = lVar6 + -0x18;
      lVar3 = lVar7 + 0x18;
    } while (cVar4 == '\0');
                    /* try { // try from 00176673 to 0017667e has its CatchHandler @ 001766b7 */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002222d8
    )(&local_48,lVar7);
    param_1[2] = local_38;
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((long)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf5e02e6973b3fafaE(uVar5,uVar1);
  return;
}