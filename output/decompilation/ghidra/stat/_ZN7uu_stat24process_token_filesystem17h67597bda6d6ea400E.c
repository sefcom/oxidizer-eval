void _ZN7uu_stat24process_token_filesystem17h67597bda6d6ea400E
               (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *local_78;
  undefined *local_70;
  undefined4 local_5c;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = (undefined *)&local_78;
  lVar1 = *param_1;
  uVar5 = 2;
  if (lVar1 - 3U < 2) {
    uVar5 = lVar1 - 3U;
  }
  if (uVar5 == 0) {
    local_5c = *(undefined4 *)(param_1 + 1);
    local_78 = &local_5c;
    local_70 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00222288
    ;
    local_58 = &DAT_0011ab40;
    local_50 = 1;
    local_38 = 0;
    local_40 = 1;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00222270)(&local_58);
    return;
  }
  if (uVar5 == 1) {
    _ZN7uu_stat14write_raw_byte17hbbf81da3232f2130E(*(undefined4 *)(param_1 + 1));
    return;
  }
  uVar4 = *(undefined8 *)((long)param_1 + 0x1c);
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  switch(*(undefined4 *)(param_1 + 3)) {
  case 0x53:
    local_70 = (undefined *)param_2[1];
    local_78 = (undefined4 *)0x8000000000000000;
    goto LAB_00174335;
  case 0x54:
    (*(code *)PTR__ZN6uucore8features5fsext13pretty_fstype17h1889f022e4b32583E_00222290)
              (&local_58,*param_2,lVar3);
    (*(code *)
      PTR__ZN98__LT_alloc__string__String_u20_as_u20_core__convert__From_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_4from17hf538378189c0d550E_00222298
    )(&local_78,&local_58);
    goto LAB_00174335;
  default:
    local_78 = (undefined4 *)0x8000000000000005;
    goto LAB_00174335;
  case 0x61:
    local_70 = (undefined *)param_2[4];
    break;
  case 0x62:
    local_70 = (undefined *)param_2[2];
    break;
  case 99:
    local_70 = (undefined *)param_2[5];
    break;
  case 100:
    local_70 = (undefined *)param_2[6];
    break;
  case 0x66:
    local_70 = (undefined *)param_2[3];
    break;
  case 0x69:
    local_70 = (undefined *)
               CONCAT44(*(undefined4 *)(param_2 + 7),*(undefined4 *)((long)param_2 + 0x3c));
    goto LAB_001742db;
  case 0x6c:
    local_70 = (undefined *)param_2[8];
    break;
  case 0x6e:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (&local_78,param_3,param_4,lVar1,lVar2);
    goto LAB_00174335;
  case 0x73:
    local_70 = (undefined *)param_2[9];
    break;
  case 0x74:
    local_70 = (undefined *)*param_2;
LAB_001742db:
    local_78 = (undefined4 *)0x8000000000000002;
    goto LAB_00174335;
  }
  local_78 = (undefined4 *)0x8000000000000001;
LAB_00174335:
                    /* try { // try from 00174335 to 0017433c has its CatchHandler @ 00174363 */
  _ZN7uu_stat8print_it17hbae1e67489e4141fE(&local_78,uVar4,lVar3,lVar1,lVar2);
  _ZN4core3ptr40drop_in_place_LT_uu_stat__OutputType_GT_17h618762e13dd348efE(&local_78);
  return;
}