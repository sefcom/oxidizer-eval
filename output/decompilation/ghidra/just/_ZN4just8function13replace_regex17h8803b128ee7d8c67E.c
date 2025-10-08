undefined8 *
_ZN4just8function13replace_regex17h8803b128ee7d8c67E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_78 [16];
  undefined8 local_68;
  long local_58 [3];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h678b3567117d3be5E_00566b00)
            (local_58,param_5,param_6);
  if (local_58[0] == 0) {
    local_68 = local_40;
    _ZN4just8function13replace_regex28__u7b__u7b_closure_u7d__u7d_17hfbda715b9a178102E
              (&local_98,local_78);
    param_1[3] = local_88;
    param_1[1] = local_98;
    param_1[2] = uStack_90;
    *param_1 = 1;
  }
  else {
    local_68 = local_40;
                    /* try { // try from 0036bbda to 0036bbec has its CatchHandler @ 0036bc8e */
    _ZN5regex5regex6string5Regex8replacen17hee1cc50d8db99275E
              (&local_98,local_58,param_3,param_4,param_7,param_8);
                    /* try { // try from 0036bbf7 to 0036bc00 has its CatchHandler @ 0036bc81 */
    _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
              (&local_38,uStack_90,local_88);
    param_1[3] = local_28;
    *(undefined4 *)(param_1 + 1) = local_38;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
    *param_1 = 0;
    _ZN4core3ptr43drop_in_place_LT_just__request__Request_GT_17h16e954a6b6741939E(&local_98);
    _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h8a6235b02cb1e98dE(local_58);
  }
  return param_1;
}