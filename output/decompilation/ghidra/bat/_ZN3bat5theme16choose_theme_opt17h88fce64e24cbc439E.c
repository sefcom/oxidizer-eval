void _ZN3bat5theme16choose_theme_opt17h88fce64e24cbc439E
               (undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  if (param_2 == '\x02') {
    _ZN4core3ptr78drop_in_place_LT_bat__theme__choose_theme_opt___u7b__u7b_closure_u7d__u7d__GT_17h2795e7945647c31eE
              (param_3);
  }
  else {
    _ZN3bat5theme12choose_theme17h83cf2693913a544fE(&local_30,param_3,param_2);
    local_48 = 0x8000000000000000;
    if (CONCAT44(uStack_2c,local_30) != -0x7fffffffffffffff) {
      local_58 = local_20;
      local_68 = CONCAT44(uStack_2c,local_30);
      uStack_60 = CONCAT44(uStack_24,uStack_28);
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
                (&local_48);
      goto LAB_005443d9;
    }
  }
  local_58 = local_38;
  local_68 = 0x8000000000000000;
  uStack_60 = local_40;
LAB_005443d9:
  param_1[2] = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_60;
  *(char *)(param_1 + 3) = param_2;
  return;
}