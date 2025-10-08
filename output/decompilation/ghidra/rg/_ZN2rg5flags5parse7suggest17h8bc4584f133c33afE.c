void _ZN2rg5flags5parse7suggest17h8bc4584f133c33afE(undefined8 *param_1)

{
  undefined8 extraout_RDX;
  undefined4 *local_a0;
  code *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN2rg5flags5parse18find_similar_names17hae5f1ed6e0368f47E(&local_70);
  if (local_60 != 0) {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h63de973468f81233E
              (&local_58,&local_70);
    _ZN4core4iter6traits8iterator8Iterator7collect17h3297feb4f9d7756dE(&local_a0,&local_58);
                    /* try { // try from 0035550c to 00355522 has its CatchHandler @ 00355601 */
    _ZN5alloc3str17join_generic_copy17h51bc700a0c907f5eE(&local_58,local_98,local_90,", ",2);
    local_78 = local_48;
    local_88 = (undefined4)local_58;
    uStack_84 = local_58._4_4_;
    uStack_80 = (undefined4)uStack_50;
    uStack_7c = uStack_50._4_4_;
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h86d7461d11433c9dE
              (&local_a0);
    local_a0 = &local_88;
    local_98 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_58 = &PTR_s_similar_flags_that_are_available_004eb640;
    uStack_50 = 1;
    local_38 = 0;
    local_40 = 1;
                    /* try { // try from 00355586 to 00355599 has its CatchHandler @ 003555ec */
    local_48 = &local_a0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_28,0,extraout_RDX,&local_58);
    param_1[2] = local_18;
    *(undefined4 *)param_1 = local_28;
    *(undefined4 *)((long)param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1c;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_88);
    return;
  }
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hc0c276afa06f1591E
            (local_70,local_68);
  return;
}