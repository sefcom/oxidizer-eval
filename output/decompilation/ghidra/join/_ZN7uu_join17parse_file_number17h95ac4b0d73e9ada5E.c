void _ZN7uu_join17parse_file_number17h95ac4b0d73e9ada5E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hab9f309aad09d5a2E
                    (param_2,param_3,"1",1);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hab9f309aad09d5a2E
                      (param_2,param_3,"2",1);
    if (cVar1 == '\0') {
      local_88 = 0;
      local_70 = 1;
      local_98 = &local_88;
      local_90 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_68 = &DAT_002354c0;
      local_60 = 1;
      local_48 = 0;
      local_50 = 1;
      local_80 = param_2;
      local_78 = param_3;
      local_58 = (undefined *)&local_98;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h84da32fb4d9c85b4E(local_38,&local_68);
      local_20 = 1;
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(local_38);
      *param_1 = uVar2;
      param_1[1] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
      ;
      return;
    }
    *(undefined *)(param_1 + 1) = 1;
  }
  else {
    *(undefined *)(param_1 + 1) = 0;
  }
  *param_1 = 0;
  return;
}