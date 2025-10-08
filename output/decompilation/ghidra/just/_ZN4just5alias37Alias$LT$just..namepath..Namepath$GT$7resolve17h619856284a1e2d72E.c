void _ZN4just5alias37Alias_LT_just__namepath__Namepath_GT_7resolve17h619856284a1e2d72E
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  
                    /* try { // try from 003536a3 to 00353746 has its CatchHandler @ 00353749 */
  uVar18 = _ZN4just8namepath8Namepath4last17hd204dfab89d26ff3E
                     (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  auVar19 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(uVar18);
  auVar20 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_3 + 0xa0);
  cVar17 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                     (auVar19._0_8_,auVar19._8_8_,auVar20._0_8_,auVar20._8_8_);
  if (cVar17 != '\0') {
    param_1[2] = *(undefined8 *)(param_2 + 0x70);
    uVar18 = *(undefined8 *)(param_2 + 0x68);
    *param_1 = *(undefined8 *)(param_2 + 0x60);
    param_1[1] = uVar18;
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    uVar7 = *(undefined4 *)(param_2 + 0x30);
    uVar8 = *(undefined4 *)(param_2 + 0x34);
    uVar9 = *(undefined4 *)(param_2 + 0x38);
    uVar10 = *(undefined4 *)(param_2 + 0x3c);
    uVar11 = *(undefined4 *)(param_2 + 0x40);
    uVar12 = *(undefined4 *)(param_2 + 0x44);
    uVar13 = *(undefined4 *)(param_2 + 0x48);
    uVar14 = *(undefined4 *)(param_2 + 0x4c);
    uVar15 = *(undefined4 *)(param_2 + 0x50);
    uVar16 = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((long)param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 5) = uVar3;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar4;
    *(undefined4 *)(param_1 + 6) = uVar5;
    *(undefined4 *)((long)param_1 + 0x34) = uVar6;
    *(undefined4 *)(param_1 + 7) = uVar7;
    *(undefined4 *)((long)param_1 + 0x3c) = uVar8;
    *(undefined4 *)(param_1 + 8) = uVar9;
    *(undefined4 *)((long)param_1 + 0x44) = uVar10;
    *(undefined4 *)(param_1 + 9) = uVar11;
    *(undefined4 *)((long)param_1 + 0x4c) = uVar12;
    *(undefined4 *)(param_1 + 10) = uVar13;
    *(undefined4 *)((long)param_1 + 0x54) = uVar14;
    *(undefined4 *)(param_1 + 0xb) = uVar15;
    *(undefined4 *)((long)param_1 + 0x5c) = uVar16;
    param_1[0xc] = *(undefined8 *)(param_2 + 0x58);
    param_1[3] = param_3;
    _ZN4core3ptr45drop_in_place_LT_just__namepath__Namepath_GT_17h15a9b2a7c35752fbE(param_2);
    return;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_005661f8)
            (&DAT_0016e462,0x3e,&PTR_DAT_0052d9a8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}