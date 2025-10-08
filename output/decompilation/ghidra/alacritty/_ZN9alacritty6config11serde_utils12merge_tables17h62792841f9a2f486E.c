void _ZN9alacritty6config11serde_utils12merge_tables17h62792841f9a2f486E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined local_130 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_b8 [26];
  char local_9e;
  undefined local_98 [72];
  undefined local_50 [32];
  
  _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3660a1ff1c76042dE
            (local_98,param_3);
  do {
                    /* try { // try from 00536570 to 0053657f has its CatchHandler @ 00536660 */
    _ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h26fba69c3db90331E
              (local_130,local_98);
    local_e8 = local_108;
    uStack_e4 = uStack_104;
    uStack_e0 = uStack_100;
    uStack_dc = uStack_fc;
    local_f8 = local_118;
    uStack_f4 = uStack_114;
    uStack_f0 = uStack_110;
    uStack_ec = uStack_10c;
                    /* try { // try from 005365ac to 005365b6 has its CatchHandler @ 00536647 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17hef2b787fcb76ca87E
              (local_b8,param_2,local_128,local_120,param_5,param_6,param_1);
    if (local_9e == '\b') {
      local_d8 = local_118;
      uStack_d4 = uStack_114;
      uStack_d0 = uStack_110;
      uStack_cc = uStack_10c;
    }
    else {
                    /* try { // try from 005365e0 to 005365ed has its CatchHandler @ 00536642 */
      _ZN9alacritty6config11serde_utils5merge17h0b6a4a70fea81bc1E(&local_d8,local_b8,&local_118);
    }
                    /* try { // try from 005365ee to 00536606 has its CatchHandler @ 00536662 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hdc2767978468d877E
              (local_50,param_2,local_130,&local_d8);
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_toml__value__Value_GT__GT_17he5352179733f92bcE
              (local_50);
  } while( true );
}