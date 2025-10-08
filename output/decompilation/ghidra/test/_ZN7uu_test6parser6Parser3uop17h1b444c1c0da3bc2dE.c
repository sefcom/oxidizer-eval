void _ZN7uu_test6parser6Parser3uop17h1b444c1c0da3bc2dE(undefined8 param_1,undefined8 param_2)

{
  int local_60 [10];
  undefined local_38 [40];
  
                    /* try { // try from 0015810d to 00158119 has its CatchHandler @ 001581a7 */
  _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_60,param_1);
  if (local_60[0] == 6) {
                    /* try { // try from 00158121 to 00158141 has its CatchHandler @ 00158192 */
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(local_38,param_2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
              (param_1,local_38,&PTR_s_src_uu_test_src_parser_rs_001e0278);
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_60);
    return;
  }
                    /* try { // try from 00158154 to 00158176 has its CatchHandler @ 00158190 */
  _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(local_38,local_60);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
            (param_1,local_38,&PTR_s_src_uu_test_src_parser_rs_001e0290);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
            (param_1,param_2,&PTR_s_src_uu_test_src_parser_rs_001e02a8);
  return;
}