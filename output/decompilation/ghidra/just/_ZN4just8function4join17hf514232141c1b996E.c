undefined8 *
_ZN4just8function4join17hf514232141c1b996E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined local_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN6camino8Utf8Path4join17h5972e239d273391eE(local_50,param_3,param_4,param_5,param_6);
  if (param_8 != 0) {
    param_8 = param_8 * 0x18;
    do {
                    /* try { // try from 0036ae70 to 0036ae7a has its CatchHandler @ 0036aec8 */
      _ZN6camino11Utf8PathBuf4push17h66aa426c8960bee0E(local_50,param_7);
      param_7 = param_7 + 0x18;
      param_8 = param_8 + -0x18;
    } while (param_8 != 0);
  }
                    /* try { // try from 0036ae85 to 0036ae93 has its CatchHandler @ 0036aec6 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h8d6445813d8446cdE
            (&local_38,local_50);
  param_1[3] = local_28;
  *(undefined4 *)(param_1 + 1) = local_38;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
  *(undefined4 *)(param_1 + 2) = uStack_30;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
  *param_1 = 0;
  _ZN4core3ptr40drop_in_place_LT_camino__Utf8PathBuf_GT_17hdd3b2f225d24af37E(local_50);
  return param_1;
}