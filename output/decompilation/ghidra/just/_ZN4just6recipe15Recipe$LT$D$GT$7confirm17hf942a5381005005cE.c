void _ZN4just6recipe15Recipe_LT_D_GT_7confirm17hf942a5381005005cE(undefined2 *param_1,long param_2)

{
  long **pplVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long *local_60;
  code *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  long **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_60 = (long *)_ZN4just13attribute_set12AttributeSet3get17h29ad4fd4e40977f3E(param_2 + 0xd8,0)
  ;
  if ((local_60 == (long *)0x0) || (*local_60 != -0x7fffffffffffffff)) {
    *param_1 = 0x138;
  }
  else {
    if (local_60[1] == -0x8000000000000000) {
      local_60 = (long *)(param_2 + 0x90);
      local_58 = (code *)
                 PTR__ZN55__LT_just__name__Name_u20_as_u20_core__fmt__Display_GT_3fmt17h235bf6517801ef05E_00565f20
      ;
      local_48 = &PTR_s_Run_recipe_____00530b50;
    }
    else {
      local_60 = local_60 + 1;
      local_58 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_48 = (undefined **)&DAT_0052ddb0;
    }
    local_40 = 2;
    local_28 = 0;
    local_38 = &local_60;
    local_30 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_48);
    local_60 = (long *)0x0;
    local_58 = (code *)0x1;
    local_50 = 0;
                    /* try { // try from 0038370b to 0038374f has its CatchHandler @ 003837b4 */
    local_48 = (undefined **)(*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00566c80)();
    auVar5 = (*(code *)PTR__ZN3std2io5stdio5Stdin9read_line17h4f274dfaf65c22afE_00566c88)
                       (&local_48,&local_60);
    if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hfd0add22eadc0a63E
                        (local_58,local_50);
      (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_00566bc8)
                (&local_48,uVar4);
      pplVar1 = local_38;
      uVar4 = local_40;
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                        (local_40,local_38,"y===> Running recipe `#### ] ",1);
      uVar3 = 1;
      if (cVar2 == '\0') {
        uVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                          (uVar4,pplVar1,&DAT_0016f82d,3);
      }
      *(undefined *)((long)param_1 + 1) = uVar3;
      *(undefined *)param_1 = 0x38;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_48);
    }
    else {
      *(undefined *)param_1 = 0x1a;
      *(long *)(param_1 + 4) = auVar5._8_8_;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_60);
  }
  return;
}