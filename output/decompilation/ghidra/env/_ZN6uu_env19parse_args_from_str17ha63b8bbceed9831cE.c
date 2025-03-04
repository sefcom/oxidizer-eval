undefined8 * _ZN6uu_env19parse_args_from_str17ha63b8bbceed9831cE(undefined8 *param_1)

{
  undefined8 uVar1;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN6uu_env14split_iterator5split17h2ad0ba729ee8da1cE(&local_60);
  if (local_60 == 8) {
    param_1[2] = CONCAT44(uStack_44,uStack_48);
    *param_1 = CONCAT44(uStack_54,uStack_58);
    param_1[1] = CONCAT44(uStack_4c,uStack_50);
  }
  else {
    local_18 = local_40;
    local_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    uStack_1c = uStack_44;
    local_38 = local_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    uVar1 = _ZN6uu_env19parse_args_from_str28__u7b__u7b_closure_u7d__u7d_17h3c361bada9b8fd30E
                      (&local_38);
    param_1[1] = uVar1;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h03ce124f780b058aE_00248908
    ;
    *param_1 = 0x8000000000000000;
  }
  return param_1;
}