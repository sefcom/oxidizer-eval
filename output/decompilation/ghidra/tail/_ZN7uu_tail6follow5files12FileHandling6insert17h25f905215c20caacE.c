void _ZN7uu_tail6follow5files12FileHandling6insert17h25f905215c20caacE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5)

{
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  
                    /* try { // try from 001a24b6 to 001a24bf has its CatchHandler @ 001a2561 */
  _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17h83fd2d9f8818f482E(&local_110);
  if (param_5 != '\0') {
                    /* try { // try from 001a24cf to 001a24db has its CatchHandler @ 001a254f */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
              (&local_f8,CONCAT44(uStack_104,uStack_108),local_100);
    local_118 = local_e8;
    local_128 = local_f8;
    uStack_124 = uStack_f4;
    uStack_120 = uStack_f0;
    uStack_11c = uStack_ec;
    _ZN4core3ptr46drop_in_place_LT_uu_tail__paths__InputKind_GT_17h046d3096d1779570E
              (*param_1,param_1[1]);
    param_1[2] = local_118;
    *param_1 = CONCAT44(uStack_124,local_128);
    param_1[1] = CONCAT44(uStack_11c,uStack_120);
  }
  local_118 = local_100;
  local_128 = local_110;
  uStack_124 = uStack_10c;
  uStack_120 = uStack_108;
  uStack_11c = uStack_104;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h055dcda36e45ab40E
            (&local_f8,param_1 + 3,&local_128,param_4);
  _ZN4core3ptr81drop_in_place_LT_core__option__Option_LT_uu_tail__follow__files__PathData_GT__GT_17hcac2d62e1c31956cE
            (&local_f8);
  return;
}