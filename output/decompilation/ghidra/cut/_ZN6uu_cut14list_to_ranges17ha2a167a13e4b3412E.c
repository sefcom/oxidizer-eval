undefined8 *
_ZN6uu_cut14list_to_ranges17ha2a167a13e4b3412E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte local_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_4 == 0) {
    (*(code *)PTR__ZN6uucore8features6ranges5Range9from_list17h55160c8343b59905E_001ffea8)(param_1);
    return param_1;
  }
  (*(code *)PTR__ZN6uucore8features6ranges5Range9from_list17h55160c8343b59905E_001ffea8)(&local_28);
  if ((local_28 & 1) != 0) {
    param_1[2] = local_18;
    param_1[3] = uStack_10;
    *param_1 = CONCAT71(uStack_27,local_28);
    param_1[1] = uStack_20;
    return param_1;
  }
  _ZN6uu_cut14list_to_ranges28__u7b__u7b_closure_u7d__u7d_17h22ada85cd920fbe1E
            (param_1 + 1,&uStack_20);
  *param_1 = 0;
  return param_1;
}