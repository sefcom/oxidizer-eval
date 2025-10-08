void _ZN2rg5flags8complete3zsh8generate17h88f53c6def813290E(undefined8 param_1)

{
  undefined auVar1 [16];
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
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  (*(code *)PTR__ZN12grep_printer9hyperlink17hyperlink_aliases17h6e6a9a2f559641afE_00527050)
            (&local_28);
                    /* try { // try from 00343de3 to 00343def has its CatchHandler @ 00343f03 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h215381e0edf4cfdeE
            (local_40,local_20,local_18 * 0x38 + local_20);
                    /* try { // try from 00343dfa to 00343e10 has its CatchHandler @ 00343ef4 */
  _ZN5alloc3str17join_generic_copy17h51bc700a0c907f5eE(&local_70,local_38,local_30,"\n",1);
  local_48 = local_60;
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h86d7461d11433c9dE
            (local_40);
  _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_regex_syntax__ast__FlagsItem_GT__GT_17hc1c1149e8a605025E
            (local_28,local_20);
  auVar1 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h6abe8100f4b9b9b1E
                     (&DAT_00169512,0x5ad);
                    /* try { // try from 00343e4d to 00343e76 has its CatchHandler @ 00343edf */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (&local_70,&DAT_0016a68a,0x77b2,"!ENCODINGS!",0xb,auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 00343e8b to 00343ea3 has its CatchHandler @ 00343ec0 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (param_1,CONCAT44(uStack_64,uStack_68),local_60,"!HYPERLINK_ALIASES!:\"",0x13,
             CONCAT44(uStack_4c,uStack_50),local_48);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_70);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_58);
  return;
}