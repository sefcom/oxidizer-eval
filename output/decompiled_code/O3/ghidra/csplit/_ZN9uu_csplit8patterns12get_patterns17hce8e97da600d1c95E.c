long * __rustcall uu_csplit::patterns::get_patterns(long *param_1)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  long local_10;
  
  extract_patterns(&local_30);
  local_58 = CONCAT44(uStack_14,uStack_18);
  if (CONCAT44(uStack_2c,local_30) == 0xc) {
    local_68 = uStack_28;
    uStack_64 = uStack_24;
    uStack_60 = uStack_20;
    uStack_5c = uStack_1c;
                    /* try { // try from 002b4439 to 002b4442 has its CatchHandler @ 002b44af */
    validate_line_numbers(&local_30,CONCAT44(uStack_1c,uStack_20));
    if (local_30 == 0xc) {
      param_1[3] = local_58;
      param_1[1] = CONCAT44(uStack_64,local_68);
      param_1[2] = CONCAT44(uStack_5c,uStack_60);
      *param_1 = 0xc;
    }
    else {
      param_1[4] = local_10;
      *(undefined4 *)(param_1 + 2) = uStack_20;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_1c;
      *(undefined4 *)(param_1 + 3) = uStack_18;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_14;
      *(int *)param_1 = local_30;
      *(undefined4 *)((long)param_1 + 4) = uStack_2c;
      *(undefined4 *)(param_1 + 1) = uStack_28;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_24;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&local_68);
    }
  }
  else {
    param_1[3] = local_58;
    param_1[1] = CONCAT44(uStack_24,uStack_28);
    param_1[2] = CONCAT44(uStack_1c,uStack_20);
    *param_1 = CONCAT44(uStack_2c,local_30);
    param_1[4] = local_10;
  }
  return param_1;
}