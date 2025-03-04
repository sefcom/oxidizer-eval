void _ZN6uu_env14split_iterator13SplitIterator10state_root17ha7ad7ed6584dc219E
               (undefined8 *param_1,undefined8 param_2)

{
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  while( true ) {
    _ZN6uu_env14split_iterator13SplitIterator15state_delimiter17hcb2808b02d57ed1bE
              (&local_40,param_2);
    if (local_40 != 7) break;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_env__parse_error__ParseError_GT__GT_17ha3cb64f13c33686fE
              (&local_40);
  }
  if (local_40 == 6) {
    *(undefined4 *)param_1 = 8;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_env__parse_error__ParseError_GT__GT_17ha3cb64f13c33686fE
              (&local_40);
  }
  else {
    param_1[4] = local_20;
    param_1[2] = local_30;
    param_1[3] = uStack_28;
    *param_1 = CONCAT44(uStack_3c,local_40);
    param_1[1] = uStack_38;
  }
  return;
}