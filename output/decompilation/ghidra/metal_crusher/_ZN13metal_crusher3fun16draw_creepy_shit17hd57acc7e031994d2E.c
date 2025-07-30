void _ZN13metal_crusher3fun16draw_creepy_shit17hd57acc7e031994d2E(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar7 = (*(code *)PTR_XOpenDisplay_006b4080)(0);
  uVar4 = (*(code *)PTR_XDefaultScreen_006b4088)(uVar7);
  local_40 = (*(code *)PTR__ZN4rand4rngs6thread3rng17hf0f1cc4222ade925E_006b4078)();
                    /* try { // try from 00486def to 00486e09 has its CatchHandler @ 0048705d */
  uVar5 = _ZN4rand3rng3Rng12random_range17h320b76a0c50e0e21E
                    (&local_40,10,800,&PTR_s_src_fun_rs_006965c8);
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h85086739cd9d0457E(&local_40);
  local_40 = (*(code *)PTR__ZN4rand4rngs6thread3rng17hf0f1cc4222ade925E_006b4078)();
                    /* try { // try from 00486e22 to 00486e3c has its CatchHandler @ 0048704e */
  uVar6 = _ZN4rand3rng3Rng12random_range17h320b76a0c50e0e21E
                    (&local_40,10,600,&PTR_s_src_fun_rs_006965e0);
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h85086739cd9d0457E(&local_40);
  local_40 = (*(code *)PTR__ZN4rand4rngs6thread3rng17hf0f1cc4222ade925E_006b4078)();
                    /* try { // try from 00486e55 to 00486e6f has its CatchHandler @ 0048703f */
  local_38 = _ZN4rand3rng3Rng12random_range17h314d1556f613f069E
                       (&local_40,0x32,800,&PTR_s_src_fun_rs_006965f8);
  local_34 = uVar6;
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h85086739cd9d0457E(&local_40);
  local_40 = (*(code *)PTR__ZN4rand4rngs6thread3rng17hf0f1cc4222ade925E_006b4078)();
                    /* try { // try from 00486e8e to 00486ea8 has its CatchHandler @ 00487030 */
  uVar6 = _ZN4rand3rng3Rng12random_range17h314d1556f613f069E
                    (&local_40,0x32,600,&PTR_s_src_fun_rs_00696610);
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h85086739cd9d0457E(&local_40);
  uVar1 = (*(code *)PTR_XRootWindow_006b4090)(uVar7,uVar4);
  uVar2 = (*(code *)PTR_XBlackPixel_006b4098)(uVar7,uVar4);
  uVar8 = (*(code *)PTR_XWhitePixel_006b40a0)(uVar7,uVar4);
  uVar8 = (*(code *)PTR_XCreateSimpleWindow_006b40a8)
                    (uVar7,uVar1,uVar5,local_34,local_38,uVar6,1,uVar2,uVar8);
  (*(code *)PTR_XMapWindow_006b40b0)(uVar7,uVar8);
  uVar1 = (*(code *)PTR_XCreateGC_006b40b8)(uVar7,uVar8,0,0);
  uVar2 = (*(code *)PTR_XBlackPixel_006b4098)(uVar7,uVar4);
  (*(code *)PTR_XSetForeground_006b40c0)(uVar7,uVar1,uVar2);
  puVar3 = PTR_XDrawArc_006b40c8;
  (*(code *)PTR_XDrawArc_006b40c8)(uVar7,uVar8,uVar1,100,100,200,200,0,0x5a00);
  (*(code *)puVar3)(uVar7,uVar8,uVar1,0x96,0x96,0x32,0x32,0,0x5a00);
  (*(code *)puVar3)(uVar7,uVar8,uVar1,0xfa,0x96,0x32,0x32,0,0x5a00);
  (*(code *)PTR_XDrawLine_006b40d0)(uVar7,uVar8,uVar1,200,200,200,300);
  (*(code *)PTR_XFlush_006b40d8)(uVar7);
  (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(5,0);
  (*(code *)PTR_XCloseDisplay_006b40e8)(uVar7);
  return;
}