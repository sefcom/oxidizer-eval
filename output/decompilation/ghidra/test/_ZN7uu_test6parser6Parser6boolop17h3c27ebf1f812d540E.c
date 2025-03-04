void _ZN7uu_test6parser6Parser6boolop17h3c27ebf1f812d540E
               (int *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined8 local_20;
  
                    /* try { // try from 001af852 to 001af868 has its CatchHandler @ 001af920 */
  _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_30,"-a",2);
  uStack_40 = local_20;
  iStack_50 = local_30;
  iStack_4c = iStack_2c;
  iStack_48 = iStack_28;
  iStack_44 = iStack_24;
  local_58 = 2;
                    /* try { // try from 001af885 to 001af88f has its CatchHandler @ 001af913 */
  cVar1 = _ZN64__LT_uu_test__parser__Symbol_u20_as_u20_core__cmp__PartialEq_GT_2eq17h838c2774cc7a2a63E
                    (param_3,&local_58);
  if (cVar1 == '\0') {
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(&local_58);
    _ZN7uu_test6parser6Parser4expr17h14b244d6254724abE(&local_58,param_2);
  }
  else {
                    /* try { // try from 001af894 to 001af8bb has its CatchHandler @ 001af920 */
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(&local_58);
    _ZN7uu_test6parser6Parser4term17h385cc0ae73b5bef0E(&local_58,param_2);
  }
  if ((int)local_58 == 7) {
    local_38 = param_3[4];
    local_58 = *param_3;
    iStack_50 = *(int *)(param_3 + 1);
    iStack_4c = *(undefined4 *)((long)param_3 + 0xc);
    iStack_48 = *(int *)(param_3 + 2);
    iStack_44 = *(undefined4 *)((long)param_3 + 0x14);
    uStack_40 = param_3[3];
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_2,&local_58);
    param_1[0] = 7;
    param_1[1] = 0;
  }
  else {
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = (int)uStack_40;
    param_1[7] = uStack_40._4_4_;
    *param_1 = (int)local_58;
    param_1[1] = local_58._4_4_;
    param_1[2] = iStack_50;
    param_1[3] = iStack_4c;
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(param_3);
  }
  return;
}