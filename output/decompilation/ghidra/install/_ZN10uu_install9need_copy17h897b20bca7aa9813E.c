void _ZN10uu_install9need_copy17h897b20bca7aa9813E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined **ppuVar9;
  uint local_e0 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_a8;
  int local_a4;
  int local_a0;
  long local_90;
  
  _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(local_e0);
  lVar4 = local_90;
  uVar3 = local_a8;
  if (local_e0[0] == 2) {
LAB_001699dc:
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
              (local_e0);
  }
  else {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
              (local_e0);
    _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(local_e0,param_4,param_5);
    if (local_e0[0] == 2) goto LAB_001699dc;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
              (local_e0);
    if (*(int *)(param_6 + 0x48) == 1) {
      uVar6 = *(uint *)(param_6 + 0x4c);
      uVar8 = uVar6 | uVar3;
    }
    else {
      uVar6 = 0x1ed;
      uVar8 = uVar3;
    }
    if ((((((uVar8 | local_a8) & 0xe00) == 0) && (uVar6 == (local_a8 & 0xfff))) &&
        ((local_a8 & 0xf000) == 0x8000 && (uVar3 & 0xf000) == 0x8000)) &&
       ((lVar4 == local_90 &&
        ((*(int *)(param_6 + 0x50) != 1 || (*(int *)(param_6 + 0x54) == local_a4)))))) {
      if ((*(byte *)(param_6 + 0x58) & 1) == 0) {
        iVar7 = (*(code *)PTR__ZN6uucore8features7process7geteuid17hd0ed7b4820ed9632E_00209c50)();
        if (local_a4 != iVar7) goto LAB_001699e6;
        iVar7 = (*(code *)PTR__ZN6uucore8features7process7getegid17h2ca565c9eb3bafb7E_00209c70)();
      }
      else {
        iVar7 = *(int *)(param_6 + 0x5c);
      }
      if (local_a0 == iVar7) {
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_002098c0)
                  (local_e0,param_2,param_3);
        uVar2 = local_d0;
        uVar1 = local_d8;
        if ((local_e0[0] & 1) != 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209b00)
                    (&PTR_s_src_uu_install_src_install_rs_00202598);
LAB_00169b63:
          ppuVar9 = &PTR_s_src_uu_install_src_install_rs_00202580;
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209b00)();
                    /* WARNING: Could not recover jumptable at 0x00169b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0011bcb8 + *(int *)(&DAT_0011bcb8 + (long)*ppuVar9 * 4)))();
          return;
        }
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_002098c0)
                  (local_e0,param_4,param_5);
        if (local_e0[0] == 1) goto LAB_00169b63;
        cVar5 = (*(code *)PTR__ZN9file_diff4diff17hc189182ac6271185E_00209c78)
                          (uVar1,uVar2,local_d8,local_d0);
        if (cVar5 != '\0') {
          *(undefined *)(param_1 + 1) = 0;
          goto LAB_001699ea;
        }
      }
    }
  }
LAB_001699e6:
  *(undefined *)(param_1 + 1) = 1;
LAB_001699ea:
  *param_1 = 0;
  return;
}