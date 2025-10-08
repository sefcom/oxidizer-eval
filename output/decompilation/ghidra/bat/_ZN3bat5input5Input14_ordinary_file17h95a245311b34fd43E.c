ulong * _ZN3bat5input5Input14_ordinary_file17h95a245311b34fd43E
                  (ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  int local_c8;
  undefined4 uStack_c4;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00807948)
            (&local_e0);
                    /* try { // try from 005397b0 to 005397e0 has its CatchHandler @ 005398a3 */
  _ZN3std2fs8metadata17h4d9fc7ae25563c19E(&local_c8,param_2,param_3);
  bVar1 = local_c8 != 2;
  uStack_100 = local_78;
  if (!bVar1) {
    uStack_100 = uStack_c0;
    local_108 = 1;
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h405c8beab0de965bE
              (&local_108);
    uStack_100 = param_4;
  }
  local_108 = (ulong)bVar1;
  local_f8 = 0x8000000000000000;
                    /* try { // try from 0053980a to 00539818 has its CatchHandler @ 00539896 */
  _ZN3bat5input9InputKind11description17hc1a183838fcaf6dcE(&local_c8,&local_e0);
  param_1[4] = local_e8;
  param_1[2] = local_f8;
  param_1[3] = uStack_f0;
  *param_1 = local_108;
  param_1[1] = uStack_100;
  param_1[0x11] = local_e0;
  param_1[0x12] = uStack_d8;
  param_1[0x13] = local_d0;
  param_1[5] = CONCAT44(uStack_c4,local_c8);
  param_1[6] = uStack_c0;
  param_1[7] = local_b8;
  param_1[8] = uStack_b0;
  param_1[9] = local_a8;
  param_1[10] = uStack_a0;
  param_1[0xb] = local_98;
  param_1[0xc] = uStack_90;
  param_1[0xd] = local_88;
  param_1[0xe] = uStack_80;
  param_1[0xf] = local_78;
  param_1[0x10] = uStack_70;
  return param_1;
}