long * _ZN9uu_csplit8patterns12get_patterns17hcf6c39a45494ab6bE(long *param_1)

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
  
  _ZN9uu_csplit8patterns16extract_patterns17h928579bbd5018ce5E(&local_30);
  local_58 = CONCAT44(uStack_14,uStack_18);
  if (CONCAT44(uStack_2c,local_30) != 0xd) {
    param_1[3] = local_58;
    param_1[1] = CONCAT44(uStack_24,uStack_28);
    param_1[2] = CONCAT44(uStack_1c,uStack_20);
    *param_1 = CONCAT44(uStack_2c,local_30);
    param_1[4] = local_10;
    return param_1;
  }
  local_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
                    /* try { // try from 00220709 to 00220712 has its CatchHandler @ 0022078d */
  _ZN9uu_csplit8patterns21validate_line_numbers17h4ff567dae8ebad70E
            (&local_30,CONCAT44(uStack_1c,uStack_20));
  if (local_30 == 0xd) {
    param_1[3] = local_58;
    param_1[1] = CONCAT44(uStack_64,local_68);
    param_1[2] = CONCAT44(uStack_5c,uStack_60);
    *param_1 = 0xd;
    return param_1;
  }
  param_1[4] = local_10;
  *(undefined4 *)(param_1 + 2) = uStack_20;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_1c;
  *(undefined4 *)(param_1 + 3) = uStack_18;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_14;
  *(int *)param_1 = local_30;
  *(undefined4 *)((long)param_1 + 4) = uStack_2c;
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_24;
  _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_csplit__patterns__Pattern_GT__GT_17hb8a5ba762c76bd0bE
            (&local_68);
  return param_1;
}