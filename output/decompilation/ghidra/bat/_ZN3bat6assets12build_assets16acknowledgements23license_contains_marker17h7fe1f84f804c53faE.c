undefined4
_ZN3bat6assets12build_assets16acknowledgements23license_contains_marker17h7fe1f84f804c53faE
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long local_40;
  long local_38;
  undefined local_30 [24];
  
  _ZN3bat6assets12build_assets16acknowledgements22normalize_license_text17h78808add2c223c35E
            (local_30,param_1,param_2);
  local_38 = param_4 * 0x10 + param_3;
                    /* try { // try from 00533413 to 0053341f has its CatchHandler @ 00533438 */
  local_40 = param_3;
  uVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17he6484902e1783226E
                    (&local_40,local_30);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_30);
  return uVar1;
}