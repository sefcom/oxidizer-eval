undefined4 _ZN11uu_readlink6uumain17h1f7246a934c2f1d9E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined local_90 [16];
  undefined **local_80;
  undefined8 local_78;
  undefined8 ***local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [16];
  undefined8 local_40;
  undefined8 ***local_38;
  code *local_30;
  undefined8 **local_28;
  code *pcStack_20;
  undefined8 local_18;
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_001ee770)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h5017337128d92fe8E(uVar2);
  local_90 = _ZN11uu_readlink6uumain6uumain17hb3ae6a048252b015E(param_1,param_2);
  if (local_90._0_8_ == 0) {
    return _ZN6uucore4mods5error9EXIT_CODE17hcdc285b475eac33eE_0;
  }
  local_28 = (undefined8 **)local_90;
  pcStack_20 = 
  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h78c568f43e64ee78E
  ;
  local_80 = (undefined **)&DAT_00117ae0;
  local_78 = 1;
  local_60 = 0;
  local_68 = 1;
                    /* try { // try from 00153d52 to 00153d63 has its CatchHandler @ 00153eec */
  local_70 = &local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h24b682d7d1cfe34bE(local_50,&local_80);
  local_18 = local_40;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf717ff2a7d976c39E
                    (local_50._8_8_,local_40,1,0);
  if (cVar1 == '\0') {
                    /* try { // try from 00153d94 to 00153eb3 has its CatchHandler @ 00153ef1 */
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee778)();
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfbaa8bb8670c7e4bE;
    local_80 = (undefined **)&DAT_001e71e8;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_38;
    local_68 = 1;
    local_38 = (undefined8 ***)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee780)(&local_80);
    local_50._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_80 = (undefined **)&DAT_001e7208;
    local_78 = 2;
    local_60 = 0;
    local_68 = 1;
    local_70 = (undefined8 ***)local_50;
    local_50._0_8_ = &local_28;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee780)(&local_80);
  }
  cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
  if (cVar1 != '\0') {
    local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_001ee788)();
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfbaa8bb8670c7e4bE;
    local_80 = &PTR_s_Try_____help__for_more_informati_001e7228;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_38;
    local_68 = 1;
    local_38 = (undefined8 ***)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee780)(&local_80);
  }
  uVar2 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h154e91830d53c2a5E(&local_28);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h94c0a97fe70479acE
            (local_90._0_8_,local_90._8_8_);
  return uVar2;
}