void _ZN9alacritty6config4load17hc4f1210f544231b4E(undefined8 param_1,long param_2)

{
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined8 local_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined8 local_868;
  undefined local_860 [1056];
  int local_440 [264];
  
  _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
            (local_440,*(undefined8 *)(param_2 + 0x1b8),*(undefined8 *)(param_2 + 0x1c0));
  _ZN4core6option15Option_LT_T_GT_7or_else17h0b1f5b4de00d6415E(local_860,local_440);
  _ZN4core6option15Option_LT_T_GT_7or_else17h4ae75538c15e033bE(&local_890,local_860);
  if (CONCAT44(uStack_88c,local_890) == -0x8000000000000000) {
    local_868 = local_880;
    local_878 = local_890;
    uStack_874 = uStack_88c;
    uStack_870 = uStack_888;
    uStack_86c = uStack_884;
  }
  else {
                    /* try { // try from 005426b7 to 005426c3 has its CatchHandler @ 00542744 */
    _ZN9alacritty6config4load28__u7b__u7b_closure_u7d__u7d_17ha635c51bd6a67dc1E
              (local_440,CONCAT44(uStack_884,uStack_888),local_880);
    local_868 = local_880;
    local_878 = local_890;
    uStack_874 = uStack_88c;
    uStack_870 = uStack_888;
    uStack_86c = uStack_884;
    if (local_440[0] != 6) {
      (*(code *)PTR_memcpy_009de0b0)(local_860,local_440,0x420);
      _ZN4core3ptr73drop_in_place_LT_alacritty__config__load___u7b__u7b_closure_u7d__u7d__GT_17hd5229858aa66467dE
                (&local_890);
      goto LAB_00542715;
    }
  }
  _ZN9alacritty6config4load28__u7b__u7b_closure_u7d__u7d_17h658c9e9e484f06cdE(local_860,&local_878);
LAB_00542715:
                    /* try { // try from 00542715 to 00542721 has its CatchHandler @ 00542759 */
  _ZN9alacritty6config13after_loading17h997230e48c68b3cdE(local_860,param_2);
  (*(code *)PTR_memcpy_009de0b0)(param_1,local_860,0x420);
  return;
}