undefined8 *
_ZN6uu_env13string_parser12StringParser34consume_one_ascii_or_all_non_ascii17hba4a109ff858d0ecE
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58 [2];
  long local_50;
  uint local_48;
  long local_40 [2];
  
  local_78 = 0;
  uStack_70 = 8;
  local_68 = 0;
  local_60 = param_1;
  do {
                    /* try { // try from 00171820 to 00171894 has its CatchHandler @ 00171903 */
    (*(code *)
      PTR__ZN6uu_env13string_parser12StringParser13consume_chunk17h727b81068f6a78cbE_00219370)
              (local_58,param_2);
    uVar2 = local_48;
    puVar1 = local_60;
    if (local_58[0] == 1) {
      local_60[1] = local_50;
      *(undefined *)(local_60 + 2) = (undefined)local_48;
      *local_60 = 0x8000000000000000;
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hcb8c0c6e863a6af8E
                (local_78,uStack_70);
      return puVar1;
    }
    local_40[0] = local_50;
    if (local_50 == 0) {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h04893168b3880b2cE(&local_78,local_40);
      if (uVar2 < 0x80) {
LAB_001718b3:
        local_60[2] = local_68;
        *local_60 = local_78;
        local_60[1] = uStack_70;
        return local_60;
      }
    }
    else {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h04893168b3880b2cE(&local_78,local_40);
    }
    (*(code *)PTR__ZN6uu_env13string_parser12StringParser10peek_chunk17hf5c7644aaf7843cbE_00219368)
              (local_58,param_2);
    if ((local_58[0] != 1) || ((local_50 == 0 && (local_48 < 0x80)))) goto LAB_001718b3;
  } while( true );
}