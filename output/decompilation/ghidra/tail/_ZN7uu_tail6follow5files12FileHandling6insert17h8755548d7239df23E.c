void _ZN7uu_tail6follow5files12FileHandling6insert17h8755548d7239df23E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5)

{
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  
                    /* try { // try from 0020e616 to 0020e61f has its CatchHandler @ 0020e6f0 */
  _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17ha359b021a4419771E(&local_210);
  if (param_5 != '\0') {
                    /* try { // try from 0020e625 to 0020e636 has its CatchHandler @ 0020e6e1 */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0bc823050694df3dE
              (&local_f8,&local_210);
    local_1c8 = local_e8;
    local_1d8 = local_f8;
    uStack_1d4 = uStack_f4;
    uStack_1d0 = uStack_f0;
    uStack_1cc = uStack_ec;
                    /* try { // try from 0020e651 to 0020e658 has its CatchHandler @ 0020e6ca */
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h63b24af75b14f95fE
              (param_1);
    param_1[2] = local_1c8;
    *param_1 = CONCAT44(uStack_1d4,local_1d8);
    param_1[1] = CONCAT44(uStack_1cc,uStack_1d0);
  }
  local_1e8 = local_200;
  local_1f8 = local_210;
  uStack_1f4 = uStack_20c;
  uStack_1f0 = uStack_208;
  uStack_1ec = uStack_204;
  (*(code *)PTR_memcpy_002c2760)(&local_f8,param_4,0xd8);
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hf8cb82a3ae54ea43E
            (&local_1d8,param_1 + 3,&local_1f8,&local_f8);
  _ZN4core3ptr81drop_in_place_LT_core__option__Option_LT_uu_tail__follow__files__PathData_GT__GT_17h8a61832e18145f83E
            (&local_1d8);
  return;
}