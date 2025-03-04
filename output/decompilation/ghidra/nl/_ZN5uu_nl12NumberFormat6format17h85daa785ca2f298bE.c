/* WARNING: Type propagation algorithm not settling */

undefined8
_ZN5uu_nl12NumberFormat6format17h85daa785ca2f298bE
          (undefined8 param_1,char *param_2,long param_3,long param_4)

{
  long *local_a0;
  code *local_98;
  long local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  long **local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18;
  long local_10;
  
  if (*param_2 == '\0') {
    local_20 = 0x20;
    local_18 = 0;
  }
  else {
    if (*param_2 == '\x01') {
      local_20 = 0x20;
    }
    else {
      if (param_3 < 0) {
        local_10 = -param_3;
        local_90 = param_4 + -1;
        local_a0 = &local_10;
        local_20 = 0x30;
        local_18 = 1;
        local_80 = &PTR_s___003d9a98;
        goto LAB_002acdcc;
      }
      local_20 = 0x30;
    }
    local_18 = 1;
  }
  local_a0 = local_50;
  local_80 = (undefined **)&DAT_00161370;
  local_90 = param_4;
LAB_002acdcc:
  local_28 = 0;
  local_30 = 1;
  local_38 = 1;
  local_50[1] = 2;
  local_88 = 0;
  local_98 = 
  _ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_isize_GT_3fmt17he353d7b3f48ba6e6E
  ;
  local_78 = 1;
  local_60 = local_50 + 1;
  local_58 = 1;
  local_70 = &local_a0;
  local_68 = 2;
  local_50[0] = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h0a2f0cb8f97eeebdE(param_1,&local_80);
  return param_1;
}