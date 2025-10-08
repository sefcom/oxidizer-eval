undefined8
_ZN10check_docs14parse_includes17h98cae0f800d53a09E(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
                    /* try { // try from 001ec58d to 001ec5d6 has its CatchHandler @ 001ec5ea */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17hc0aabeb8c92c5bf9E_002fea20)
            (&local_58,
             "^(\\S+):(\\d+):\\s*\\{\\{\\s*#include\\s*(\\S+?)\\s*(?::\\s*(\\S+)\\s*)?\\}\\}",0x40);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h35d8f95db58b79edE(&local_30,&local_58,&DAT_002d3468)
  ;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  uStack_44 = uStack_1c;
  uStack_40 = uStack_18;
  uStack_3c = uStack_14;
  _ZN10check_docs14parse_includes28__u7b__u7b_closure_u7d__u7d_17h03717f7f9650635dE
            (param_1,param_2,&local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfaeafffef128df0dE(param_2);
  return param_1;
}