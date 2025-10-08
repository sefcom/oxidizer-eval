void _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_b8;
  undefined *local_b0;
  int local_a8 [10];
  int local_80 [10];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [40];
  
  _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_e8,param_3);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
            (param_2,&local_e8,&PTR_s_src_uu_test_src_parser_rs_001e02c0);
  _ZN7uu_test6parser6Parser4peek17h996512ad2aa27c9fE(local_a8,param_2);
  if (local_a8[0] == 4) {
                    /* try { // try from 0015820a to 0015821c has its CatchHandler @ 00158351 */
    _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_40,param_2);
                    /* try { // try from 0015821d to 00158229 has its CatchHandler @ 0015832f */
    _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_80,param_2);
    if (local_80[0] == 6) {
      local_b0 = 
      PTR__ZN62__LT_uu_test__parser__Symbol_u20_as_u20_core__fmt__Display_GT_3fmt17haa065207a04b22f2E_001e6220
      ;
      local_e8 = &DAT_00117330;
      local_e0 = 1;
      local_c8 = 0;
      local_d8 = &local_b8;
      local_d0 = 1;
                    /* try { // try from 00158276 to 00158285 has its CatchHandler @ 0015831e */
      local_b8 = local_40;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h1762a7ae3f8b5d38E(&local_58,&local_e8);
      param_1[3] = local_48;
      *(undefined4 *)(param_1 + 1) = local_58;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_54;
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_4c;
      *param_1 = 3;
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_80);
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_40);
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_a8);
      return;
    }
                    /* try { // try from 001582c8 to 001582e6 has its CatchHandler @ 0015832d */
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_e8,local_80);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
              (param_2,&local_e8,&PTR_s_src_uu_test_src_parser_rs_001e02d8);
                    /* try { // try from 001582e7 to 001582fd has its CatchHandler @ 0015831c */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
              (param_2,local_40,&PTR_s_src_uu_test_src_parser_rs_001e02f0);
  }
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_a8);
  *param_1 = 7;
  return;
}