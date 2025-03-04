undefined  [16] _ZN7uu_uniq15map_clap_errors17he2c06110a1bd6a68E(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
                    /* try { // try from 001bdd17 to 001bdd4f has its CatchHandler @ 001be01e */
  local_b0 = param_1;
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4b4c1285fbc3f360E
            (&local_a8,"--group is mutually exclusive with -c/-d/-D/-u\n",0x2f);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h177306e76d9aa6a7E
            (&local_58,&local_88);
                    /* try { // try from 001bdd53 to 001bdd91 has its CatchHandler @ 001be023 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4b4c1285fbc3f360E
            (&local_a8,
             "invalid argument \'badoption\' for \'--group\'\nValid arguments are:\n  - \'prepend\'\n  - \'append\'\n  - \'separate\'\n  - \'both\'\n"
             ,0x75);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h177306e76d9aa6a7E
            (&local_40,&local_88);
                    /* try { // try from 001bdd95 to 001bddd9 has its CatchHandler @ 001be028 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4b4c1285fbc3f360E
            (&local_a8,
             "invalid argument \'badoption\' for \'--all-repeated\'\nValid arguments are:\n  - \'none\'\n  - \'prepend\'\n  - \'separate\'\n"
             ,0x6f);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h177306e76d9aa6a7E
            (&local_70,&local_88);
  if (*(char *)(local_b0 + 0xd5) == '\0') {
                    /* try { // try from 001bde72 to 001bdefc has its CatchHandler @ 001be00f */
    lVar4 = _ZN12clap_builder5error14Error_LT_F_GT_3get17h3e58576e747d3ab4E(&local_b0,5);
    if ((((lVar4 == 0) ||
         (cVar2 = _ZN7uu_uniq15map_clap_errors28__u7b__u7b_closure_u7d__u7d_17hd3da8a85969e5e42E
                            (lVar4), cVar2 == '\0')) ||
        (lVar4 = _ZN12clap_builder5error14Error_LT_F_GT_3get17h3e58576e747d3ab4E(&local_b0,1),
        lVar4 == 0)) ||
       (cVar2 = _ZN7uu_uniq15map_clap_errors28__u7b__u7b_closure_u7d__u7d_17h896d76687ee462abE
                          (lVar4), cVar2 == '\0')) {
                    /* try { // try from 001bdf18 to 001bdf6b has its CatchHandler @ 001be00f */
      lVar4 = _ZN12clap_builder5error14Error_LT_F_GT_3get17h3e58576e747d3ab4E(&local_b0,5);
      if (((lVar4 == 0) ||
          (cVar2 = _ZN7uu_uniq15map_clap_errors28__u7b__u7b_closure_u7d__u7d_17h0ffee90582114660E
                             (lVar4), cVar2 == '\0')) ||
         ((lVar4 = _ZN12clap_builder5error14Error_LT_F_GT_3get17h3e58576e747d3ab4E(&local_b0,1),
          lVar4 == 0 ||
          (cVar2 = _ZN7uu_uniq15map_clap_errors28__u7b__u7b_closure_u7d__u7d_17he517f75479310f2dE
                             (lVar4), cVar2 == '\0')))) goto LAB_001bdfa4;
      local_90 = 1;
      local_a8 = local_70;
      uStack_a4 = uStack_6c;
      uStack_a0 = uStack_68;
      uStack_9c = uStack_64;
      local_98 = local_60;
                    /* try { // try from 001bdf8c to 001bdf95 has its CatchHandler @ 001be004 */
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6692c4bb39238cc6E(&local_a8);
      bVar1 = false;
      goto LAB_001bde3a;
    }
    local_90 = 1;
    local_a8 = local_40;
    uStack_a4 = uStack_3c;
    uStack_a0 = uStack_38;
    uStack_9c = uStack_34;
    local_98 = local_30;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6692c4bb39238cc6E(&local_a8);
                    /* try { // try from 001bdf06 to 001bdf12 has its CatchHandler @ 001be028 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_70);
  }
  else {
    if (*(char *)(local_b0 + 0xd5) != '\b') {
LAB_001bdfa4:
                    /* try { // try from 001bdfaf to 001bdfb7 has its CatchHandler @ 001be00f */
      auVar5 = _ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE
                         (local_b0);
                    /* try { // try from 001bdfc4 to 001bdfd0 has its CatchHandler @ 001be028 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_70);
                    /* try { // try from 001bdfd7 to 001bdfe0 has its CatchHandler @ 001be023 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_40);
                    /* try { // try from 001bdfe4 to 001bdfed has its CatchHandler @ 001be01e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_58);
      return auVar5;
    }
    local_90 = 1;
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    local_98 = local_48;
                    /* try { // try from 001bde18 to 001bde24 has its CatchHandler @ 001be00f */
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6692c4bb39238cc6E(&local_a8);
    bVar1 = true;
                    /* try { // try from 001bde2d to 001bde39 has its CatchHandler @ 001be028 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_70);
LAB_001bde3a:
                    /* try { // try from 001bde3d to 001bde46 has its CatchHandler @ 001be023 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_40);
    if (bVar1) goto LAB_001bde59;
  }
                    /* try { // try from 001bde4f to 001bde58 has its CatchHandler @ 001be01e */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h344c10062ee0b054E(&local_58);
LAB_001bde59:
  _ZN4core3ptr47drop_in_place_LT_clap_builder__error__Error_GT_17hdafbdf8e9e6375cfE(local_b0);
  auVar5._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h54af9ef2bdedbe21E_002304c0
  ;
  auVar5._0_8_ = uVar3;
  return auVar5;
}