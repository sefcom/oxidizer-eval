undefined8 *
_ZN9uu_mktemp4exec17heedcd9fa9b859fddE(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  char param_9;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_9 == '\0') {
    _ZN9uu_mktemp14make_temp_file17hb72bef91cb9e45f4E(&local_68,param_2,param_3);
  }
  else {
    _ZN9uu_mktemp13make_temp_dir17h6dfece6cf0e8d640E(&local_68,param_2,param_3);
  }
  if (CONCAT44(uStack_64,local_68) != -0x8000000000000000) {
    local_48 = local_60;
    local_40 = local_58;
                    /* try { // try from 00166639 to 001666af has its CatchHandler @ 001666b2 */
    lVar2 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_001ffe00)();
    if (lVar2 == 0) {
      ppuVar3 = &PTR_s_src_uu_mktemp_src_mktemp_rs_001f9100;
    }
    else {
      (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ffdf8)(&local_68,lVar2);
      if (local_68 != 1) {
        _ZN3std4path4Path4join17h54ca0a2412d4ea69E(&local_38,param_2,param_3,local_60,local_58);
        param_1[2] = local_28;
        *(undefined4 *)param_1 = local_38;
        *(undefined4 *)((long)param_1 + 4) = uStack_34;
        *(undefined4 *)(param_1 + 1) = uStack_30;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4af838b51e1cae1bE(local_50);
        return param_1;
      }
      ppuVar3 = &PTR_s_src_uu_mktemp_src_mktemp_rs_001f9118;
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffdd0)(ppuVar3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[1] = local_60;
  param_1[2] = local_58;
  *param_1 = 0x8000000000000000;
  return param_1;
}