void _ZN7uu_stat20get_quoted_file_name17haf9755dc3410fa80E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5,char param_6)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined *local_f0;
  undefined *local_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_b8;
  code *pcStack_b0;
  undefined *local_a8;
  code *local_a0;
  undefined local_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN3std3env3var17h6d4b4daaa54522c9E(&local_f0);
  if ((int)local_f0 == 1) {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17hc0146691c34201b9E
              (&local_f0);
  }
  else {
    puVar1 = (undefined *)ppuStack_e0;
    ppuStack_e0 = (undefined **)puStack_d8;
    local_f0 = local_e8;
    local_e8 = puVar1;
    cVar2 = _ZN7uu_stat20get_quoted_file_name28__u7b__u7b_closure_u7d__u7d_17h85c48b80cc5cc956E
                      (&local_f0);
    if (cVar2 != '\x04') goto LAB_00173e46;
  }
  cVar2 = '\x02';
LAB_00173e46:
  if ((param_5 & 0xf000) != 0xa000) {
    cVar3 = '\x03';
    if (param_6 != '\0') {
      cVar3 = cVar2;
    }
    _ZN7uu_stat15quote_file_name17ha37da13d8b9cf7feE(param_1,param_2,param_3,cVar3);
    return;
  }
  _ZN7uu_stat15quote_file_name17ha37da13d8b9cf7feE(local_60,param_2,param_3,cVar2);
                    /* try { // try from 00173e75 to 00173e84 has its CatchHandler @ 001740e5 */
  _ZN3std2fs9read_link17h746ec00310f2005bE(&local_78,param_4);
                    /* try { // try from 00173fb5 to 00173fc2 has its CatchHandler @ 001740ad */
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_00222280)
            (&local_f0,local_70,local_68);
                    /* try { // try from 00173fcd to 00173fdb has its CatchHandler @ 0017409e */
  _ZN7uu_stat15quote_file_name17ha37da13d8b9cf7feE(local_90,local_e8,ppuStack_e0,cVar2);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha7af664bba1b7bffE(&local_f0);
  pcStack_b0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_a0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_f0 = &DAT_00219c08;
  local_e8 = (undefined *)0x2;
  local_d0 = 0;
  ppuStack_e0 = &local_b8;
  puStack_d8 = (undefined *)0x2;
                    /* try { // try from 00174032 to 00174043 has its CatchHandler @ 0017408f */
  local_b8 = local_60;
  local_a8 = local_90;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(&local_48,&local_f0);
  *(undefined8 *)(param_1 + 4) = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_90);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf5e02e6973b3fafaE(local_78,local_70);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_60);
  return;
}