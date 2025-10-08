undefined8
_ZN2fd6output20print_trailing_slash17h43af0d27fcc999ecE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  uint extraout_EDX;
  undefined8 local_a8;
  undefined local_a0;
  undefined7 uStack_9f;
  undefined uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined local_70;
  undefined8 local_6f;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  bVar1 = _ZN2fd9dir_entry8DirEntry9file_type17ha8777f9a24494ad2E(param_2);
  if (((extraout_EDX & 0xf000) == 0x4000 & bVar1) == 1) {
    if (param_5 == 0) {
      local_78 = 0;
      local_70 = 0;
      local_6f = _DAT_00170da0;
    }
    else {
      (*(code *)PTR__ZN8lscolors5style5Style21to_nu_ansi_term_style17h4f37f75a73819d26E_00540978)
                (&local_a8,param_5);
      local_6f = CONCAT17(uStack_98,uStack_9f);
      local_78 = local_a8;
      local_70 = local_a0;
    }
    local_a8 = 0x8000000000000000;
    local_a0 = (undefined)param_3;
    uStack_9f = (undefined7)((ulong)param_3 >> 8);
    local_90 = 0x8000000000000002;
    local_58 = 
    PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00540980
    ;
    local_50 = &DAT_00170810;
    local_48 = 1;
    local_30 = 0;
    local_40 = &local_60;
    local_38 = 1;
                    /* try { // try from 002f6b72 to 002f6b7e has its CatchHandler @ 002f6b9c */
    uStack_98 = param_4;
    local_60 = (undefined *)&local_a8;
    uVar2 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(param_1,&local_50);
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hed8dd3841b2e91c8E
              (&local_a8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}