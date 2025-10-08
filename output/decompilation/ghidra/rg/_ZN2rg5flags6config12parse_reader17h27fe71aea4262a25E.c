void _ZN2rg5flags6config12parse_reader17h27fe71aea4262a25E(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined local_40 [48];
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h50b9b4beb83c152bE(local_40);
  local_a8 = 0;
  uStack_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 8;
  local_80 = 0;
  local_ac = 0;
                    /* try { // try from 003447c8 to 003447e6 has its CatchHandler @ 00344877 */
  lVar1 = _ZN4bstr2io10BufReadExt31for_byte_record_with_terminator17h66145550a49db0e8E
                    (local_40,&local_ac,&local_a8);
  if (lVar1 == 0) {
    local_68 = local_98;
    local_78 = (undefined4)local_a8;
    uStack_74 = local_a8._4_4_;
    uStack_70 = (undefined4)uStack_a0;
    uStack_6c = uStack_a0._4_4_;
    local_50 = local_80;
    local_60 = local_90;
    uStack_58 = uStack_88;
    *(undefined4 *)param_1 = (undefined4)local_a8;
    *(undefined4 *)((long)param_1 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_a0._4_4_;
    param_1[4] = uStack_88;
    param_1[5] = local_80;
    param_1[2] = local_98;
    param_1[3] = local_90;
  }
  else {
    uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h93265d5384100ee9E
                      (lVar1);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 003447f8 to 00344801 has its CatchHandler @ 00344872 */
    _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_anyhow__Error_GT__GT_17h0158ef9d20de58a6E
              (&local_90);
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17hdf4ecb22c21181e2E
              (&local_a8);
  }
  _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hcaeffd1f8d924e0aE
            (local_40);
  return;
}