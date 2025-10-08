void _ZN2fd11build_regex17hafac25ebd3130afbE(undefined8 *param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_c0 [157];
  byte local_23;
  undefined local_21;
  
                    /* try { // try from 002fbebb to 002fbec5 has its CatchHandler @ 002fbf5f */
  (*(code *)PTR__ZN5regex8builders6string12RegexBuilder3new17hb301fc47af77126eE_00540a20)
            (local_c0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_23 = param_3 ^ 1;
  local_21 = 1;
                    /* try { // try from 002fbeda to 002fbf20 has its CatchHandler @ 002fbf4a */
  (*(code *)PTR__ZN5regex8builders5bytes12RegexBuilder5build17h23923507195ef952E_00540a28)
            (&local_f8,local_c0);
  if (CONCAT44(uStack_f4,local_f8) == 0) {
    local_c8 = uStack_e0;
    local_d8 = uStack_f0;
    uStack_d4 = uStack_ec;
    uStack_d0 = local_e8;
    uStack_cc = uStack_e4;
    uVar1 = _ZN2fd11build_regex28__u7b__u7b_closure_u7d__u7d_17h05e71917cf7509f8E(&local_d8);
    param_1[1] = uVar1;
    *param_1 = 0;
  }
  else {
    param_1[2] = CONCAT44(uStack_e4,local_e8);
    param_1[3] = uStack_e0;
    *(undefined4 *)param_1 = local_f8;
    *(undefined4 *)((long)param_1 + 4) = uStack_f4;
    *(undefined4 *)(param_1 + 1) = uStack_f0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_ec;
  }
                    /* try { // try from 002fbf2c to 002fbf35 has its CatchHandler @ 002fbf5f */
  _ZN4core3ptr57drop_in_place_LT_regex__builders__bytes__RegexBuilder_GT_17h884a6b40962375bbE
            (local_c0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(param_2);
  return;
}