undefined8 _ZN5uu_wc20compute_number_width17h8118755960c57c57E(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_e0;
  undefined8 local_d8;
  uint local_a8;
  long local_90;
  
  if (*param_1 == 0) {
    iVar1 = _ZN5uu_wc8Settings14number_enabled17h3b82edec78a8e904E(param_2);
    uVar3 = 7;
    if (iVar1 == 1) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
    if ((int)*param_1 == 1) {
      iVar1 = _ZN5uu_wc8Settings14number_enabled17h3b82edec78a8e904E(param_2);
      lVar4 = param_1[3];
      if (((iVar1 != 1) || (lVar4 != 1)) && (lVar4 != 0)) {
        plVar5 = (long *)param_1[2];
        lVar4 = lVar4 * 0x18;
        uVar3 = 1;
        lVar6 = 0;
        do {
          while (*plVar5 == -0x7fffffffffffffff) {
            uVar3 = 7;
            plVar5 = plVar5 + 3;
            lVar4 = lVar4 + -0x18;
            if (lVar4 == 0) goto LAB_0016947e;
          }
          _ZN3std2fs8metadata17hbb43a01f12775689E(&local_e0,plVar5);
          if (local_e0 == 2) {
            lVar2 = 2;
          }
          else {
            lVar2 = local_90;
            if ((local_a8 & 0xf000) != 0x8000) {
              lVar2 = 0;
              uVar3 = 7;
            }
            lVar6 = lVar6 + lVar2;
            lVar2 = local_e0;
          }
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h92f497ce60e154e1E
                    (lVar2,local_d8);
          plVar5 = plVar5 + 3;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
LAB_0016947e:
        if (lVar6 != 0) {
          iVar1 = _ZN4core3num9int_log103u6417h30869b009e92f931E(lVar6);
          uVar3 = _ZN4core3cmp3Ord3max17hb785ffe4e6194aafE(iVar1 + 1,uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}