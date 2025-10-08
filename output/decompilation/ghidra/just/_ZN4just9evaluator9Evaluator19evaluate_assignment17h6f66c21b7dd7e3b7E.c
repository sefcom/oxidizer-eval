void _ZN4just9evaluator9Evaluator19evaluate_assignment17h6f66c21b7dd7e3b7E
               (char *param_1,long param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  undefined auVar3 [16];
  char local_c8;
  undefined7 uStack_c7;
  undefined uStack_c0;
  undefined7 uStack_bf;
  undefined uStack_b8;
  undefined7 uStack_b7;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined uStack_64;
  undefined uStack_63;
  undefined uStack_62;
  undefined uStack_61;
  
  auVar3 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                     ((undefined4 *)(param_3 + 0x80));
  cVar2 = _ZN4just5scope5Scope5bound17h642fef3bae8484e6E
                    (*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),auVar3._0_8_,
                     auVar3._8_8_);
  if (cVar2 == '\0') {
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E(&local_c8,param_2,param_3)
    ;
    if (local_c8 != '8') {
      *(ulong *)(param_1 + 0x60) =
           CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT15(uStack_63,CONCAT14(uStack_64,local_68))));
      *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_74,uStack_78);
      *(undefined8 *)(param_1 + 0x58) = local_70;
      *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_84,uStack_88);
      *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_7c,local_80);
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_94,uStack_98);
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_8c,local_90);
      *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_a4,uStack_a8);
      *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_9c,local_a0);
      *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_b7,uStack_b8);
      *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_ac,uStack_b0);
      *(ulong *)(param_1 + 1) = CONCAT17(uStack_c0,uStack_c7);
      *(ulong *)(param_1 + 9) = CONCAT17(uStack_b8,uStack_bf);
      *param_1 = local_c8;
      return;
    }
    uStack_b8 = (undefined)uStack_b0;
    uStack_b7 = (undefined7)(CONCAT44(uStack_ac,uStack_b0) >> 8);
    uStack_63 = *(undefined *)(param_3 + 0xcd);
    local_70 = *(undefined8 *)(param_3 + 0xc0);
    uStack_b0 = *(undefined4 *)(param_3 + 0x80);
    uStack_ac = *(undefined4 *)(param_3 + 0x84);
    uStack_a8 = *(undefined4 *)(param_3 + 0x88);
    uStack_a4 = *(undefined4 *)(param_3 + 0x8c);
    local_a0 = *(undefined4 *)(param_3 + 0x90);
    uStack_9c = *(undefined4 *)(param_3 + 0x94);
    uStack_98 = *(undefined4 *)(param_3 + 0x98);
    uStack_94 = *(undefined4 *)(param_3 + 0x9c);
    local_90 = *(undefined4 *)(param_3 + 0xa0);
    uStack_8c = *(undefined4 *)(param_3 + 0xa4);
    uStack_88 = *(undefined4 *)(param_3 + 0xa8);
    uStack_84 = *(undefined4 *)(param_3 + 0xac);
    local_80 = *(undefined4 *)(param_3 + 0xb0);
    uStack_7c = *(undefined4 *)(param_3 + 0xb4);
    uStack_78 = *(undefined4 *)(param_3 + 0xb8);
    uStack_74 = *(undefined4 *)(param_3 + 0xbc);
    uStack_62 = *(undefined *)(param_3 + 0xce);
    uStack_64 = 0;
    local_68 = 0;
    _ZN4just5scope5Scope4bind17h2017080dbe33bcdeE(param_2 + 0x28,&local_c8);
  }
  auVar3 = _ZN4just5scope5Scope5value17hb06d4bb986c3514eE(param_2 + 0x28,auVar3._0_8_,auVar3._8_8_);
  if (auVar3._0_8_ != 0) {
    *(undefined (*) [16])(param_1 + 8) = auVar3;
    *param_1 = '8';
    return;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_0052fb08);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}